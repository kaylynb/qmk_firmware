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

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { B0, A7, A6, A5 }
#define MATRIX_COL_PINS { B11, B10, B2, B1 }

#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 8U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 8U
#define I2C1_TIMINGR_SCLL 21U

#define I2C1_SCL 8
#define I2C1_SDA 9

#define DEBUG_MATRIX_SCAN_RATE
