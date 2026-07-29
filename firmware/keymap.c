// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][8][13] = {
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, // ROW0
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, // ROW1
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, // ROW2
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, // ROW3
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, // ROW4
        KC_LCTL, KC_LGUI, KC_LALT, KC_P0,   KC_P3,   KC_P2,   KC_P1,   KC_NUM,  KC_SPC,  KC_RALT, KC_RGUI, MO(1),   KC_RCTL, // ROW5
        KC_BSLS, KC_MPLY, KC_PPLS, KC_PDOT, KC_P6,   KC_P5,   KC_P4,   KC_PSLS, KC_RIGHT,KC_LEFT, KC_PGDN, KC_END,  KC_DEL, // ROW6
        KC_BSPC,          KC_PMNS, KC_PENT, KC_P9,   KC_P8,   KC_P7,   KC_PAST, KC_DOWN, KC_UP,   KC_PGUP, KC_HOME, KC_INS // ROW7
    ),

    [1] = LAYOUT(
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // ROW0
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // ROW1
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // ROW2
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // ROW3
                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // ROW4
        _______,  _______, _______, _______, _______, _______, _______, RM_TOGG, _______, _______, _______, _______, _______, // ROW5
        _______,  _______, _______, _______, _______, _______, _______, _______, UG_NEXT, UG_PREV, _______, _______, _______, // ROW6
        _______,           _______, _______, _______, _______, _______, _______, RM_VALD, RM_VALU, _______, _______, _______ // ROW7
    ),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif

#ifdef OLED_ENABLE
// logo function, mess around in QMK to make a custom logo!
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("LEDs\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    
    return false;
}
#endif
