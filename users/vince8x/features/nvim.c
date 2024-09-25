#include "nvim.h"

/* return false to finish processing of the key */
/* return true  to fall through to the qmk processing of the key */
bool process_nvim(uint16_t keycode, const keyrecord_t *record) {
    if (IS_LAYER_ON(_NVIM) && record->event.pressed) {
        switch (keycode) {
            case NVIM_X_BUF:
                tap_code(NVIM_LEADER);
                tap_code(KC_B);
                tap_code(KC_D);
                return false;
            case NVIM_X_WIN:
                tap_code16(RCTL(KC_W));
                tap_code(KC_Q);
                return false;
            case NVIM_X_TAB:
                tap_code(NVIM_LEADER);
                tap_code(KC_TAB);
                tap_code(KC_D);
                return false;
            case NVIM_TAB_PREV:
                tap_code(NVIM_LEADER);
                tap_code(KC_TAB);
                tap_code(KC_LBRC);
                return false;
            case NVIM_TAB_NEXT:
                tap_code(NVIM_LEADER);
                tap_code(KC_TAB);
                tap_code(KC_RBRC);
                return false;
            case NVIM_BNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_B);
                return false;
            case NVIM_BPREV:
                tap_code(KC_LBRC);
                tap_code(KC_B);
                return false;
            case NVIM_B_MOVE_N:
                tap_code(KC_RBRC);
                tap_code16(S(KC_B));
                return false;
            case NVIM_B_MOVE_P:
                tap_code(KC_LBRC);
                tap_code16(S(KC_B));
                return false;
            case NVIM_QNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_Q);
                return false;
            case NVIM_QPREV:
                tap_code(KC_LBRC);
                tap_code(KC_Q);
                return false;
            case NVIM_DNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_D);
                return false;
            case NVIM_DPREV:
                tap_code(KC_LBRC);
                tap_code(KC_D);
                return false;
            case NVIM_ENEXT:
                tap_code(KC_RBRC);
                tap_code(KC_E);
                return false;
            case NVIM_EPREV:
                tap_code(KC_LBRC);
                tap_code(KC_E);
                return false;
            case NVIM_TNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_T);
                return false;
            case NVIM_TPREV:
                tap_code(KC_LBRC);
                tap_code(KC_T);
                return false;
            case NVIM_HNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_H);
                return false;
            case NVIM_HPREV:
                tap_code(KC_LBRC);
                tap_code(KC_H);
                return false;
            case NVIM_WNEXT:
                tap_code(KC_RBRC);
                tap_code(KC_W);
                return false;
            case NVIM_WPREV:
                tap_code(KC_LBRC);
                tap_code(KC_W);
                return false;
            case NVIM_PRN_NEXT:
                tap_code(KC_RBRC);
                tap_code16(KC_LPRN);
                return false;
            case NVIM_PRN_PREV:
                tap_code(KC_LBRC);
                tap_code16(KC_LPRN);
                return false;
            case NVIM_CBR_NEXT:
                tap_code(KC_RBRC);
                tap_code16(KC_LCBR);
                return false;
            case NVIM_CBR_PREV:
                tap_code(KC_LBRC);
                tap_code16(KC_LCBR);
                return false;
            case NVIM_SW_W:
                tap_code16(C(KC_W));
                tap_code(KC_W);
                return false;
            case NVIM_INCR_H:
                tap_code16(C(KC_W));
                tap_code16(KC_PLUS);
                return false;
            case NVIM_DECR_H:
                tap_code16(C(KC_W));
                tap_code16(KC_MINS);
                return false;
            case NVIM_INCR_W:
                tap_code16(C(KC_W));
                tap_code16(KC_RABK);
                return false;
            case NVIM_DECR_W:
                tap_code16(C(KC_W));
                tap_code16(KC_LABK);
                return false;
            case NVIM_JUMP_P:
                tap_code16(C(KC_O));
                return false;
            case NVIM_JUMP_N:
                tap_code16(C(KC_I));
                return false;
            default:
                return true;
        }
    }
    return true;
}
