/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
 *    `qmk chibios-confmigrate -i keyboards/mechllama/s42/v3/mcuconf.h -r platforms/chibios/GENERIC_STM32_F072XB/configs/mcuconf.h`
 */

#pragma once

#include_next <mcuconf.h>

#undef STM32_HSI48_ENABLED
#define STM32_HSI48_ENABLED TRUE

#undef STM32_I2C1SW
#define STM32_I2C1SW STM32_I2C1SW_SYSCLK

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE

#undef STM32_I2C_I2C1_RX_DMA_STREAM
#define STM32_I2C_I2C1_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 3)

#undef STM32_I2C_I2C1_TX_DMA_STREAM
#define STM32_I2C_I2C1_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 2)

#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 TRUE

