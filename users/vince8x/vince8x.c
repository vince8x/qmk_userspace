#include "vince8x.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
#ifdef MOUSE_ENABLE
    // Process Orbital Mouse
    if (!process_orbital_mouse(keycode, record)) {
        return false;
    };

#endif
    // Process Achordion
    if (!process_achordion(keycode, record)) {
        return false;
    }
    if (!process_record_num_word(keycode, record)) {
        return false;
    }

    // // Process macros
    switch (process_macros(keycode, record)) {
        case PROCESS_RECORD_RETURN_TRUE:
            return true;
        case PROCESS_RECORD_RETURN_FALSE:
            return false;
        default:
            break;
    };

    // Process OS toggle
    switch (process_os_toggle(keycode, record)) {
        case PROCESS_RECORD_RETURN_TRUE:
            return true;
        case PROCESS_RECORD_RETURN_FALSE:
            return false;
        default:
            break;
    };

    return true;
}
