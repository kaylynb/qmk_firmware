#include "mcp23018.h"

#include <print.h>
#define MCP23018_ADDR 0b1000000

enum {
    CMD_IODIRA = 0x00,
    CMD_GPPUA = 0x0C,

    CMD_GPIOA = 0x12,
    CMD_GPIOB = 0x13
};

i2c_status_t mcp23018_init(void) {
    uint8_t iodir[] = {0b00001111, 0b00000000};

    i2c_status_t result = i2c_writeReg(MCP23018_ADDR, CMD_IODIRA, (uint8_t*)&iodir, sizeof(iodir), 100);
    result = i2c_writeReg(MCP23018_ADDR, CMD_GPPUA, (uint8_t*)&iodir, sizeof(iodir), 100);

    return result;
}

i2c_status_t mcp23018_select_row(uint8_t row) {
    i2c_status_t result = i2c_writeReg(MCP23018_ADDR, CMD_GPIOB, &row, sizeof(row), 100);

    return result;
}

i2c_status_t mcp23018_read(uint8_t* a, uint8_t* b) {
    uint8_t ab[2];

    i2c_status_t result = i2c_readReg(MCP23018_ADDR, CMD_GPIOA, (uint8_t*)&ab, sizeof(ab), 100);

    *a = ab[0];
    *b = ab[1];

    return result;
}
