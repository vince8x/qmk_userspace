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

    return true;
}
