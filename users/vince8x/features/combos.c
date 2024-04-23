#include QMK_KEYBOARD_H

#include "combos.h"


// Base
const uint16_t l_base_tab_close_combo[] PROGMEM  = {KC_Q, KC_W, COMBO_END};
const uint16_t l_base_tab_prev_combo[] PROGMEM  = {KC_W, NAV_BSPC, COMBO_END};
const uint16_t l_base_tab_next_combo[] PROGMEM  = {KC_F, NAV_BSPC, COMBO_END};
const uint16_t l_base_tab_combo[] PROGMEM  = {HOME_R, HOME_S, COMBO_END};
const uint16_t l_base_num_layer_combo[] PROGMEM  = {HOME_S, HOME_T, COMBO_END};
const uint16_t l_base_fun_layer_combo[] PROGMEM  = {KC_F, KC_P, COMBO_END};
const uint16_t r_base_bspc_combo[] PROGMEM = {KC_U, KC_Y, COMBO_END};
const uint16_t r_base_ent_combo[] PROGMEM  = {HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_esc_combo[] PROGMEM  = {HOME_E, HOME_I, COMBO_END};
const uint16_t r_base_semicolon_combo[] PROGMEM  = {HOME_I, HOME_O, COMBO_END};
const uint16_t r_base_del_combo[] PROGMEM  = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t r_base_colon_combo[] PROGMEM = { HYP_KCM, HOME_E, COMBO_END};
//Basic math symbols
const uint16_t r_base_minus_combo[] PROGMEM = { HYP_KCM, HOME_N, COMBO_END};
const uint16_t r_base_unders_combo[] PROGMEM = { KC_K, KC_H, COMBO_END};
const uint16_t r_base_equal_combo[] PROGMEM = { KC_J, KC_L, COMBO_END};
const uint16_t r_base_plus_combo[] PROGMEM = { HYP_KCM, HOME_N, HOME_E, COMBO_END};
const uint16_t h_j_mins[] = { KC_H, KC_J, COMBO_END};
const uint16_t h_j_k_plus[] = { KC_H, KC_J, KC_K, COMBO_END};
const uint16_t n_m_unds[] = { KC_N, KC_M, COMBO_END};

const uint16_t base_capsword_combo[] PROGMEM = {KC_F, KC_U, COMBO_END};


// Qwerty
const uint16_t l_qwerty_tab_combo[] PROGMEM  = {QHOME_S, QHOME_D, COMBO_END};
const uint16_t r_qwerty_bspc_combo[] PROGMEM = {KC_I, KC_O, COMBO_END};
const uint16_t r_qwerty_ent_combo[] PROGMEM  = {QHOME_J, QHOME_K, COMBO_END};
const uint16_t r_qwerty_esc_combo[] PROGMEM  = {QHOME_K, QHOME_L, COMBO_END};
const uint16_t r_qwerty_del_combo[] PROGMEM  = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t qwerty_capsword_combo[] PROGMEM = {KC_E, KC_I, COMBO_END};


// Navigation
const uint16_t l_nav_tab_combo[] PROGMEM  = {TAB_NEXT, TAB_PREV, COMBO_END};
const uint16_t r_nav_vim_start_line_combo[] PROGMEM  = {KC_DOWN, KC_UP, COMBO_END};
const uint16_t r_nav_vim_end_line_combo[] PROGMEM  = {KC_DOWN, KC_RIGHT, COMBO_END};


// Numbers
const uint16_t r_num_minus_combo[] PROGMEM = { KC_0, KC_4, COMBO_END};
const uint16_t r_num_unders_combo[] PROGMEM = { KC_MINS, KC_1, COMBO_END};
const uint16_t r_num_equal_combo[] PROGMEM = { KC_EQL, KC_7, COMBO_END};
const uint16_t r_num_plus_combo[] PROGMEM = { KC_0, KC_4, KC_5, COMBO_END};
const uint16_t r_num_esc_combo[] PROGMEM  = {KC_4, KC_5, COMBO_END};
const uint16_t r_num_ent_combo[] PROGMEM  = {KC_5, KC_6, COMBO_END};

combo_t key_combos[] = {
    // base
    COMBO(l_base_tab_close_combo, TAB_CLOSE),
    COMBO(l_base_tab_prev_combo, TAB_PREV),
    COMBO(l_base_tab_next_combo, TAB_NEXT),
    COMBO(l_base_tab_combo, KC_TAB),
    COMBO(l_base_num_layer_combo, TT(_NUM)),
    COMBO(l_base_fun_layer_combo, TT(_FUN)),

    COMBO(r_base_bspc_combo, KC_BSPC),
    COMBO(r_base_ent_combo, KC_ENT),
    COMBO(r_base_esc_combo, KC_ESC),
    COMBO(r_base_semicolon_combo, KC_SCLN),
    COMBO(r_base_del_combo, KC_DEL),
    COMBO(r_base_minus_combo, KC_MINS),
    COMBO(r_base_unders_combo, KC_UNDS),
    COMBO(r_base_equal_combo, KC_EQL),
    COMBO(r_base_plus_combo, KC_PLUS),
    COMBO(r_base_colon_combo, KC_COLN),
    COMBO(base_capsword_combo, CW_TOGG),

    // qwerty
    COMBO(l_qwerty_tab_combo, KC_TAB),
    COMBO(r_qwerty_bspc_combo, KC_BSPC),
    COMBO(r_qwerty_ent_combo, KC_ENT),
    COMBO(r_qwerty_esc_combo, KC_ESC),
    COMBO(r_qwerty_del_combo, KC_DEL),
    COMBO(qwerty_capsword_combo, CW_TOGG),

    // navigation
    COMBO(l_nav_tab_combo, KC_TAB),
    COMBO(r_nav_vim_start_line_combo, KC_0),
    COMBO(r_nav_vim_end_line_combo, KC_DLR),

    // numbers
    COMBO(r_num_minus_combo, KC_MINS),
    COMBO(r_num_unders_combo, KC_UNDS),
    COMBO(r_num_equal_combo, KC_EQL),
    COMBO(r_num_plus_combo, KC_PLUS),
    COMBO(r_num_esc_combo, KC_ESC),
    COMBO(r_num_ent_combo, KC_ENT),
};
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(*key_combos);




