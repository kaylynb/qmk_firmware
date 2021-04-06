#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9, KC_0, KC_A, KC_B,
        KC_C, KC_D, KC_E, KC_F, KC_G, KC_H,
        KC_I, KC_J, KC_K, KC_L, KC_M, KC_N
    )
};

void keyboard_post_init_user(void) {
    debug_enable=true;
}
