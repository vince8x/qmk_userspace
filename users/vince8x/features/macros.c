#include QMK_KEYBOARD_H

#include "macros.h"

process_record_result_t process_macros(uint16_t keycode, keyrecord_t *record) {

    if (!is_shift_macro_keycode(keycode)) {
        return PROCESS_RECORD_CONTINUE;
    }

    if (record != NULL && !record->event.pressed) {
        return PROCESS_RECORD_CONTINUE;
    }

    switch (keycode) {
        case MC_VIM_CLOSE:
            tap_code(KC_SCLN);
            tap_code(KC_Q);
            tap_code(KC_ENT);
            return PROCESS_RECORD_RETURN_FALSE;

    }

    return PROCESS_RECORD_CONTINUE;

}
