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
#include "breakout.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
    { 0, A_1, B_1, C_1 },
    { 0, A_2, B_2, C_2 },
    { 0, A_3, B_3, C_4 },
    { 0, A_4, B_4, C_4 },

    { 0, D_1, E_1, F_1 },
    { 0, D_2, E_2, F_2 },
    { 0, D_3, E_3, F_3 },
    { 0, D_4, E_4, F_4 },

    { 0, G_1, H_1, I_1 },
    { 0, G_2, H_2, I_2 },
    { 0, G_3, H_3, I_3 },
    { 0, G_4, H_4, I_4 },

    { 0, J_1, K_1, L_1 },
    { 0, J_2, K_2, L_2 },
    { 0, J_3, K_3, L_3 },
    { 0, J_4, K_4, L_4 },
};

led_config_t g_led_config = { {
    { 4, 3, 2, 1, NO_LED, NO_LED, NO_LED, NO_LED },
    { 8, 7, 6, 5, NO_LED, NO_LED, NO_LED, NO_LED },
    { 12, 11, 10, 9, NO_LED, NO_LED, NO_LED, NO_LED },
    { 16, 15, 14, 13, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
    { 0, 0 }, { 75, 0 }, { 149, 0 }, { 224, 0 },
    { 0, 21 }, { 75, 21 }, { 149, 21 }, { 224, 21 },
    { 0, 43 }, { 75, 43 }, { 149, 43 }, { 224, 43 },
    { 0, 64 }, { 75, 64 }, { 149, 64 }, { 224, 64 }
}, {
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4

} };
#endif
