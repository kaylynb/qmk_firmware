#pragma once

#include "quantum.h"

#include "kaylynb_split_wrappers.h"

enum custom_keycodes {
    LOWER = SAFE_RANGE,
    RAISE,
    ADJUST,
    TNKRO,
    CUSTOM_WRAPPER_END,
};

enum kaylynb_layers {
    _COLEMAK = 0,
    _QWERTY,
    _BEAKL15,
    _LOWER,
    _RAISE,
    _ADJUST,
};

bool process_record_keymap(uint16_t keycode, keyrecord_t* record);
bool process_record_user(uint16_t keycode, keyrecord_t* record);
