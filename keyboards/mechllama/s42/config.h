#pragma once

#include "config_common.h"

#define VENDOR_ID       0xCEEB
#define PRODUCT_ID      0x8342
#define MANUFACTURER    MechLlama
#define PRODUCT         S42
#define DESCRIPTION     Split keyboard

#define MATRIX_ROWS 4
#define MATRIX_COLS 12
#define MATRIX_COLS_PER_SIDE 6

#define MATRIX_ROW_PINS { B5, B6, B7, B4 }
#define MATRIX_COL_PINS { A3, A4, B3, A15, B13, B12 }

#define DIODE_DIRECTION COL2ROW

#define DEBUG_MATRIX_SCAN_RATE
#define I2C1_SCL 8
#define I2C1_SDA 9

#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1

