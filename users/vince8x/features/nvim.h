#pragma once

#include QMK_KEYBOARD_H
#include "quantum.h"
#include "../definitions/keycodes.h"


bool process_nvim(uint16_t keycode, const keyrecord_t *record);
