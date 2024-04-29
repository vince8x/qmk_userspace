#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

// clang-format off

#define ___________________BASE_L1_____________________   KC_Q    , KC_W       , KC_F    , KC_P       , KC_B
#define ___________________BASE_L2_____________________   HOME_A  , HOME_R     , HOME_S  , HOME_T     , HYP_KCG
#define ___________________BASE_L3_____________________   HOME_Z  , HOME_X     , KC_C    , KC_D       , KC_V
#define ___________________BASE_L4_____________________                          NAV_SPC , TT(_SYM)   , MO_FUN
#define ___________________BASE_R1_____________________   KC_J    , KC_L       , KC_U    , KC_Y       , KC_QUOT
#define ___________________BASE_R2_____________________   HYP_KCM , HOME_N     , HOME_E  , HOME_I     , HOME_O
#define ___________________BASE_R3_____________________   KC_K    , KC_H       , KC_COMM , HOME_DOT   , HOME_SL
#define ___________________BASE_R4_____________________   MO_FUN  , MO(_NUM)   , NAV_BSPC

#define ___________________QWERTY_L1___________________   KC_Q    , KC_W    , KC_E    , KC_R       , KC_T
#define ___________________QWERTY_L2___________________   QHOME_A , QHOME_S , QHOME_D , QHOME_F    , HYP_KCG
#define ___________________QWERTY_L3___________________   QHOME_Z , KC_X    , KC_C    , KC_V       , KC_B
#define ___________________QWERTY_L4___________________                       NUM_REP , NAV_SPC    , MO_FUN
#define ___________________QWERTY_R1___________________   KC_Y    , KC_U    , KC_I    , KC_O       , KC_P
#define ___________________QWERTY_R2___________________   HYP_KCH , QHOME_J , QHOME_K , QHOME_L    , QHOME_SC
#define ___________________QWERTY_R3___________________   KC_N    , KC_M    , KC_COMM , QHOME_DOT  , QHOME_SL
#define ___________________QWERTY_R4___________________   MO_FUN  , NAV_BSPC, NUM_REP


#define ___________________NUM_L1______________________   KC_TILDE    , KC_AT   , KC_HASH   , KC_DLR         , KC_PERC
#define ___________________NUM_L2______________________   KC_EXLM     , KC_PERC , KC_CIRC   , KC_AMPR      , KC_COLN
#define ___________________NUM_L3______________________   KC_GRV      , KC_GRV  , KC_C      , LSFT(KC_MINS), KC_B
#define ___________________NUM_L4______________________                           KC_SPC    , KC_SPC       , KC_SPC
#define ___________________NUM_R1______________________   KC_EQL      , KC_7    , KC_8      , KC_9         , KC_BSLS
#define ___________________NUM_R2______________________   KC_0        , KC_4    , KC_5      , KC_6         , KC_SCLN
#define ___________________NUM_R3______________________   KC_MINS     , KC_1    , KC_2      , KC_3         , KC_SLSH
#define ___________________NUM_R4______________________   KC_ENT      , KC_BSPC , TO(_BASE)


#define ___________________SYM_L1______________________   KC_TILDE    , KC_AT   , KC_RABK    , KC_PLUS         , KC_DQUO
#define ___________________SYM_L2______________________   KC_EXLM     , KC_HASH , KC_DLR     , KC_EQL          , KC_CIRC
#define ___________________SYM_L3______________________   KC_GRV      , KC_LABK , KC_RABK    , KC_MINS         , KC_QUOT
#define ___________________SYM_L4______________________                           MO_FUN     , XXXXXXX         , KC_SPC
#define ___________________SYM_R1______________________   KC_AMPR     , KC_CIRC , KC_LBRC    , KC_RBRC         , KC_BSLS
#define ___________________SYM_R2______________________   KC_ASTR     , KC_COLN , KC_LPRN    , KC_RPRN         , KC_QUES
#define ___________________SYM_R3______________________   KC_TILDE    , KC_DLR  , KC_LCBR    , KC_RCBR         , KC_SLSH
#define ___________________SYM_R4______________________   KC_ENT      , KC_BSPC , TO(_BASE)


#define ___________________FUN_L1______________________   XXXXXXX     , XXXXXXX , REDO       , UNDO            , XXXXXXX
#define ___________________FUN_L2______________________   XXXXXXX     , XXXXXXX , XXXXXXX    , XXXXXXX         , XXXXXXX
#define ___________________FUN_L3______________________   XXXXXXX     , DESK_P  , DESK_N     , KC_MINS         , XXXXXXX
#define ___________________FUN_L4______________________                           XXXXXXX    , XXXXXXX          , KC_SPC
#define ___________________FUN_R1______________________   KC_F10      , KC_F7   , KC_F8      , KC_F9           , KC_F10
#define ___________________FUN_R2______________________   KC_F11      , KC_F4   , KC_F5      , KC_F6           , XXXXXXX
#define ___________________FUN_R3______________________   KC_F12      , KC_F1   , KC_F2      , KC_F3           , KC_F12
#define ___________________FUN_R4______________________   KC_ENT      , KC_BSPC , XXXXXXX


#define ___________________NAV_L1______________________   TERM_CLOSE  , TERM_P    , DESK_P     , TERM_N          , DESK_N
#define ___________________NAV_L2______________________   TAB_CLOSE   , TAB_PREV  , VSCODE_P   , TAB_NEXT        , VSCODE_N
#define ___________________NAV_L3______________________   W_CLOSE     , W_PREV    , MONITOR_P  , W_NEXT          , MONITOR_N
#define ___________________NAV_L4______________________                             XXXXXXX    , MO(_NUM)        , KC_SPC
#define ___________________NAV_R1______________________   COPY        , KC_PGUP   , UNDO       , KC_HOME         , PAST
#define ___________________NAV_R2______________________   KC_LEFT     , KC_DOWN   , KC_UP      , KC_RIGHT        , CW_TOGG
#define ___________________NAV_R3______________________   KC_INS      , KC_PGDN   , REDO       , KC_END          , KC_SLSH
#define ___________________NAV_R4______________________   KC_ENT      , KC_BSPC   , XXXXXXX


#define ________________SHORTCUTS_L1_________           XXXXXXX , MC_CLOS , MC_Z0R  , MC_PREV
#define ________________SHORTCUTS_L2___________________ MO_SYS  , SF_MODM , MC_MODP , MC_TABS , XXXXXXX
#define           ______SHORTCUTS_L3___________________           MC_SWLE , MC_SWRI , MC_CALC , XXXXXXX
#define                               _SHORTCUTS_L4____                               NAV_COD , TT_NMO

#define           ______SHORTCUTS_R1___________________           MC_SELW , MC_ENT  , MC_ESC  , XXXXXXX
#define ________________SHORTCUTS_R2___________________ XXXXXXX , MC_SELL , KC_DOWN , SF_UP   , MO_SYS
#define ________________SHORTCUTS_R3_________           XXXXXXX , MC_JOIN , TD_MACR , SLE_LOC
#define _SHORTCUTS_R4____                               COD_SPC , TT_NAV

#define ___________________CODING_L1_________           XXXXXXX , MC_CLOS , MC_BREK , MC_BUID
#define ___________________CODING_L2___________________ MC_PROJ , SF_FSYM , MC_RUN  , MC_DBUG , XXXXXXX
#define           _________CODING_L3___________________           MC_RECE , MC_SWAP , MC_FIUS , XXXXXXX
#define                               ____CODING_L4____                               NAV_STI , MC_STOV

#define           _________CODING_R1___________________           MC_AUCO , MC_ENT  , MC_ESC  , XXXXXXX
#define ___________________CODING_R2___________________ XXXXXXX , MC_QUIK , MC_DOWN , SF_UP   , XXXXXXX
#define ___________________CODING_R3_________           XXXXXXX , MC_QDOC , MC_REFC , MC_COMT
#define ____CODING_R4____                               _______ , _______

#define ___________________NOMOD_L1__________           KC_Q    , KC_B    , KC_M    , KC_G
#define ___________________NOMOD_L2____________________ KC_D    , KC_N    , KC_S    , KC_T    , KC_W
#define           _________NOMOD_L3____________________           KC_F    , KC_C    , KC_P    , KC_V
#define                               ____NOMOD_L4_____                               QK_REP  , _______


#define _________________SYMBOLS_L1__________           XXXXXXX , KC_LCBR , KC_RCBR , KC_DLR
#define _________________SYMBOLS_L2____________________ KC_AT   , KC_LPRN , KC_RPRN , MC_DQUO , XXXXXXX
#define           _______SYMBOLS_L3____________________           KC_LBRC , KC_RBRC , KC_QUES , XXXXXXX
#define                               __SYMBOLS_L4_____                               KC_CAPS , KC_SPC

#define           _______SYMBOLS_R1____________________           KC_COLN , KC_EQL  , KC_HASH , XXXXXXX
#define _________________SYMBOLS_R2____________________ XXXXXXX , KC_MINS , KC_PLUS , KC_SLSH , KC_ASTR
#define _________________SYMBOLS_R3__________           XXXXXXX , KC_EXLM , KC_LT   , KC_GT
#define __SYMBOLS_R4_____                               KC_SPC  , TG_NUM

#define ___________________MEDIA_L1__________           XXXXXXX , KC_ESC  , OM_BTN1 , OM_BTN2
#define ___________________MEDIA_L2____________________ XXXXXXX , OM_L    , OM_U    , OM_R    , XXXXXXX
#define           _________MEDIA_L3____________________           OM_W_D  , OM_D    , OM_W_U  , XXXXXXX
#define                               ____MEDIA_L4_____                               FNA_REP , _______

#define           _________MEDIA_R1____________________           KC_TAB  , KC_ENT  , KC_BSPC , XXXXXXX
#define ___________________MEDIA_R2____________________ XXXXXXX , MC_MIC  , KC_VOLD , KC_VOLU , MC_CAM
#define ___________________MEDIA_R3__________           XXXXXXX , KC_MPLY , KC_MPRV , KC_MNXT
#define ____MEDIA_R4_____                               _______ , _______

#define _______________________LOCK____L1____           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define _______________________LOCK____L2______________ _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define           _____________LOCK____L3______________           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define                               ______LOCK____L4_                               XXXXXXX , XXXXXXX

#define           _____________LOCK____R1______________           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define _______________________LOCK____R2______________ XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , _______
#define _______________________LOCK____R3____           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define ______LOCK____R4_                               XXXXXXX , XXXXXXX

#define ______________________SYSTEM___L1____           XXXXXXX , RGB_VAD , RGB_VAI , EE_CLR
#define ______________________SYSTEM___L2______________ XXXXXXX , RGB_HUD , RGB_HUI , QK_BOOT , XXXXXXX
#define           ____________SYSTEM___L3______________           RGB_SAD , RGB_SAI , RGB_TOG , XXXXXXX
#define                               _____SYSTEM___L4_                               XXXXXXX , XXXXXXX

#define           ____________SYSTEM___R1______________           EE_CLR  , TG_WIN  , KC_NUM  , XXXXXXX
#define ______________________SYSTEM___R2______________ XXXXXXX , QK_BOOT , TG_MAC  , TG_LOCK , XXXXXXX
#define ______________________SYSTEM___R3____           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
#define _____SYSTEM___R4_                               XXXXXXX , XXXXXXX

// clang-format on
