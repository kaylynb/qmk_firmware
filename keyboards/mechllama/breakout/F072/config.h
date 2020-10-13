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

#ifdef I2C_FMP
#if defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM+ RGB+IOEX
// Rise: 100
// Fall: 112
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 7U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 8U
#define I2C1_TIMINGR_SCLL 19U
#endif

#if defined(RGB_MATRIX_ENABLE) && !defined(IOEX_ENABLE)
// FM+ RGB
// Rise: 85
// Fall: 115
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 6U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 8U
#define I2C1_TIMINGR_SCLL 20U
#endif


#if !defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM+ IOEX
// Rise: 100
// Fall: 110
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 7U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 8U
#define I2C1_TIMINGR_SCLL 19U
#endif

#else

#if defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM RGB+IOEX
// Rise: 280
// Fall: 140
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 6U
#define I2C1_TIMINGR_SCLDEL 2U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 3U
#define I2C1_TIMINGR_SCLL 8U
#endif

#if defined(RGB_MATRIX_ENABLE) && !defined(IOEX_ENABLE)
// FM RGB
// Rise: 240
// Fall: 140
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 5U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 8U
#define I2C1_TIMINGR_SCLL 21U
#endif

#if !defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM IEOX
// Rise: 260
// Fall: 115
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 5U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 10U
#define I2C1_TIMINGR_SCLL 19U
#endif

#endif

#define I2C1_SCL 8
#define I2C1_SDA 9

#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1
