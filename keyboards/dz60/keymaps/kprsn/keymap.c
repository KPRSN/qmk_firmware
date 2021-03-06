#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,           KC_RALT, XXXXXXX, XXXXXXX, MO(2),   KC_RCTL
    ),

    LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
        _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, KC_INS,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLD, KC_VOLU,          _______,
        _______, _______, _______, _______, KC_CAPS, _______, KC_PGUP, KC_HOME, _______, _______, _______, KC_MUTE, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
    ),

    LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, RGB_M_P, RGB_M_R, RGB_M_G, RGB_M_X, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   RGB_MOD, RGB_MOD, RGB_MOD,          _______, _______, _______, _______, _______
    )
};
