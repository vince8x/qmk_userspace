#include QMK_KEYBOARD_H

#include "combos.h"

// Base
// row 1
const uint16_t l_base_tilde_close_combo[] PROGMEM = {KC_W, KC_F, COMBO_END};
// row 2
const uint16_t l_base_tab_combo[] PROGMEM     = {HOME_S, HOME_T, COMBO_END};
const uint16_t l_base_alt_tab_combo[] PROGMEM = {HOME_R, HOME_T, COMBO_END};
const uint16_t l_base_perc_combo[] PROGMEM    = {HOME_S, KC_P, COMBO_END};

// row 3

// row
const uint16_t r_base_lbrc_combo[] PROGMEM = {KC_L, KC_U, COMBO_END};
const uint16_t r_base_rbrc_combo[] PROGMEM = {KC_U, KC_Y, COMBO_END};

const uint16_t r_base_perc_combo[] PROGMEM = {KC_L, KC_Y, COMBO_END};
const uint16_t r_base_star_combo[] PROGMEM = {KC_L, HOME_N, COMBO_END};
const uint16_t r_base_hash_combo[] PROGMEM = {KC_Y, HOME_I, COMBO_END};
const uint16_t r_base_bsls_combo[] PROGMEM = {KC_Y, KC_QUOT, COMBO_END};

// row 2
const uint16_t r_base_lprn_combo[] PROGMEM           = {KC_U, HOME_N, COMBO_END};
const uint16_t r_base_rprn_combo[] PROGMEM           = {KC_U, HOME_I, COMBO_END};
const uint16_t r_base_ent_combo[] PROGMEM            = {HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_esc_combo[] PROGMEM            = {HOME_E, HOME_I, COMBO_END};
const uint16_t r_base_vim_start_line_combo[] PROGMEM = {KC_L, HOME_E, COMBO_END};
const uint16_t r_base_vim_end_line_combo[] PROGMEM   = {HOME_H, HOME_E, COMBO_END};
const uint16_t r_base_colon_combo[] PROGMEM          = {HOME_N, HOME_I, COMBO_END};
const uint16_t r_base_semicolon_combo[] PROGMEM      = {HOME_I, HOME_O, COMBO_END};
const uint16_t r_base_pipe_combo[] PROGMEM           = {HOME_N, HOME_H, COMBO_END};

// row 3
const uint16_t r_base_del_combo[] PROGMEM    = {HOME_I, HOME_DOT, COMBO_END};
const uint16_t r_base_minus_combo[] PROGMEM  = {HYP_KCM, HOME_N, COMBO_END};
const uint16_t r_base_unders_combo[] PROGMEM = {KC_K, HOME_H, COMBO_END};
const uint16_t r_base_equal_combo[] PROGMEM  = {KC_J, KC_L, COMBO_END};
const uint16_t r_base_plus_combo[] PROGMEM   = {HYP_KCM, HOME_N, HOME_E, COMBO_END};
const uint16_t r_base_lcbr_combo[] PROGMEM   = {HOME_H, KC_COMM, COMBO_END};
const uint16_t r_base_rcbr_combo[] PROGMEM   = {KC_COMM, HOME_DOT, COMBO_END};

const uint16_t base_capsword_combo[] PROGMEM = {KC_F, KC_U, COMBO_END};
const uint16_t base_numword_combo[] PROGMEM  = {KC_C, KC_COMM, COMBO_END};

// Numbers
const uint16_t r_num_minus_combo[] PROGMEM  = {KC_0, KC_4, COMBO_END};
const uint16_t r_num_unders_combo[] PROGMEM = {KC_MINS, KC_1, COMBO_END};
const uint16_t r_num_equal_combo[] PROGMEM  = {KC_EQL, KC_7, COMBO_END};
const uint16_t r_num_plus_combo[] PROGMEM   = {KC_0, KC_4, KC_5, COMBO_END};
const uint16_t r_num_esc_combo[] PROGMEM    = {KC_5, KC_6, COMBO_END};

// Qwerty
// row 1
const uint16_t l_qwerty_tilde_close_combo[] PROGMEM = {KC_W, KC_E, COMBO_END};
// row 2
const uint16_t l_qwerty_tab_combo[] PROGMEM     = {QHOME_D, QHOME_F, COMBO_END};
const uint16_t l_qwerty_alt_tab_combo[] PROGMEM = {QHOME_S, QHOME_F, COMBO_END};
const uint16_t l_qwerty_perc_combo[] PROGMEM    = {QHOME_D, KC_R, COMBO_END};

// row 3

// row
const uint16_t r_qwerty_lbrc_combo[] PROGMEM = {KC_U, KC_I, COMBO_END};
const uint16_t r_qwerty_rbrc_combo[] PROGMEM = {KC_I, KC_O, COMBO_END};

const uint16_t r_qwerty_perc_combo[] PROGMEM = {KC_U, KC_O, COMBO_END};
const uint16_t r_qwerty_star_combo[] PROGMEM = {KC_U, QHOME_J, COMBO_END};
const uint16_t r_qwerty_hash_combo[] PROGMEM = {KC_O, QHOME_L, COMBO_END};
const uint16_t r_qwerty_bsls_combo[] PROGMEM = {KC_O, KC_P, COMBO_END};

// row 2
const uint16_t r_qwerty_lprn_combo[] PROGMEM           = {KC_I, QHOME_J, COMBO_END};
const uint16_t r_qwerty_rprn_combo[] PROGMEM           = {KC_I, QHOME_L, COMBO_END};
const uint16_t r_qwerty_ent_combo[] PROGMEM            = {QHOME_J, QHOME_K, COMBO_END};
const uint16_t r_qwerty_esc_combo[] PROGMEM            = {QHOME_K, QHOME_L, COMBO_END};
const uint16_t r_qwerty_vim_start_line_combo[] PROGMEM = {KC_U, QHOME_K, COMBO_END};
const uint16_t r_qwerty_vim_end_line_combo[] PROGMEM   = {QHOME_M, QHOME_K, COMBO_END};
const uint16_t r_qwerty_colon_combo[] PROGMEM          = {QHOME_J, QHOME_L, COMBO_END};
const uint16_t r_qwerty_semicolon_combo[] PROGMEM      = {QHOME_L, QHOME_SC, COMBO_END};
const uint16_t r_qwerty_pipe_combo[] PROGMEM           = {QHOME_J, QHOME_M, COMBO_END};

// row 3
const uint16_t r_qwerty_del_combo[] PROGMEM    = {QHOME_L, QHOME_DOT, COMBO_END};
const uint16_t r_qwerty_minus_combo[] PROGMEM  = {HYP_KCH, QHOME_J, COMBO_END};
const uint16_t r_qwerty_unders_combo[] PROGMEM = {KC_N, QHOME_M, COMBO_END};
const uint16_t r_qwerty_equal_combo[] PROGMEM  = {KC_Y, KC_U, COMBO_END};
const uint16_t r_qwerty_plus_combo[] PROGMEM   = {HYP_KCH, QHOME_J, QHOME_K, COMBO_END};
const uint16_t r_qwerty_lcbr_combo[] PROGMEM   = {QHOME_M, KC_COMM, COMBO_END};
const uint16_t r_qwerty_rcbr_combo[] PROGMEM   = {KC_COMM, QHOME_DOT, COMBO_END};

const uint16_t qwerty_capsword_combo[] PROGMEM = {KC_E, KC_I, COMBO_END};
const uint16_t qwerty_numword_combo[] PROGMEM  = {KC_C, KC_COMM, COMBO_END};

// Numbers
const uint16_t r_qwerty_num_minus_combo[] PROGMEM  = {KC_0, KC_4, COMBO_END};
const uint16_t r_qwerty_num_unders_combo[] PROGMEM = {KC_MINS, KC_1, COMBO_END};
const uint16_t r_qwerty_num_equal_combo[] PROGMEM  = {KC_EQL, KC_7, COMBO_END};
const uint16_t r_qwerty_num_plus_combo[] PROGMEM   = {KC_0, KC_4, KC_5, COMBO_END};
const uint16_t r_qwerty_num_esc_combo[] PROGMEM    = {KC_5, KC_6, COMBO_END};


combo_t key_combos[] = {
#ifdef QWERTY
    COMBO(l_qwerty_tilde_close_combo, KC_TILDE),

    // row 2
    COMBO(l_qwerty_tab_combo, KC_TAB),
    COMBO(l_qwerty_perc_combo, KC_PERC),
    COMBO(l_qwerty_alt_tab_combo, A(KC_TAB)),

    // row 3

    COMBO(r_qwerty_lprn_combo, KC_LPRN),
    COMBO(r_qwerty_rprn_combo, KC_RPRN),
    COMBO(r_qwerty_perc_combo, KC_PERC),
    COMBO(r_qwerty_star_combo, KC_ASTR),
    COMBO(r_qwerty_hash_combo, KC_HASH),
    COMBO(r_qwerty_bsls_combo, KC_BSLS),

    COMBO(r_qwerty_lbrc_combo, KC_LBRC),
    COMBO(r_qwerty_rbrc_combo, KC_RBRC),
    COMBO(r_qwerty_ent_combo, KC_ENT),
    COMBO(r_qwerty_esc_combo, KC_ESC),
    COMBO(r_qwerty_vim_start_line_combo, KC_CIRC),
    COMBO(r_qwerty_vim_end_line_combo, KC_DLR),
    COMBO(r_qwerty_colon_combo, KC_COLN),
    COMBO(r_qwerty_semicolon_combo, KC_SCLN),
    COMBO(r_qwerty_pipe_combo, KC_PIPE),
    COMBO(r_qwerty_del_combo, KC_DEL),
    COMBO(r_qwerty_minus_combo, KC_MINS),
    COMBO(r_qwerty_unders_combo, KC_UNDS),
    COMBO(r_qwerty_equal_combo, KC_EQL),
    COMBO(r_qwerty_plus_combo, KC_PLUS),
    COMBO(r_qwerty_colon_combo, KC_COLN),
    COMBO(r_qwerty_lcbr_combo, KC_LCBR),
    COMBO(r_qwerty_rcbr_combo, KC_RCBR),
    COMBO(qwerty_capsword_combo, CW_TOGG),
    COMBO(qwerty_numword_combo, NUMWORD),

    // numbers
    COMBO(r_qwerty_num_minus_combo, KC_MINS),
    COMBO(r_qwerty_num_unders_combo, KC_UNDS),
    COMBO(r_qwerty_num_equal_combo, KC_EQL),
    COMBO(r_qwerty_num_plus_combo, KC_PLUS),
    COMBO(r_qwerty_num_esc_combo, KC_PLUS),

#else
    // base
    // row 1
    COMBO(l_base_tilde_close_combo, KC_TILDE),

    // row 2
    COMBO(l_base_tab_combo, KC_TAB),
    COMBO(l_base_perc_combo, KC_PERC),
    COMBO(l_base_alt_tab_combo, A(KC_TAB)),

    // row 3

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
    COMBO(base_numword_combo, NUMWORD),

    // navigation

    // numbers
    COMBO(r_num_minus_combo, KC_MINS),
    COMBO(r_num_unders_combo, KC_UNDS),
    COMBO(r_num_equal_combo, KC_EQL),
    COMBO(r_num_plus_combo, KC_PLUS),
    COMBO(r_num_esc_combo, KC_PLUS),

#endif
};
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(*key_combos);
