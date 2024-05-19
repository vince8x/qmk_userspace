#include "tmux.h"

/* return false to finish processing of the key */
/* return true  to fall through to the qmk processing of the key */
bool process_tmux(uint16_t keycode, const keyrecord_t *record) {

    if (IS_LAYER_ON(_TMUX) && record->event.pressed) {
        switch (keycode) {
            case KC_B:
                tap_code16(TMUX_PREFIX);
                tap_code16(KC_A);
                return false;
            default:
                tap_code16(TMUX_PREFIX);
                return true;
        }
    }
    return true;
}
