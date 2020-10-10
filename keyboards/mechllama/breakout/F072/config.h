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

// fm+
// rise: 100
// fall: 70
// 470Ohm
// #define I2C1_TIMINGR_PRESC 0U
// #define I2C1_TIMINGR_SCLDEL 7U
// #define I2C1_TIMINGR_SDADEL 0U
// #define I2C1_TIMINGR_SCLH 8U
// #define I2C1_TIMINGR_SCLL 21U

// fm
// rise: 180
// fall: 120
// 1.8kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 13U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 24U
#define I2C1_TIMINGR_SCLL 71U

#define I2C1_SCL 8
#define I2C1_SDA 9

#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1
