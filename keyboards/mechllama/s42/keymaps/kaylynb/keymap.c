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
#include QMK_KEYBOARD_H

#include "kaylynb_split.h"

enum custom_keycodes_keymap {
    ENC2_PRESSED = CUSTOM_WRAPPER_END
};

#define LAYOUT_WIRED(                                                     \
  L00, L01, L02, L03, L04, L05,             R05, R04, R03, R02, R01, R00, \
  L10, L11, L12, L13, L14, L15,        R35, R15, R14, R13, R12, R11, R10, \
  L20, L21, L22, L23, L24, L25,        R34, R25, R24, R23, R22, R21, R20, \
                      L31, L32, L33,       R33, R32, R31                  \
)                                                                         \
LAYOUT_wrapper(                                                                                                                           \
/*┌────────┬────────┬────────┬────────┬────────┬────────┐                      ┌────────┬────────┬────────┬────────┬────────┬────────┐ */ \
     L00,     L01,     L02,     L03,     L04,     L05,                            R05,     R04,     R03,     R02,     R01,     R00,       \
/*├────────┼────────┼────────┼────────┼────────┼────────┼────────┐    ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
     L10,     L11,     L12,     L13,     L14,     L15,   XXXXXXX,        R35,     R15,     R14,     R13,     R12,     R11,     R10,       \
/*├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
     L20,     L21,     L22,     L23,     L24,     L25,   XXXXXXX,        R34,     R25,     R24,     R23,     R22,     R21,     R20,       \
/*└────────┼────────┼────────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┘    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┼────────┼────────┘ */ \
            XXXXXXX,                L31,     L32,     L33,                     R33,     R32,     R31,               XXXXXXX               \
/*         └────────┘           └────────┴────────┴────────┘                └────────┴────────┴────────┘           └────────┘          */ \
)

#define LAYOUT_CORE(                                   \
    L01, L02, L03, L04, L05,  R05, R04, R03, R02, R01, \
    L11, L12, L13, L14, L15,  R15, R14, R13, R12, R11, \
    L21, L22, L23, L24, L25,  R25, R24, R23, R22, R21  \
)                                                      \
LAYOUT_WIRED(                                                                                                                       \
/*┌────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┐ */ \
    KC_TAB,   L01,     L02,     L03,     L04,     L05,                      R05,     R04,     R03,     R02,     R01,   _______,     \
/*├────────┼────────┼────────┼────────┼────────┼────────┤       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
    KC_ESC,   L11,     L12,     L13,     L14,     L15,           XXXXXXX,   R15,     R14,     R13,     R12,     R11,   KC_QUOT,     \
/*├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
    KC_TAB,   L21,     L22,     L23,     L24,     L25,           KC_MPLY,   R25,     R24,     R23,     R22,     R21,   _______,     \
/*└────────┴────────┴────────┴──┬─────┴──┬─────┴──┬─────┴──┐    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┴────────┴────────┘ */ \
                                  KC_DEL,  LOWER,   KC_ENT,             KC_SPC,  RAISE,   KC_BSPC                                   \
/*                              └────────┴────────┴────────┘          └────────┴────────┴────────┘                               */ \
)
#define LAYOUT_CORE_wrapper(...) LAYOUT_CORE(__VA_ARGS__)
#define LAYOUT_WIRED_wrapper(...) LAYOUT_WIRED(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_CORE_wrapper(
      __QWERTY_L1__, __QWERTY_R1__,
      __QWERTY_L2__, __QWERTY_R2__,
      __QWERTY_L3__, __QWERTY_R3__
    ),

  [_COLEMAK] = LAYOUT_CORE_wrapper(
      __COLEMAK_L1__, __COLEMAK_R1__,
      __COLEMAK_L2__, __COLEMAK_R2__,
      __COLEMAK_L3__, __COLEMAK_R3__
    ),

  [_BEAKL15] = LAYOUT_WIRED_wrapper(
// ┌────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TAB,                __BEAKL15_L1__,                                               __BEAKL15_R1__,               _______,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,                __BEAKL15_L2__,                       XXXXXXX,                __BEAKL15_R2__,               KC_SCLN,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,                __BEAKL15_L3__,                       XXXXXXX,                __BEAKL15_R3__,               _______,
// └────────┴────────┴────────┴──┬─────┴──┬─────┴──┬─────┴──┐    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┴────────┴────────┘
                                  _______,  LOWER,   KC_ENT,             KC_SPC,  RAISE,  _______
//                               └────────┴────────┴────────┘          └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT_WIRED_wrapper(
// ┌────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┐
    _______,                 __LOWER_L1__,                                                 __LOWER_R1__,                _______,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,                 __LOWER_L2__,                        XXXXXXX,                 __LOWER_R2__,                KC_SCLN,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,                 __LOWER_L3__,                        XXXXXXX,                 __LOWER_R3__,                _______,
// └────────┴────────┴────────┴──┬─────┴──┬─────┴──┬─────┴──┐    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┴────────┴────────┘
                                  _______, _______, _______,            KC_BSPC, _______, LGUI(LSFT(KC_MINS))
//                               └────────┴────────┴────────┘          └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT_WIRED_wrapper(
// ┌────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┐
    _______,             __RAISE_BEAKL15_L1__,                                             __RAISE_R1__,                _______,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,             __RAISE_BEAKL15_L2__,                    XXXXXXX,                 __RAISE_R2__,                _______,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,             __RAISE_BEAKL15_L3__,                    XXXXXXX,                 __RAISE_R3__,                _______,
// └────────┴────────┴────────┴──┬─────┴──┬─────┴──┬─────┴──┐    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┴────────┴────────┘
                             LGUI(KC_EQL), _______,  KC_DEL,            _______, _______, _______
//                               └────────┴────────┴────────┘          └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT_WIRED_wrapper(
// ┌────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┐
    _______,            __ADJUST_BEAKL15_L1__,                                            __ADJUST_R1__,                 TNKRO,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,            __ADJUST_BEAKL15_L2__,                    XXXXXXX,                __ADJUST_R2__,                _______,
// ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______,            __ADJUST_BEAKL15_L3__,                    XXXXXXX,                __ADJUST_R3__,                 RESET,
// └────────┴────────┴────────┴──┬─────┴──┬─────┴──┬─────┴──┐    └─────┬──┴─────┬──┴─────┬──┴─────┬──┴────────┴────────┴────────┘
                                  _______, _______, _______,            _______, _______, _______
//                               └────────┴────────┴────────┘          └────────┴────────┴────────┘
  )
};

#include <debug.h>
void keyboard_post_init_user(void) {
    // debug_enable=true;
}

static bool enc2pressed = false;
static bool enc2rotated = false;

bool process_record_keymap(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case ENC2_PRESSED:
            if (record->event.pressed) {
                enc2rotated = false;
                enc2pressed = true;
            } else {
                enc2pressed = false;
                if (!enc2rotated) {
                    // print("not rotated");
                    // tap_code(KC_MEDIA_PLAY_PAUSE);
                }
            }
            return false;
    }

    return true;
}

#ifdef ENCODER_ENABLE


#include "timer.h"
static uint16_t encoder_throttle = 0;
void encoder_update_user(uint8_t index, bool clockwise) {
    if (0 == encoder_throttle || timer_elapsed(encoder_throttle) > 100) {
        encoder_throttle = timer_read();
        switch (index) {
            case 4:
                if (IS_LAYER_ON(_LOWER)) {
                    if (clockwise) {
                        tap_code(KC_MEDIA_NEXT_TRACK);
                    } else {
                        tap_code(KC_MEDIA_PREV_TRACK);
                    }
                } else {
                    if (clockwise) {
                        tap_code(KC_MEDIA_FAST_FORWARD);
                    } else {
                        tap_code(KC_MEDIA_REWIND);
                    }
                }
                break;

            case 5:
                break;
        }
    }
}
#endif
