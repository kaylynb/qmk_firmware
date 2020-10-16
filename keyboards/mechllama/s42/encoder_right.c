/*
Copyright 2018 Jack Humbert <jack.humb@gmail.com>
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
#include "encoder_right.h"

#ifndef ENCODER_DIRECTION_FLIP
#    define ENCODER_CLOCKWISE true
#    define ENCODER_COUNTER_CLOCKWISE false
#else
#    define ENCODER_CLOCKWISE false
#    define ENCODER_COUNTER_CLOCKWISE true
#endif

#ifndef ENCODER_RESOLUTION
#    define ENCODER_RESOLUTION 4
#endif

#define NUMBER_OF_RIGHT_ENCODERS 3

static int8_t encoder_right_LUT[] = {0, -1, 1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0};

static uint8_t encoder_right_state[NUMBER_OF_RIGHT_ENCODERS]  = {0};
static int8_t  encoder_right_pulses[NUMBER_OF_RIGHT_ENCODERS] = {0};
static uint8_t encoder_right_value[NUMBER_OF_RIGHT_ENCODERS] = {0};

__attribute__((weak)) void encoder_update_user(int8_t index, bool clockwise) {}

__attribute__((weak)) void encoder_update_kb(int8_t index, bool clockwise) { encoder_update_user(index, clockwise); }

static void encoder_right_update(int8_t index, uint8_t state) {
    uint8_t i = index;

    encoder_right_pulses[i] += encoder_right_LUT[state & 0xF];
    if (encoder_right_pulses[i] >= ENCODER_RESOLUTION) {
        encoder_right_value[index]++;
        encoder_update_kb(index + NUMBER_OF_RIGHT_ENCODERS, ENCODER_COUNTER_CLOCKWISE);
    }
    if (encoder_right_pulses[i] <= -ENCODER_RESOLUTION) {  // direction is arbitrary here, but this clockwise
        encoder_right_value[index]--;
        encoder_update_kb(index + NUMBER_OF_RIGHT_ENCODERS, ENCODER_CLOCKWISE);
    }
    encoder_right_pulses[i] %= ENCODER_RESOLUTION;
}

void encoder_right_read(uint8_t p0, uint8_t p1) {
    for (uint8_t i = 0; i < NUMBER_OF_RIGHT_ENCODERS; i++) {
        encoder_right_state[i] <<= 2;

        // Pins are reversed on right side due to board flip; swap the shift orders for pin A and B.
        switch (i) {
            case 0:
                // RE3/K3:1
                // A: P16, B: P17
                encoder_right_state[i] |= ((p1 & 0b01000000) >> 5) | ((p1 & 0b10000000) >> 7);
                break;

            case 1:
                // RE1/K3:4
                // A: P06, B: P07
                encoder_right_state[i] |= ((p0 & 0b01000000) >> 5) | ((p0 & 0b10000000) >> 7);
                break;

            case 2:
                // RE2/K:35
                // A: P14, B: P15
                encoder_right_state[i] |= ((p1 & 0b00010000) >> 3) | ((p1 & 0b00100000) >> 5);
        }

        encoder_right_update(i, encoder_right_state[i]);
    }
}

