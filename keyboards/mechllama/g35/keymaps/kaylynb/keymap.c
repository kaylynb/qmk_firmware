/* Copyright 2020 Kaylyn Bogle
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

enum layers {
    _BASE = 0,
    // _BANNERLORD,
    // _BANNERLORD_ALT,
    // _COH2,
    _CYBERPUNK,
    _HUNT,
    _MINECRAFT,
    // _OUTER_WORLDS,
    _SATISFACTORY,
    // _STALKER_COP,
    // _STATE_OF_DECAY,
    _VALHEIM,
    _ADJUST,
};

enum custom_keycodes {
    VALHEIM_ONETWO = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
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
    MO(_ADJUST),KC_LGUI, KC_LALT, KC_BSPC,  KC_LALT,  KC_SPC, KC_LCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    //[_BANNERLORD] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //    KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_F5,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_GRV,  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_X,   KC_BSLS,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //     KC_I, KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,  XXXXXXX,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //    KC_N,   KC_C,    KC_P,    KC_X,    KC_R,    KC_Z, LALT(KC_F11),
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    ////
    //   _______, XXXXXXX,   KC_R,  KC_LSFT, KC_LALT,  MO(_BANNERLORD_ALT),  KC_SPC
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    //[_BANNERLORD_ALT] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //   _______, _______,   KC_6,    KC_7,    KC_8,    KC_9, _______,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //   _______,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_0,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //   _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_LCTL,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //   _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9, _______, _______,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    ////
    //   _______, _______, _______, _______, _______, _______, _______
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    [_HUNT] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC, XXXXXXX,   KC_4,    KC_5,    KC_6,  XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX,   KC_1,    KC_W,    KC_2,    KC_R,  LALT(KC_Y),
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB, KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_7,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
       XXXXXXX,   KC_7,    KC_8,    KC_0,    KC_9,    KC_X,  LALT(KC_F11),
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //
       _______, XXXXXXX, XXXXXXX,   KC_E,    KC_3,  KC_LCTL,  KC_SPC
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [_MINECRAFT] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC, XXXXXXX,   KC_4,    KC_5,    KC_6,  XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX,   KC_1,    KC_W,    KC_E,    KC_R,  LALT(KC_Y),
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_CAPS,KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
         KC_Z,  KC_LSFT,   KC_2,    KC_3,    KC_M,    KC_N,   KC_Q,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //
       _______, LALT(KC_F11), XXXXXXX,   KC_E,    KC_LSFT,  KC_SPC,  KC_SPC
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [_SATISFACTORY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC, XXXXXXX,   KC_4,    KC_5,    KC_6,   KC_7,    KC_9,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX,   KC_Q,    KC_W,    KC_E,    KC_9,   KC_R,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB, KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,   KC_B,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
        KC_Z,   KC_LCTL,   KC_1,    KC_2,    KC_3,    KC_C,   KC_0,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //
       _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,  KC_SPC, KC_LCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [_CYBERPUNK] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC,   KC_F5,   KC_1,    KC_T,    KC_3,  XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
         KC_I,    KC_M,    KC_Q,    KC_W,    KC_E,    KC_R,  XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB, KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,  XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
         KC_M,    KC_Z,    KC_8,    KC_X,    KC_C,    KC_V,  XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //
       _______, XXXXXXX, XXXXXXX,   KC_LCTL,   KC_LALT,   KC_SPC,  KC_X
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    //[_COH2] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //    KC_ESC,  KC_TAB,   KC_1,    KC_2,    KC_3,    KC_4,  KC_BSPC,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_F4,   KC_F5,    KC_Q,    KC_W,    KC_E,    KC_R,  XXXXXXX,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_F1,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,  LCTL(KC_A),
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //    KC_F2,   KC_F3,    KC_Z,    KC_X,    KC_C,    KC_V,  XXXXXXX,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    ////
    //   _______, XXXXXXX, XXXXXXX, KC_LALT, KC_LCTL, KC_MS_BTN3, KC_P0
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    //[_STATE_OF_DECAY] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //    KC_ESC, XXXXXXX,   KC_4,    KC_5,    KC_6,    KC_B,  KC_U,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //   XXXXXXX, XXXXXXX,   KC_Q,    KC_W,    KC_E,    KC_R,   KC_Y,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //     KC_M,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,   KC_N,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //   XXXXXXX,   KC_I,    KC_Z,    KC_X,    KC_C,    KC_2,  LALT(KC_F11),
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    ////
    //   _______, XXXXXXX, XXXXXXX,   KC_E,    KC_T,  KC_LCTL,  KC_SPC
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    //[_STALKER_COP] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //   KC_ESC,    KC_1,    KC_4,    KC_5,    KC_6,    KC_N,   KC_F4,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //     KC_9,    KC_0,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_F3,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //     KC_M,  KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,   KC_F2,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //     KC_O,    KC_I,    KC_2,    KC_4,    KC_2,    KC_3,   KC_F1,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    ////
    //   _______,  KC_F5,    KC_Y,    KC_L,  KC_LALT, KC_LCTL,  KC_SPC
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    //[_OUTER_WORLDS] = LAYOUT(
    ////┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //    KC_ESC,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_F5,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_F2,    KC_I,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_TAB,  KC_LSFT,   KC_A,    KC_S,    KC_D,   KC_F,  _______,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //    KC_J,  KC_LCTL,   KC_C,    KC_X,    KC_V,    KC_Z,    KC_F9,
    ////├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    ////
    //   _______, _______, _______, _______,   KC_F,   KC_SPC, KC_LCTL
    ////└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    //),
    [_VALHEIM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F2,    KC_7,VALHEIM_ONETWO,KC_W,  KC_E,    KC_R,    KC_T,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_8,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F4,    KC_6,    KC_Z,    KC_X,    KC_C,    KC_5,    KC_M,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //
       _______, KC_LGUI, KC_LALT, KC_BSPC,  KC_ENT,  KC_SPC, KC_LCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [_ADJUST] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       RGB_TOG,TO(_BASE),TO(_HUNT),TO(_MINECRAFT), TO(_SATISFACTORY), TO(_CYBERPUNK), TO(_VALHEIM),
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       RGB_M_K, XXXXXXX, RGB_RMOD,RGB_HUI, RGB_MOD, XXXXXXX,  XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX, RGB_SAD, RGB_HUD, RGB_SAI, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
       XXXXXXX, XXXXXXX, RGB_VAD, XXXXXXX, RGB_VAI, XXXXXXX,  RESET,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼
    //
       _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  ),
};

bool process_record_keymap(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case VALHEIM_ONETWO:
            if (record->event.pressed) {
                register_code(KC_1);
                register_code(KC_2);
            } else {
                unregister_code(KC_1);
                unregister_code(KC_2);
            }
            return false;
    }

    return true;
}

#if defined(OLED_DRIVER_ENABLE)
static bool g_oled_dirty = false;

const char* get_layer_name(uint8_t layer) {
    switch (layer) {
        case _BASE:
            return PSTR("Default");

        case _ADJUST:
            return PSTR("Adjust");

        // case _BANNERLORD:
        //     return PSTR("Bannerlord");

        // case _BANNERLORD_ALT:
        //     return PSTR("Bannerlord - Orders");

        // case _COH2:
        //     return PSTR("COH:2");

        case _CYBERPUNK:
            return PSTR("Cyberpunk 2077");

        case _HUNT:
            return PSTR("Hunt: Showdown");

        case _MINECRAFT:
            return PSTR("Minecraft");

        // case _OUTER_WORLDS:
        //     return PSTR("The Outer Worlds");

        case _SATISFACTORY:
            return PSTR("Satisfactory");

        // case _STALKER_COP:
        //     return PSTR("Stalker: COP");

        // case _STATE_OF_DECAY:
        //     return PSTR("State Of Decay");

        case _VALHEIM:
            return PSTR("Valheim");

        default:
            return PSTR("Unknown");
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    g_oled_dirty = true;

    return state;
}

void oled_task_user(void) {
    if (g_oled_dirty) {
        oled_write_ln_P(get_layer_name(biton32(layer_state)), false);
        g_oled_dirty = false;
    }
}
#endif
