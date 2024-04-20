#pragma once

#include "layers.h"

// clang-format off


// Custom keycodes
enum custom_keycodes {
    CUSTOM_KEYCODE_START = QK_USER, // SAFE_RANGE
    REPEAT,
    CUSTOM_KEYCODE_END
};


#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif

#define NAV_LT LT(_NAV, KC_ENT)
#define NUMS_LT LT(_NUMS, KC_TAB)
#define ADJUST_OSL OSL(_ADJUST)

#define HOME_A LT(_FUN, KC_A)
#define HOME_R LT(_SYM, KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I LT(_SYM, KC_I)
#define HOME_O LT(_FUN, KC_O)
#define HOME_Z LGUI_T(KC_Z)
#define HOME_SL RGUI_T(KC_SLSH)

// Home row mods for QWERTY layer.
#define QHOME_A LT(_FUN, KC_A)
#define QHOME_S LT(_SYM, KC_S)
#define QHOME_D LSFT_T(KC_D)
#define QHOME_F LCTL_T(KC_F)
#define QHOME_J RCTL_T(KC_J)
#define QHOME_K RSFT_T(KC_K)
#define QHOME_L LT(_SYM, KC_L)
#define QHOME_SC LT(_FUN, KC_SCLN)
#define QHOME_Z LGUI_T(KC_Z)
#define QHOME_SL RGUI_T(KC_SLSH)

#define H_DLR LGUI_T(KC_DLR)
#define H_LXXX LALT_T(XXXXXXX)
#define H_LPRN LCTL_T(KC_LPRN)
#define H_RPRN LSFT_T(KC_RPRN)
#define H_MINS RSFT_T(KC_MINS)
#define H_EQL RCTL_T(KC_EQL)
#define H_RXXX RALT_T(XXXXXXX)
#define H_PAST RGUI_T(KC_PAST)

#define H_F11 LGUI_T(KC_F11)
#define H_HOME LALT_T(KC_HOME)
#define H_PGUP LCTL_T(KC_PGUP)
#define H_PGDN LSFT_T(KC_PGDN)
#define H_DOWN RSFT_T(KC_DOWN)
#define H_UP RCTL_T(KC_UP)
#define H_RGHT RALT_T(KC_RGHT)
#define H_F12 RGUI_T(KC_F12)

// Functions
#define SAVE  LCTL(KC_S)
#define OPEN  LCTL(KC_O)
#define COPY  LCTL(KC_C)
#define PAST  LCTL(KC_V)
#define UNDO  LCTL(KC_Z)
#define REDO  LCTL(LSFT(KC_Z))

// Tap dance codes - TBD

// Custom keycodes - TBD

// Mod-taps
// shift
#define LSFTT_T LSFT_T(KC_T)
#define RSFTT_N RSFT_T(KC_N)
#define SF_FSYM LSFT_T(MC_FSYM)
#define SF_MODM RSFT_T(MC_MODM)
#define SF_UP RSFT_T(KC_UP)
#define SF_ENT RSFT_T(KC_ENT)

// ctrl
#define LCTLT_S LCTL_T(KC_S)
#define RCTLT_E RCTL_T(KC_E)

// Navigation
#define LCTRL_TAB C(KC_TAB)
#define CST_TAB RCS(KC_TAB)
#define TAB_CLOSE C(KC_W)
#define W_CLOSE A(KC_F4)
#define W_NEXT A(KC_TAB)
#define W_PREV LSA(KC_TAB)
#define VSCODE_N LCA(KC_MINS)
#define VSCODE_P RCS(KC_MINS)


// ctrl w
#define LCTLT_W LCTL_T(KC_W)

#define LALTT_R LALT_T(KC_R)
#define RALTT_I RALT_T(KC_I)

#define LGUIT_T LGUI_T(KC_T)
#define RGUIT_R RGUI_T(KC_R)

// hyper
#define HYP_KCG HYPR_T(KC_G)
#define HYP_KCM HYPR_T(KC_M)
#define HYP_KCH HYPR_T(KC_H)

// function
#define DESK_N LGUI_T(KC_PGDN)
#define DESK_P LGUI_T(KC_PGUP)


// One-shot mods
#define OS_LSFT OSM(MOD_LSFT)

// Layer-taps
#define NAV_F12 LT(_NAV, KC_F12)
#define NAV_AT  LT(_NAV, KC_AT)
#define NAV_STI LT(_NAV, MC_STIN) // Hold behavior is implemented in intercepted code
#define NAV_MAG LT(_NAV, MAGIC)
#define NAV_REP LT(_NAV, REPEAT)
#define FNA_REP LT(_FIXED_NAV, REPEAT)

#define NAV_BSPC LT(_NAV, KC_BSPC)
#define NUM_REP LT(_NUM, REPEAT)
#define NAV_SPC LT(_NAV, KC_SPC)


// Layer transitions
#define MO_FUN MO(_FUN)
#define MO_NAV MO(_NAV)
#define MO_NUM MO(_NUM)
// #define MO_MED  MO(_MEDIA)
// #define MO_SYS  MO(_SYSTEM)
// #define TO_A1   TO(_ALPHA1)
// #define TT_NAV  TT(_FIXED_NAV)
// #define TT_NMO  TT(_NOMOD)
// #define TG_LOCK TG(_LOCK)
// #define TG_NUM  TG(_NUMPAD)
// #define OS_SYM  OSL(_SYMBOLS)



uint16_t extract_tapping_keycode(uint16_t keycode);
// bool is_string_macro_keycode(uint16_t keycode);
// bool is_shift_macro_keycode(uint16_t keycode);
// bool is_accent_macro_keycode(uint16_t keycode);
