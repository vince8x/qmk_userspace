#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

// clang-format off

#define ___________________BASE_L1_____________________   KC_Q    , KC_W       , KC_F    , KC_P       , KC_B
#define ___________________BASE_L2_____________________   HOME_A  , HOME_R     , HOME_S  , HOME_T     , HYP_KCG
#define ___________________BASE_L3_____________________   HOME_Z  , HOME_X     , KC_C    , HOME_D     , KC_V
#define ___________________BASE_L4_____________________                          NAV_SPC , SYM_F2    , MO_MOUSE
#define ___________________BASE_R1_____________________   KC_J    , KC_L       , KC_U    , KC_Y       , KC_QUOT
#define ___________________BASE_R2_____________________   HYP_KCM , HOME_N     , HOME_E  , HOME_I     , HOME_O
#define ___________________BASE_R3_____________________   KC_K    , HOME_H     , KC_COMM , HOME_DOT   , HOME_SL
#define ___________________BASE_R4_____________________   QK_LEAD , MO(_NUM)   , NAV_BSPC

#define ___________________QWERTY_L1___________________   KC_Q    , KC_W       , KC_E    , KC_R       , KC_T
#define ___________________QWERTY_L2___________________   QHOME_A , QHOME_S    , QHOME_D , QHOME_F    , HYP_KCG
#define ___________________QWERTY_L3___________________   QHOME_Z , QHOME_X    , KC_C    , QHOME_V    , KC_B
#define ___________________QWERTY_L4___________________                          NAV_SPC , MO(_SYM)   , MO_MOUSE
#define ___________________QWERTY_R1___________________   KC_Y    , KC_U       , KC_I    , KC_O       , KC_P
#define ___________________QWERTY_R2___________________   HYP_KCH , QHOME_J    , QHOME_K , QHOME_L    , QHOME_SC
#define ___________________QWERTY_R3___________________   KC_N    , QHOME_M    , KC_COMM , QHOME_DOT  , QHOME_SL
#define ___________________QWERTY_R4___________________   QK_LEAD , MO(_NUM)   , NAV_BSPC


#define ___________________NUM_L1______________________   KC_AT       , KC_LABK , KC_RABK    , KC_PLUS         , KC_HASH
#define ___________________NUM_L2______________________   KC_EXLM     , KC_MINS , KC_PERC    , KC_EQL          , KC_CIRC
#define ___________________NUM_L3______________________   KC_GRV      , KC_LABK , KC_RABK    , KC_MINS         , KC_UNDS
#define ___________________NUM_L4______________________                           KC_SPC     , KC_SPC          , KC_SPC
#define ___________________NUM_R1______________________   KC_EQL      , KC_7    , KC_8       , KC_9            , KC_BSLS
#define ___________________NUM_R2______________________   KC_0        , KC_4    , KC_5       , KC_6            , KC_SCLN
#define ___________________NUM_R3______________________   KC_MINS     , KC_1    , KC_2       , KC_3            , KC_SLSH
#define ___________________NUM_R4______________________   KC_ENT      , KC_BSPC , TO(_BASE)


#define ___________________SYM_L1______________________   KC_AT       , KC_LABK , KC_RABK    , KC_PLUS         , KC_HASH
#define ___________________SYM_L2______________________   KC_EXLM     , KC_MINS , KC_PERC    , KC_EQL          , KC_CIRC
#define ___________________SYM_L3______________________   KC_GRV      , KC_LABK , KC_RABK    , KC_MINS         , KC_UNDS
#define ___________________SYM_L4______________________                           MO_FUN     , XXXXXXX         , KC_SPC
#define ___________________SYM_R1______________________   KC_AMPR     , KC_ASTR , KC_LBRC    , KC_RBRC         , KC_BSLS
#define ___________________SYM_R2______________________   TD_SCLE     , KC_COLN , KC_LPRN    , KC_RPRN         , KC_QUES
#define ___________________SYM_R3______________________   KC_TILDE    , KC_DLR  , KC_LCBR    , KC_RCBR         , KC_SLSH
#define ___________________SYM_R4______________________   KC_ENT      , KC_BSPC , TO(_BASE)


#define ___________________FUN_L1______________________   TD_MACR     , XXXXXXX , REDO       , UNDO            , XXXXXXX
#define ___________________FUN_L2______________________   XXXXXXX     , XXXXXXX , XXXXXXX    , XXXXXXX         , XXXXXXX
#define ___________________FUN_L3______________________   XXXXXXX     , DESK_P  , DESK_N     , KC_MINS         , XXXXXXX
#define ___________________FUN_L4______________________                           XXXXXXX    , XXXXXXX          , KC_SPC
#define ___________________FUN_R1______________________   KC_F10      , KC_F7   , KC_F8      , KC_F9           , KC_F10
#define ___________________FUN_R2______________________   KC_F11      , KC_F4   , KC_F5      , KC_F6           , XXXXXXX
#define ___________________FUN_R3______________________   KC_F12      , KC_F1   , KC_F2      , KC_F3           , KC_F12
#define ___________________FUN_R4______________________   KC_ENT      , KC_BSPC , XXXXXXX


#define ___________________NAV_L1______________________   TAB_CLOSE   , OBS_P     , OBS_N      , MONITOR_P       , MONITOR_N
#define ___________________NAV_L2______________________   TOGG_MON    , S(KC_TAB) , KC_TAB     , VSCODE_P        , VSCODE_N
#define ___________________NAV_L3______________________   TOGG_BARRIER, TAB_PREV  , TAB_NEXT   , DESK_P          , DESK_N
#define ___________________NAV_L4______________________                             XXXXXXX    , XXXXXXX         , KC_SPC
#define ___________________NAV_R1______________________   COPY        , KC_PGUP   , UNDO       , KC_HOME         , PAST
#define ___________________NAV_R2______________________   KC_LEFT     , KC_DOWN   , KC_UP      , KC_RIGHT        , CW_TOGG
#define ___________________NAV_R3______________________   KC_INS      , KC_PGDN   , REDO       , KC_END          , KC_SLSH
#define ___________________NAV_R4______________________   KC_ENT      , QK_REP    , XXXXXXX


#define ___________________MOU_L1______________________   _______     , OM_BTN2    , OM_U      , OM_BTNS         , OM_DBLS
#define ___________________MOU_L2______________________   _______     , OM_L       , OM_D      , OM_R            , OM_HLDS
#define ___________________MOU_L3______________________   _______     , OM_BTN3    , OM_W_D    , OM_W_U          , OM_RELS
#define ___________________MOU_L4______________________                              C(KC_C)   , C(KC_V)         , _______
#define ___________________MOU_R1______________________   OM_DBLS     , OM_BTNS   , OM_U       , OM_BTN2         , _______
#define ___________________MOU_R2______________________   OM_HLDS     , OM_L      , OM_D       , OM_R            , _______

#define ___________________MOU_R3______________________   OM_RELS     , OM_W_D    , OM_W_U     , OM_BTN3         , _______
#define ___________________MOU_R4______________________   _______     , C(KC_C)   , C(KC_V)


#define ___________________TMUX_L1_____________________   TM_CLOSE      , TM_RENAME    , TM_FINGERS      , TM_PASTE      , TM_LS_S
#define ___________________TMUX_L2_____________________   KC_A          , TM_WIN_P     , TM_WIN_N        , TM_NEW        , TM_CMD
#define ___________________TMUX_L3_____________________   TM_ZOOM       , TM_MV        , TM_MV_RIGHT     , TM_LS_P       , TM_SPLIT
#define ___________________TMUX_L4_____________________                                  TM_N_LAYOUT     , XXXXXXX       , KC_SPC
#define ___________________TMUX_R1_____________________   TM_JUMP       , TM_MARK      , TM_UNMARK       , TM_COPY       , TM_P_TO_W
#define ___________________TMUX_R2_____________________   TM_RESIZE_L   , TM_RESIZE_D  , TM_RESIZE_U     , TM_RESIZE_R   , TM_CYCLE
#define ___________________TMUX_R3_____________________   TM_SW_W       , TM_VSPLIT    , TM_FZF_URL      , TM_FZF_NOVA   , TM_CP_MODE
#define ___________________TMUX_R4_____________________   XXXXXXX       , TM_JOIN_MARK , XXXXXXX

#define ___________________NVIM_L1_____________________   NVIM_X_WIN    , NVIM_QPREV   , NVIM_QNEXT      , NVIM_TPREV          , NVIM_TNEXT
#define ___________________NVIM_L2_____________________   NVIM_X_BUF    , NVIM_BPREV   , NVIM_BNEXT      , NVIM_B_MOVE_P       , NVIM_B_MOVE_N
#define ___________________NVIM_L3_____________________   NVIM_X_TAB    , NVIM_TAB_PREV, NVIM_TAB_NEXT   , NVIM_HPREV          , NVIM_HNEXT
#define ___________________NVIM_L4_____________________                                  XXXXXXX         , XXXXXXX             , XXXXXXX
#define ___________________NVIM_R1_____________________   NVIM_INCR_H   , XXXXXXX      , NVIM_CBR_PREV   , NVIM_CBR_NEXT       , NVIM_ESCAPE_TERM
#define ___________________NVIM_R2_____________________   NVIM_JUMP_P   , NVIM_JUMP_N  , NVIM_PRN_PREV   , NVIM_PRN_NEXT       , NVIM_SW_W
#define ___________________NVIM_R3_____________________   XXXXXXX       , XXXXXXX      , NVIM_DECR_W     , NVIM_INCR_W         , XXXXXXX
#define ___________________NVIM_R4_____________________   XXXXXXX       , XXXXXXX      , XXXXXXX



#define ________________SHORTCUTS_L1___________________ XXXXXXX , MC_CLOS , MC_Z0R  , MC_PREV , XXXXXXX
#define ________________SHORTCUTS_L2___________________ MO_SYS  , SF_MODM , MC_MODP , MC_TABS , XXXXXXX
#define ________________SHORTCUTS_L3___________________ MC_SWLE , MC_SWRI , MC_CALC , XXXXXXX , XXXXXXX
#define ________________SHORTCUTS_L4___________________ NAV_COD , TT_NMO  , XXXXXXX

#define ________________SHORTCUTS_R1___________________ XXXXXXX , MC_SELW , MC_ENT  , MC_ESC  , XXXXXXX
#define ________________SHORTCUTS_R2___________________ XXXXXXX , MC_SELL , KC_DOWN , SF_UP   , MO_SYS
#define ________________SHORTCUTS_R3___________________ XXXXXXX , MC_JOIN , TD_MACR , SLE_LOC , XXXXXXX
#define ________________SHORTCUTS_R4___________________ XXXXXXX , COD_SPC , TT_NAV

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
