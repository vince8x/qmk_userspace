#include QMK_KEYBOARD_H

#include "combos.h"


// Base
const uint16_t l_base_tab_combo[] PROGMEM  = {KC_W, KC_F, COMBO_END};
const uint16_t l_base_lock_combo[] PROGMEM  = {KC_P, KC_B, COMBO_END};
const uint16_t r_base_bspc_combo[] PROGMEM = {KC_U, KC_Y, COMBO_END};
const uint16_t r_base_esc_combo[] PROGMEM  = {HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_ent_combo[] PROGMEM  = {HOME_E, HOME_I, COMBO_END};
const uint16_t r_base_del_combo[] PROGMEM  = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t r_base_ins_combo[] PROGMEM  = {KC_K, KC_H, COMBO_END};

const uint16_t base_capsword_combo[] PROGMEM = {KC_F, KC_U, COMBO_END};
const uint16_t base_minus_combo[] PROGMEM = {KC_P, KC_L, COMBO_END};
const uint16_t base_unders_combo[] PROGMEM = {KC_D, KC_H, COMBO_END};


// Qwerty
const uint16_t l_qwerty_tab_combo[] PROGMEM  = {KC_W, KC_E, COMBO_END};
const uint16_t l_qwerty_lock_combo[] PROGMEM  = {KC_R, KC_T, COMBO_END};
const uint16_t r_qwerty_bspc_combo[] PROGMEM = {KC_I, KC_O, COMBO_END};
const uint16_t r_qwerty_esc_combo[] PROGMEM  = {QHOME_J, QHOME_K, COMBO_END};
const uint16_t r_qwerty_ent_combo[] PROGMEM  = {QHOME_K, QHOME_L, COMBO_END};
const uint16_t r_qwerty_del_combo[] PROGMEM  = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t r_qwerty_ins_combo[] PROGMEM  = {KC_N, KC_M, COMBO_END};

const uint16_t qwerty_capsword_combo[] PROGMEM = {KC_E, KC_I, COMBO_END};
const uint16_t qwerty_minus_combo[] PROGMEM = {KC_R, KC_U, COMBO_END};
const uint16_t qwerty_unders_combo[] PROGMEM = {KC_V, KC_M, COMBO_END};


// Navigation
const uint16_t l_nav_tab_combo[] PROGMEM  = {TAB_NEXT, TAB_PREV, COMBO_END};

combo_t key_combos[] = {
    // base
    COMBO(l_base_tab_combo, KC_TAB),
    COMBO(l_base_lock_combo, LALT_T(KC_L)),
    COMBO(r_base_bspc_combo, KC_BSPC),
    COMBO(r_base_esc_combo, KC_ESC),
    COMBO(r_base_ent_combo, KC_ESC),
    COMBO(r_base_del_combo, KC_DEL),
    COMBO(r_base_ins_combo, KC_INS),
    COMBO(base_capsword_combo, CW_TOGG),
    COMBO(base_minus_combo, KC_MINS),
    COMBO(base_unders_combo, KC_UNDS),

    // qwerty
    COMBO(l_qwerty_tab_combo, KC_TAB),
    COMBO(l_qwerty_lock_combo, LALT_T(KC_L)),
    COMBO(r_qwerty_bspc_combo, KC_BSPC),
    COMBO(r_qwerty_esc_combo, KC_ESC),
    COMBO(r_qwerty_ent_combo, KC_ESC),
    COMBO(r_qwerty_del_combo, KC_DEL),
    COMBO(r_qwerty_ins_combo, KC_INS),
    COMBO(qwerty_capsword_combo, CW_TOGG),
    COMBO(qwerty_minus_combo, KC_MINS),
    COMBO(qwerty_unders_combo, KC_UNDS),

    // navigation
    COMBO(l_nav_tab_combo, KC_TAB),
};
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(*key_combos);




