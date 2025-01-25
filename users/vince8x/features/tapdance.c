#include QMK_KEYBOARD_H

#include "tapdance.h"

#ifdef LEADER_ENABLE
extern leader_t leader;
#endif
static td_tap_t tap_state = {.state = TD_NONE};

__attribute__((weak)) td_state_t dance_state(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else
            return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted)
            return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return TD_DOUBLE_HOLD;
        else
            return TD_DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TD_TRIPLE_SINGLE_TAP', and define that enum just like 'TD_DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed)
            return TD_TRIPLE_TAP;
        else
            return TD_TRIPLE_HOLD;
    } else
        return TD_UNKNOWN;
}

bool is_shifted(void) {
    return get_mods() & MOD_MASK_SHIFT || get_oneshot_mods() & MOD_MASK_SHIFT ||
           get_oneshot_locked_mods() & MOD_MASK_SHIFT;
}

void td_enter_end(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_SINGLE_TAP:
            tap_code16(KC_END);
            tap_code(KC_ENT);
            break;
        case TD_DOUBLE_TAP:
        case TD_SINGLE_HOLD:
            SEND_STRING(SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_END));
            break;
        default:
            break;
    }
}

void td_semicolon(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_SINGLE_TAP:
            tap_code(KC_SCLN);
            break;
        case TD_SINGLE_HOLD:
            tap_code16(KC_END);
            tap_code(KC_SCLN);
            break;
        default:
            break;
    }
}

void td_tmux_prefix(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
            register_mods(MOD_BIT(KC_LCTL));
            register_code(KC_B); unregister_code(KC_B);
            unregister_mods(MOD_BIT(KC_LCTL));
            register_mods(MOD_BIT(KC_LSFT));
            register_code(KC_5); unregister_code(KC_5);
            unregister_mods(MOD_BIT(KC_LSFT));
            break;
        default:
            break;
    }
}


void td_macro(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_DOUBLE_TAP:
            dyn_macro_toggle(is_shifted() ? QK_DYNAMIC_MACRO_RECORD_START_2 : QK_DYNAMIC_MACRO_RECORD_START_1);
            break;
        case TD_SINGLE_TAP:
            dyn_macro_play(is_shifted() ? QK_DYNAMIC_MACRO_PLAY_2 : QK_DYNAMIC_MACRO_PLAY_1);
            break;
        default:
            break;
    }
}

void td_leader_key(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_DOUBLE_TAP:
            if (!leader.isLeading) {
                leader_start();
            }
            break;
        default:
            break;
    }
}

void td_dot(tap_dance_state_t *state, void *user_data) {
    tap_state.state = dance_state(state);
    switch (tap_state.state) {
        case TD_SINGLE_TAP:
            tap_code(KC_DOT);
            break;
        case TD_DOUBLE_SINGLE_TAP:
        case TD_DOUBLE_TAP:
            tap_code(KC_DOT);
            tap_code(KC_DOT);
            break;
        case TD_TRIPLE_TAP:
            tap_code(KC_DOT);
            tap_code(KC_DOT);
            tap_code(KC_DOT);
            break;
        default:
            break;
    }
}

// clang-format off

// Tap dance declarations

tap_dance_action_t tap_dance_actions[] = {
    [SCL_END] = ACTION_TAP_DANCE_FN(td_semicolon),
    [TMUX_PREFIX] = ACTION_TAP_DANCE_FN(td_tmux_prefix),
    [DOT_DOT] = ACTION_TAP_DANCE_FN(td_dot),
#ifdef DYNAMIC_MACRO_ENABLE
    [REC_MAC] = ACTION_TAP_DANCE_FN(td_macro),
#endif
    // [MIN_CIR] = ACTION_TAP_DANCE_FN(td_mins),
    // [COL_ECO] = ACTION_TAP_DANCE_FN(td_colon),
    // [HAS_PER] = ACTION_TAP_DANCE_FN(td_hash),
    // [QUE_EXC] = ACTION_TAP_DANCE_FN(td_ques),
    // [EQL_EEQ] = ACTION_TAP_DANCE_FN(td_eql),
    // [PLU_DOL] = ACTION_TAP_DANCE_FN(td_plus),
    // [TIL_LTE] = ACTION_TAP_DANCE_FN(td_til),
    // [DOR_GTE] = ACTION_TAP_DANCE_FN(td_dor),
    // [SLS_BSL] = ACTION_TAP_DANCE_FN(td_slash),
    // [CIR_SAR] = ACTION_TAP_DANCE_FN(td_circ),
    // [DAN_DAR] = ACTION_TAP_DANCE_FN(td_dand),
    // [DLR_BSL] = ACTION_TAP_DANCE_FN(td_dlr),
    // [LEA_COM] = ACTION_TAP_DANCE_FN(td_comm),
    // [DOT_DOT] = ACTION_TAP_DANCE_FN(td_dot)
};

// clang-format on
