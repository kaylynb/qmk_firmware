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
// Fall: 115
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 10U
#define I2C1_TIMINGR_SDADEL 2U
#define I2C1_TIMINGR_SCLH 13U
#define I2C1_TIMINGR_SCLL 30U
#endif

#if defined(RGB_MATRIX_ENABLE) && !defined(IOEX_ENABLE)
// FM+ RGB
// Rise: 93
// Fall: 115
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 10U
#define I2C1_TIMINGR_SDADEL 2U
#define I2C1_TIMINGR_SCLH 14U
#define I2C1_TIMINGR_SCLL 30U
#endif


#if !defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM+ IOEX
// Rise: 93
// Fall: 115
// 1.6kOhm
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 10U
#define I2C1_TIMINGR_SDADEL 2U
#define I2C1_TIMINGR_SCLH 14U
#define I2C1_TIMINGR_SCLL 30U
#endif

#else

#if defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM RGB+IOEX
// Rise: 280
// Fall: 140
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 1U
#define I2C1_TIMINGR_SCLDEL 13U
#define I2C1_TIMINGR_SDADEL 2U
#define I2C1_TIMINGR_SCLH 18U
#define I2C1_TIMINGR_SCLL 49U
#endif

#if defined(RGB_MATRIX_ENABLE) && !defined(IOEX_ENABLE)
// FM RGB
// Rise: 240
// Fall: 140
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 8U
#define I2C1_TIMINGR_SDADEL 2U
#define I2C1_TIMINGR_SCLH 12U
#define I2C1_TIMINGR_SCLL 33U
#endif

#if !defined(RGB_MATRIX_ENABLE) && defined(IOEX_ENABLE)
// FM IEOX
// Rise: 260
// Fall: 115
// 4.7kOhm
#define I2C1_TIMINGR_PRESC 1U
#define I2C1_TIMINGR_SCLDEL 12U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH 23U
#define I2C1_TIMINGR_SCLL 46U
#endif

#endif

#define I2C1_SCL 8
#define I2C1_SDA 9
