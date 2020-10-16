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

#include <stdbool.h>
#include <stdint.h>

// Address already shifted << 1
#define PCA9675_I2C_ADDR                0x40

#define PCA9675_I2C_TIMEOUT_MS          1

void pca9675_init(void);
bool pca9675_write(uint8_t p0, uint8_t p1);
bool pca9675_read(uint8_t* p0, uint8_t* p1);
