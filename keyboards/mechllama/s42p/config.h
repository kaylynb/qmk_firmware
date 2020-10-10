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

#pragma once

#include "config_common.h"

#define VENDOR_ID       0xCEEB
#define PRODUCT_ID      0x1242
#define DEVICE_VER      0x0100
#define MANUFACTURER    MechLlama
#define PRODUCT         S42p
#define DESCRIPTION     Split ergonomic keyboard prototype

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define USE_I2C
#define F_SCL 400000L

#define QMK_ESC_OUTPUT F5 // usually COL
#define QMK_ESC_INPUT C6 // usually ROW
#define QMK_LED B0
#define QMK_SPEAKER D4
