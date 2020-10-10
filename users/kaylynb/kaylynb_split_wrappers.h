#pragma once

#include "kaylynb_split.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define L2_MODS(K0, K1, K2, K3, K4) \
    LCTL_T(K0), LGUI_T(K1), LALT_T(K2), LSFT_T(K3), K4

#define R2_MODS(K0, K1, K2, K3, K4) \
    K0, RSFT_T(K1), RALT_T(K2), RGUI_T(K3), RCTL_T(K4)

#define __QWERTY_L1__         KC_Q, KC_W, KC_E, KC_R, KC_T
#define __QWERTY_L2__ L2_MODS(KC_A, KC_S, KC_D, KC_F, KC_G)
#define __QWERTY_L3__         KC_Z, KC_X, KC_C, KC_V, KC_B

#define __QWERTY_R1__         KC_Y, KC_U, KC_I,     KC_O,   KC_P
#define __QWERTY_R2__ R2_MODS(KC_H, KC_J, KC_K,     KC_L,   KC_SCLN)
#define __QWERTY_R3__         KC_N, KC_M, KC_COMM,  KC_DOT, KC_SLASH

#define __COLEMAK_L1__          KC_Q, KC_W, KC_F, KC_P, KC_G
#define __COLEMAK_L2__  L2_MODS(KC_A, KC_R, KC_S, KC_T, KC_D)
#define __COLEMAK_L3__          __QWERTY_L3__

#define __COLEMAK_R1__          KC_J, KC_L, KC_U,     KC_Y,   KC_SCLN
#define __COLEMAK_R2__  R2_MODS(KC_H, KC_N, KC_E,     KC_I,   KC_O)
#define __COLEMAK_R3__          KC_K, KC_M, KC_COMM,  KC_DOT, KC_SLASH

#define __BEAKL15_L1__          KC_Q, KC_H,     KC_O,     KC_U, KC_X
#define __BEAKL15_L2__  L2_MODS(KC_Y, KC_I,     KC_E,     KC_A, KC_DOT)
#define __BEAKL15_L3__          KC_J, KC_SLASH, KC_COMM,  KC_K, KC_QUOT

#define __BEAKL15_R1__          KC_G, KC_C, KC_R, KC_F, KC_Z
#define __BEAKL15_R2__  R2_MODS(KC_D, KC_S, KC_T, KC_N, KC_B)
#define __BEAKL15_R3__          KC_W, KC_M, KC_L, KC_P, KC_V

#define __LOWER_L1__  KC_INS,  KC_LABK,  KC_DLR, KC_RABK, KC_AT
#define __LOWER_L2__  KC_BSLS, KC_LPRN, KC_DQUO, KC_RPRN, KC_HASH
#define __LOWER_L3__  KC_EXLM, KC_COLN, KC_ASTR, KC_PLUS, KC_MINS

#define __LOWER_R1__  KC_GRV,  KC_LBRC, KC_UNDS, KC_RBRC, _______
#define __LOWER_R2__  KC_PERC, KC_LCBR, KC_EQL,  KC_RCBR, KC_PIPE
#define __LOWER_R3__  KC_QUES, KC_AMPR, KC_CIRC, KC_TILD, KC_SLSH

#define __RAISE_L1__  _______, KC_7, KC_8, KC_9, _______
#define __RAISE_L2__    KC_0,  KC_4, KC_5, KC_6, _______
#define __RAISE_L3__  _______, KC_1, KC_2, KC_3, _______

#define __RAISE_R1__  _______, KC_HOME,  KC_UP,   KC_END, _______
#define __RAISE_R2__  _______, KC_LEFT, KC_DOWN, KC_RGHT, _______
#define __RAISE_R3__  _______, KC_PGUP, _______, KC_PGDN, _______

#define __RAISE_L1__  _______, KC_7, KC_8, KC_9, _______
#define __RAISE_L2__    KC_0,  KC_4, KC_5, KC_6, _______
#define __RAISE_L3__  _______, KC_1, KC_2, KC_3, _______

#define __RAISE_BEAKL15_L1__  KC_TAB,   KC_5,   KC_2, KC_3, KC_COLN
#define __RAISE_BEAKL15_L2__  KC_7,     KC_DOT, KC_1, KC_0, KC_4
#define __RAISE_BEAKL15_L3__  KC_SLSH,  KC_6,   KC_9, KC_8, KC_COMM

#define __ADJUST_L1__ _______,  KC_F7,   KC_F8,   KC_F9,  _______
#define __ADJUST_L2__  KC_F10,  KC_F4,   KC_F5,   KC_F6,   KC_F12
#define __ADJUST_L3__  KC_F11,  KC_F1,   KC_F2,   KC_F3,  _______

#define __ADJUST_BEAKL15_L1__  _______,  KC_F5,   KC_F2, KC_F3,  _______
#define __ADJUST_BEAKL15_L2__  KC_F7,    KC_F12,  KC_F1, KC_F10, KC_F4
#define __ADJUST_BEAKL15_L3__  KC_F11,   KC_F6,   KC_F9, KC_F8,  _______

#define __ADJUST_R1__ DF(_QWERTY), DF(_COLEMAK), DF(_BEAKL15), _______, _______
#define __ADJUST_R2__   KC_CAPS,     _______,    _______, _______, _______
#define __ADJUST_R3__   _______,     _______,    _______, _______, _______
