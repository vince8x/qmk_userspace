#pragma once

#include "layers.h"

// clang-format off


// tap dance codes
enum {
    TD_CODE_START,
    ENT_END,
    SCL_END,
    TMUX_PREFIX,

#ifdef DYNAMIC_MACRO_ENABLE
    REC_MAC,
#endif
    TD_CODE_END,
};

// tap dance keycodes

#define TD_EENT TD(ENT_END)
#define TD_SCLE TD(SCL_END)
#define TD_TMUX TD(TMUX_PREFIX)
#ifdef DYNAMIC_MACRO_ENABLE
#define TD_MACR TD(REC_MAC)
#else
#define TD_MACR XXXXXXX
#endif


// tmux layer
#define TMUX_PREFIX C(KC_A)
#define TM_KEY KC_A
#define TM_DT KC_D
#define TM_CMD KC_COLN
#define TM_NEW KC_C
#define TM_WIN_N KC_N
#define TM_WIN_P KC_P
#define TM_LS KC_W
#define TM_LS_S KC_S
#define TM_LS_P KC_Q
#define TM_SEARCH KC_F
#define TM_RENAME KC_COMM
#define TM_CLOSE_W KC_AMPR
#define TM_SPLIT KC_DQUO
#define TM_VSPLIT KC_PERC
#define TM_CYCLE KC_O
#define TM_CYCLE_L KC_SPC
#define TM_CLOSE KC_X
#define TM_ZOOM KC_Z
#define TM_P_TO_W KC_EXLM
#define TM_MV_LEFT KC_LCBR
#define TM_MV_RIGHT KC_RCBR
#define TM_LEFT KC_LEFT
#define TM_RIGHT KC_RIGHT
#define TM_UP KC_UP
#define TM_DOWN KC_DOWN
#define TM_RESIZE_U S(KC_K)
#define TM_RESIZE_D S(KC_J)
#define TM_RESIZE_L S(KC_H)
#define TM_RESIZE_R S(KC_L)
#define TM_COPY KC_Y
#define TM_PASTE KC_RBRC
#define TM_CP_MODE KC_LBRC
#define TM_JUMP KC_J
#define TM_MARK KC_M
#define TM_JOIN_MARK C(KC_J)
#define TM_UNMARK S(KC_M)
#define TM_N_LAYOUT KC_SPC
#define TM_FZF_NOVA KC_TAB

// nvim layer
#define NVIM_LEADER KC_SPC

// Custom keycodes
enum custom_keycodes {
    CUSTOM_KEYCODE_START = QK_USER, // SAFE_RANGE

    MC_SECRET_1,

    // Toggle codes
    TG_WIN, TG_MAC,

    // Select word/line
    MC_SELW, MC_SELL,

    UPDIR,

    REPEAT,
    NUMWORD,
    SFT_MACRO_START,
    STR_MACRO_START,
    SFT_MACRO_END,

    MC_VIM_CLOSE,
    NVIM_X_BUF,
    NVIM_BNEXT,
    NVIM_BPREV,
    NVIM_B_MOVE_N,
    NVIM_B_MOVE_P,
    NVIM_QNEXT,
    NVIM_QPREV,
    NVIM_DNEXT,
    NVIM_DPREV,
    NVIM_ENEXT,
    NVIM_EPREV,
    NVIM_WNEXT,
    NVIM_WPREV,
    NVIM_TNEXT,
    NVIM_TPREV,
    NVIM_X_WIN,
    NVIM_X_TAB,
    NVIM_TAB_PREV,
    NVIM_TAB_NEXT,
    NVIM_HNEXT,
    NVIM_HPREV,
    NVIM_PRN_NEXT,
    NVIM_PRN_PREV,
    NVIM_CBR_NEXT,
    NVIM_CBR_PREV,
    NVIM_SW_W,
    NVIM_INCR_H,
    NVIM_INCR_W,
    NVIM_DECR_H,
    NVIM_DECR_W,

     // Start macros for accented letters
    ACCENT_MACRO_START,
    ACCENT_MACRO_END,
    STR_MACRO_END,
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

#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O LGUI_T(KC_O)
#define HOME_Z LT(_TMUX, KC_Z)
#define HOME_X LT(_TMUX, KC_X)
#define HOME_SL LT(_TMUX, KC_SLSH)
#define HOME_DOT LT(_TMUX, KC_DOT)
#define HOME_D LT(_NVIM, KC_D)
#define HOME_H LT(_NVIM, KC_H)

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
#define QHOME_X LALT_T(KC_X)
#define QHOME_SL RGUI_T(KC_SLSH)
#define QHOME_DOT RALT_T(KC_DOT)

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
#define TAB_NEXT C(KC_TAB)
#define TAB_PREV RCS(KC_TAB)
#define TAB_CLOSE C(KC_W)
#define W_CLOSE A(KC_F4)
#define W_NEXT A(KC_TAB)
#define W_PREV LSA(KC_TAB)
#define VSCODE_P LCA(KC_MINS)
#define VSCODE_N RCS(KC_MINS)
#define OBS_P LCA(KC_LEFT)
#define OBS_N LCA(KC_RIGHT)
#define VS_CLOSE MC_VIM_CLOSE
#define MONITOR_N LCA(KC_DOT)
#define MONITOR_P LCA(KC_COMM)
#define TOGG_MON A(KC_A)
#define TOGG_BARRIER RCS(KC_A)
#define DESK_N A(KC_TAB)
#define DESK_P LSA(KC_TAB)
#define TERM_N C(KC_PGDN)
#define TERM_P C(KC_PGUP)
#define TERM_CLOSE C(KC_D)
#define WARPD_X RAG(KC_X)
#define WARPD_G RAG(KC_G)
#define WARPD_C RAG(KC_C)
#define MV_SRP LSA(KC_MINS)
#define SH_SRP A(KC_MINS)





// alt
#define LALTT_X LALT_T(KC_X)
#define RALTT_DOT RALT_T(KC_DOT)

// gui
#define LGUIT_T LGUI_T(KC_T)
#define RGUIT_R RGUI_T(KC_R)

// hyper
#define HYP_KCG HYPR_T(KC_G)
#define HYP_KCM HYPR_T(KC_M)
#define HYP_KCH HYPR_T(KC_H)


// function


// One-shot mods
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LCTL OSM(MOD_LCTL)


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
#define SYM_E LT(_SYM, KC_E)
#define SYM_REP LT(_SYM, QK_REP)


// Layer transitions
#define MO_FUN MO(_FUN)
#define MO_NAV MO(_NAV)
#define MO_NUM MO(_NUM)
#define MO_SYM MO(_SYM)
#define MO_MOUSE MO(_MOUSE)
// #define MO_MED  MO(_MEDIA)
// #define MO_SYS  MO(_SYSTEM)
// #define TO_A1   TO(_ALPHA1)
// #define TT_NAV  TT(_FIXED_NAV)
// #define TT_NMO  TT(_NOMOD)
// #define TG_LOCK TG(_LOCK)
// #define TG_NUM  TG(_NUMPAD)
// #define OS_SYM  OSL(_SYMBOLS)



uint16_t extract_tapping_keycode(uint16_t keycode);
bool is_string_macro_keycode(uint16_t keycode);
bool is_shift_macro_keycode(uint16_t keycode);
bool is_accent_macro_keycode(uint16_t keycode);
