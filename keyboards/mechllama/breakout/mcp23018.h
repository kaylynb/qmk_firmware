#pragma once

#include "i2c_master.h"

i2c_status_t mcp23018_init(void);

i2c_status_t mcp23018_select_row(uint8_t row);
i2c_status_t mcp23018_read(uint8_t* a, uint8_t* b);
