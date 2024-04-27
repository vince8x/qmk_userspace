#include "vince8x.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
#ifdef MOUSE_ENABLE
    // Process Orbital Mouse
    process_orbital_mouse(keycode, record);
#endif
    // Process Achordion
    if (!process_achordion(keycode, record)) {
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

    return true;
}
