#pragma once

#include "quantum.h"

#include "kaylynb_split_wrappers.h"

enum custom_keycodes {
    LOWER = SAFE_RANGE,
    RAISE,
    ADJUST,
    TNKRO,
};

enum kaylynb_layers {
    _COLEMAK = 0,
    _QWERTY,
    _BEAKL15,
    _LOWER,
    _RAISE,
    _ADJUST,
};

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keymap(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case TNKRO:
            if (record->event.pressed) {
                keymap_config.nkro = !keymap_config.nkro;
            }
            return false;
    }
    return true;
}

