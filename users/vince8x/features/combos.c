#include QMK_KEYBOARD_H

#include "combos.h"


// Base
// row 1
const uint16_t l_base_tilde_close_combo[] PROGMEM  = {KC_W, KC_F, COMBO_END};
// row 2
const uint16_t l_base_tab_combo[] PROGMEM  = {HOME_S, HOME_T, COMBO_END};
const uint16_t l_base_alt_tab_combo[] PROGMEM  = {HOME_R, HOME_T, COMBO_END};
const uint16_t l_base_perc_combo[] PROGMEM  = {HOME_S, KC_P, COMBO_END};

// row 3
const uint16_t l_base_labk_combo[] PROGMEM  = {HOME_X, KC_C, COMBO_END};
const uint16_t l_base_rabk_combo[] PROGMEM  = {KC_C, KC_D, COMBO_END};


// row
const uint16_t r_base_lbrc_combo[] PROGMEM  = {KC_L, KC_U, COMBO_END};
const uint16_t r_base_rbrc_combo[] PROGMEM  = {KC_U, KC_Y, COMBO_END};

const uint16_t r_base_perc_combo[] PROGMEM  = {KC_L, KC_Y, COMBO_END};
const uint16_t r_base_star_combo[] PROGMEM  = {KC_L, HOME_N, COMBO_END};
const uint16_t r_base_hash_combo[] PROGMEM  = {KC_Y, HOME_I, COMBO_END};
const uint16_t r_base_bsls_combo[] PROGMEM  = {KC_Y, KC_QUOT, COMBO_END};

// row 2
const uint16_t r_base_lprn_combo[] PROGMEM  = {KC_U, HOME_N, COMBO_END};
const uint16_t r_base_rprn_combo[] PROGMEM  = {KC_U, HOME_I, COMBO_END};
const uint16_t r_base_ent_combo[] PROGMEM  = {HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_esc_combo[] PROGMEM  = {HOME_E, HOME_I, COMBO_END};
const uint16_t r_base_vim_start_line_combo[] PROGMEM  = {KC_L, HOME_E, COMBO_END};
const uint16_t r_base_vim_end_line_combo[] PROGMEM  = {KC_H, HOME_E, COMBO_END};
const uint16_t r_base_colon_combo[] PROGMEM  = {HOME_N, HOME_I, COMBO_END};
const uint16_t r_base_semicolon_combo[] PROGMEM  = {HOME_I, HOME_O, COMBO_END};
const uint16_t r_base_pipe_combo[] PROGMEM  = {HOME_N, KC_H, COMBO_END};

// row 3
const uint16_t r_base_del_combo[] PROGMEM  = {HOME_I, HOME_DOT, COMBO_END};
const uint16_t r_base_minus_combo[] PROGMEM = { HYP_KCM, HOME_N, COMBO_END};
const uint16_t r_base_unders_combo[] PROGMEM = { KC_K, KC_H, COMBO_END};
const uint16_t r_base_equal_combo[] PROGMEM = { KC_J, KC_L, COMBO_END};
const uint16_t r_base_plus_combo[] PROGMEM = { HYP_KCM, HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_lcbr_combo[] PROGMEM  = {KC_H, KC_COMM, COMBO_END};
const uint16_t r_base_rcbr_combo[] PROGMEM  = {KC_COMM, HOME_DOT, COMBO_END};

const uint16_t base_capsword_combo[] PROGMEM = {KC_F, KC_U, COMBO_END};


// Qwerty


// Navigation


// Numbers
const uint16_t r_num_minus_combo[] PROGMEM = { KC_0, KC_4, COMBO_END};
const uint16_t r_num_unders_combo[] PROGMEM = { KC_MINS, KC_1, COMBO_END};
const uint16_t r_num_equal_combo[] PROGMEM = { KC_EQL, KC_7, COMBO_END};
const uint16_t r_num_plus_combo[] PROGMEM = { KC_0, KC_4, KC_5, COMBO_END};
const uint16_t r_num_return_base_combo[] PROGMEM  = {KC_5, KC_6, COMBO_END};

combo_t key_combos[] = {
    // base
    // row 1
    COMBO(l_base_tilde_close_combo, KC_TILDE),

    // row 2
    COMBO(l_base_tab_combo, KC_TAB),
    COMBO(l_base_perc_combo, KC_PERC),
    COMBO(l_base_alt_tab_combo, A(KC_TAB)),

    // row 3
    COMBO(l_base_labk_combo, KC_LABK),
    COMBO(l_base_rabk_combo, KC_RABK),

    COMBO(r_base_lprn_combo, KC_LPRN),
    COMBO(r_base_rprn_combo, KC_RPRN),
    COMBO(r_base_perc_combo, KC_PERC),
    COMBO(r_base_star_combo, KC_ASTR),
    COMBO(r_base_hash_combo, KC_HASH),
    COMBO(r_base_bsls_combo, KC_BSLS),

    COMBO(r_base_lbrc_combo, KC_LBRC),
    COMBO(r_base_rbrc_combo, KC_RBRC),
    COMBO(r_base_ent_combo, KC_ENT),
    COMBO(r_base_esc_combo, KC_ESC),
    COMBO(r_base_vim_start_line_combo, KC_CIRC),
    COMBO(r_base_vim_end_line_combo, KC_DLR),
    COMBO(r_base_colon_combo, KC_COLN),
    COMBO(r_base_semicolon_combo, KC_SCLN),
    COMBO(r_base_pipe_combo, KC_PIPE),
    COMBO(r_base_del_combo, KC_DEL),
    COMBO(r_base_minus_combo, KC_MINS),
    COMBO(r_base_unders_combo, KC_UNDS),
    COMBO(r_base_equal_combo, KC_EQL),
    COMBO(r_base_plus_combo, KC_PLUS),
    COMBO(r_base_colon_combo, KC_COLN),
    COMBO(r_base_lcbr_combo, KC_LCBR),
    COMBO(r_base_rcbr_combo, KC_RCBR),
    COMBO(base_capsword_combo, CW_TOGG),

    // navigation

    // numbers
    COMBO(r_num_minus_combo, KC_MINS),
    COMBO(r_num_unders_combo, KC_UNDS),
    COMBO(r_num_equal_combo, KC_EQL),
    COMBO(r_num_plus_combo, KC_PLUS),

};
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(*key_combos);




