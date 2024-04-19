#include QMK_KEYBOARD_H

#include "combos.h"

// Base

const uint16_t caps_combo[] PROGMEM = {KC_G, KC_M, COMBO_END};
const uint16_t tab_combo[] PROGMEM = {LCTLT_W, KC_F, COMBO_END};
const uint16_t esc_combo[] PROGMEM = {HOME_N, HOME_E, COMBO_END};
const uint16_t bspc_combo[] PROGMEM = {KC_U, KC_Y, COMBO_END};
const uint16_t del_combo[] PROGMEM = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(caps_combo, CW_TOGG),
    COMBO(tab_combo, KC_TAB),
    COMBO(esc_combo, KC_ESC),
    COMBO(bspc_combo, KC_BSPC),
    COMBO(del_combo, KC_DEL)
};
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(*key_combos);
