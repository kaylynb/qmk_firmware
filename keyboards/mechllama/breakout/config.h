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
#define PRODUCT_ID      0x6600
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mechllama
#define PRODUCT         Breakout
#define DESCRIPTION     Breakout keyboard

#define MATRIX_ROWS 4
#define MATRIX_COLS 8
#define MATRIX_COLS_PER_SIDE 4

#define MATRIX_ROW_PINS { B0, A7, A6, A5 }
#define MATRIX_COL_PINS { B11, B10, B2, B1 }

#define DEBUG_MATRIX_SCAN_RATE

#define IOEX_ENABLE

#define DEBOUNCE 0

#undef I2C_ADDRESS_SA0_1
#define I2C_ADDRESS_SA0_1 0b0111100
#define LCDWIDTH      128
#define LCDHEIGHT     32

#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000
#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 24
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
