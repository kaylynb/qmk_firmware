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

