/*
Copyright 2020 Kaylyn Bogle <kaylyn@kaylyn.ink>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "quantum.h"

#include "pca9675.h"

#ifdef ENCODER_ENABLE
#include "encoder_right.h"
#endif

static const pin_t row_pins[MATRIX_ROWS] = MATRIX_ROW_PINS;
static const pin_t col_pins[MATRIX_COLS] = MATRIX_COL_PINS;

// Keep global state for io expander to save on excess commmunication for encoders
static uint8_t pca9675_p0 = 0b11111111, pca9675_p1 = 0b11111111;

static uint16_t pca9675_reset_loop = 0;
static uint8_t pca9675_errors = 0;

static void select_row(uint8_t row) {
    setPinOutput(row_pins[row]);
    writePinLow(row_pins[row]);

    // P10, P11, P12, P13
    if(!pca9675_errors) {
        pca9675_errors += !pca9675_write(
            0b11111111,
            0b11110000 | ~(0b00000001 << row) // Preserve input mode for encoders
        );
    }
}

// IO expander does not need to deselect row as that is done during select.
static void unselect_row(uint8_t row) { setPinInputHigh(row_pins[row]); }

static void init_pins(void) {
    for (uint8_t x = 0; x < MATRIX_COLS / 2; x++) {
        setPinInputHigh(col_pins[x]);
    }

    for (uint8_t x = 0; x < MATRIX_ROWS; x++) {
        setPinInputHigh(row_pins[x]);
    }
}

static bool read_cols_on_row(matrix_row_t current_matrix[], uint8_t current_row) {
    matrix_row_t last_row_value = current_matrix[current_row];

    current_matrix[current_row] = 0;

    select_row(current_row);

    // Read all columns at once on ioexpander board
    // P00, P01, P02, P03, P04, P05
    if (!pca9675_errors) {
        pca9675_errors += !pca9675_read(&pca9675_p0, &pca9675_p1);
    }

    // If right half is not connected, just blank out inputs
    // and use IO delay since i2c delay is no longer happening.
    if (pca9675_errors) {
#ifdef ENCODER_ENABLE
        // Preserve encoder values
        pca9675_p0 = pca9675_p0 | 0b00111111;
        pca9675_p1 = pca9675_p1 | 0b00001111;
#else
        pca9675_p0 = pca9675_p1 = 0b11111111;
#endif
        matrix_io_delay();
    }

    for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
        uint8_t pin_state;

        if (col_index < MATRIX_COLS / 2) {
            // Select the col pin to read (active low)
            pin_state = readPin(col_pins[col_index]);
        } else {
            // Select pin state from IO expander
            pin_state = (pca9675_p0 & (1 << (col_index - MATRIX_COLS / 2 )));
        }

        // Populate the matrix row with the state of the col pin
        current_matrix[current_row] |= pin_state ? 0 : (MATRIX_ROW_SHIFTER << col_index);
    }

    // Unselect row
    unselect_row(current_row);

    return (last_row_value != current_matrix[current_row]);
}

void matrix_init_custom(void) {
    pca9675_init();
    pca9675_write(pca9675_p0, pca9675_p1);

    init_pins();
}

uint8_t matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool changed = false;

    // Only try communicating with right half every so often to prevent excess IO delay.
    // IO expander reads/writes will only happen when errors are zero.
    if (pca9675_errors && ++pca9675_reset_loop > 5000) {
        pca9675_reset_loop = 0;
        pca9675_errors = 0;
    }

    // Set row, read cols
    for (uint8_t current_row = 0; current_row < MATRIX_ROWS; current_row++) {
        changed |= read_cols_on_row(current_matrix, current_row);
    }

#ifdef ENCODER_ENABLE
    encoder_right_read(pca9675_p0, pca9675_p1);
#endif

    return (uint8_t)changed;
}
