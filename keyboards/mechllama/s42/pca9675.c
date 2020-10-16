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
#include "pca9675.h"

#include "i2c_master.h"
#include "wait.h"

void pca9675_init(void) {
    i2c_init();

    wait_ms(5);
}

bool pca9675_write(uint8_t p0, uint8_t p1) {
    uint8_t p0p1[] = { p0, p1 };

    i2c_status_t result = i2c_transmit(PCA9675_I2C_ADDR, (uint8_t*)&p0p1, sizeof(p0p1), PCA9675_I2C_TIMEOUT_MS);

    if (I2C_STATUS_SUCCESS != result) {
        return false;
    }

    return true;
}

bool pca9675_read(uint8_t* p0, uint8_t* p1) {
    uint8_t p0p1[2];

    i2c_status_t result = i2c_receive(PCA9675_I2C_ADDR, (uint8_t*)&p0p1, sizeof(p0p1), PCA9675_I2C_TIMEOUT_MS);

    if (I2C_STATUS_SUCCESS != result) {
        return false;
    }

    *p0 = p0p1[0];
    *p1 = p0p1[1];

    return true;
}
