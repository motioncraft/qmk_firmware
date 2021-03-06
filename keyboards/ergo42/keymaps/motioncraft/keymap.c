#include "ergo42.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = KEYMAP( \
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRACKET, KC_RBRACKET, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS, \
KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, \
KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_BSLASH, \
KC_LALT, KC_LGUI, KC_ESCAPE, _______, KC_LCTRL, LT(META, KC_SPC), SFT_T(KC_TAB), KC_BSPACE, LT(META, KC_ENT), KC_DOWN, KC_LEFT, KC_RIGHT, KC_UP, KC_DELETE \
),

[META] = KEYMAP( \
_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LEFT_ANGLE_BRACKET, KC_RIGHT_ANGLE_BRACKET, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, \
_______, KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_DOUBLE_QUOTE, KC_DOUBLE_QUOTE, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_UNDERSCORE, KC_EQUAL, KC_PLUS, \
_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_QUOTE, KC_QUOTE, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_ASTERISK, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F11, KC_F12, KC_SLASH \
),

};
