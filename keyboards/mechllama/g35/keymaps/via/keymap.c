/* Copyright 2019 Kaylyn Bogle
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F2,   KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F3,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F4,  KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //
    KC_LGUI,KC_LGUI, KC_LALT, KC_BSPC,  KC_ENT,  KC_SPC, KC_MINUS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F2,   KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F3,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F4,  KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //
    KC_LGUI,KC_LGUI, KC_LALT, KC_BSPC,  KC_ENT,  KC_SPC, KC_MINUS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F2,   KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F3,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F4,  KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //
    KC_LGUI,KC_LGUI, KC_LALT, KC_BSPC,  KC_ENT,  KC_SPC, KC_MINUS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [3] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F2,   KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F3,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F4,  KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //
    KC_LGUI,KC_LGUI, KC_LALT, KC_BSPC,  KC_ENT,  KC_SPC, KC_MINUS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
};
