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

#define DEVICE_VER  0x0300

#define MATRIX_ROW_PINS { B5, B6, B7, B4 }
#define MATRIX_COL_PINS { A3, A4, B3, A15, B13, B12 }

#define I2C1_SCL 8
#define I2C1_SDA 9
#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1

// Rise: 75
// Fall: 110
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 1U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 2U
#define I2C1_TIMINGR_SCLL 6U
