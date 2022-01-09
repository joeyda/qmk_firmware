// Copyright 2022 Joe D. (@joeyda)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
      KC_ESCAPE,  KC_KP_SLASH,  KC_KP_ASTERISK, KC_KP_MINUS,  KC_NUM_LOCK,    KC_1,         KC_2,         KC_3,       KC_4,         KC_5,     KC_6,     KC_7,   KC_8,      KC_9,   KC_0,         KC_EQUAL, KC_BACKSPACE,
      KC_KP_7,    KC_KP_8,      KC_KP_9,        KC_KP_EQUAL,  KC_TAB,         KC_Q,         KC_W,         KC_E,       KC_R,         KC_T,     KC_Y,     KC_U,   KC_I,      KC_O,   KC_P,         KC_MINUS, KC_DELETE,
      KC_KP_4,    KC_KP_5,      KC_KP_6,        KC_KP_PLUS,   KC_CAPS_LOCK,   KC_A,         KC_S,         KC_D,       KC_F,         KC_G,     KC_H,     KC_J,   KC_K,      KC_L,   KC_SEMICOLON, KC_QUOTE, KC_ENTER,
      KC_KP_1,    KC_KP_2,      KC_KP_3,                      KC_LEFT_SHIFT,  KC_Z,         KC_X,         KC_C,       KC_V,         KC_B,     KC_N,     KC_M,   KC_COMMA,  KC_DOT, KC_SLASH,     KC_UP,    KC_RIGHT_SHIFT,
      KC_KP_0,    KC_KP_0,      KC_KP_DOT,      KC_KP_ENTER,  KC_LEFT_CTRL,   KC_LEFT_GUI,  KC_LEFT_ALT,  KC_PAGE_UP, KC_PAGE_DOWN, MO(_FN),  KC_SPACE,         KC_HOME,   KC_END, KC_LEFT,      KC_DOWN,  KC_RIGHT
    ),
    [_FN] = LAYOUT(
      KC_ESCAPE,  KC_KP_SLASH,  KC_KP_ASTERISK, KC_KP_MINUS,  KC_NUM_LOCK,    KC_F1,        KC_F2,        KC_F3,      KC_F4,        KC_F5,    KC_F6,    KC_F7,  KC_F8,     KC_F9,  KC_F10,       KC_F11,   KC_F12,
      KC_KP_7,    KC_KP_8,      KC_KP_9,        KC_KP_EQUAL,  KC_TAB,         KC_Q,         KC_W,         KC_E,       KC_R,         KC_T,     KC_Y,     KC_U,   KC_I,      KC_O,   KC_P,         KC_MINUS, KC_DELETE,
      KC_KP_4,    KC_KP_5,      KC_KP_6,        KC_KP_PLUS,   KC_CAPS_LOCK,   KC_A,         KC_S,         KC_D,       KC_F,         KC_G,     KC_H,     KC_J,   KC_K,      KC_L,   KC_SEMICOLON, KC_QUOTE, KC_ENTER,
      KC_KP_1,    KC_KP_2,      KC_KP_3,                      KC_LEFT_SHIFT,  KC_Z,         KC_X,         KC_C,       KC_V,         KC_B,     KC_N,     KC_M,   KC_COMMA,  KC_DOT, KC_SLASH,     KC_UP,    KC_RIGHT_SHIFT,
      KC_KP_0,    KC_KP_0,      KC_KP_DOT,      KC_KP_ENTER,  KC_LEFT_CTRL,   KC_LEFT_GUI,  KC_LEFT_ALT,  KC_PAGE_UP, KC_PAGE_DOWN, KC_NO,    KC_SPACE,         KC_HOME,   KC_END, KC_LEFT,      KC_DOWN,  KC_RIGHT
    )
};
