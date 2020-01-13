#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_HOME, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END, KC_LCTL, KC_NO, MO(1), KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT, KC_INS, KC_SPC, KC_NO, MO(2), KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_PGUP, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_PGDN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_RBRC, KC_DOWN, KC_UP, KC_DEL, KC_PSCR, KC_BSPC, KC_ENT),
	[1] = LAYOUT_ergodox(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO),
	[2] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_MSTP, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_NO, KC_MPLY, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_NO, KC_P0, KC_NO, KC_PDOT, KC_PDOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
