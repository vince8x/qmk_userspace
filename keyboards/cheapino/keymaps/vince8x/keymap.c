#include QMK_KEYBOARD_H

#include "vince8x.h"

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________BASE_L1_____________________ , ___________________BASE_R1_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________BASE_L2_____________________ , ___________________BASE_R2_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________BASE_L3_____________________ , ___________________BASE_R3_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________BASE_L4_____________________ , ___________________BASE_R4_____________________),
 // |___________________________________________________________________________________________________|

    [_QWERTY] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________QWERTY_L1___________________ , ___________________QWERTY_R1___________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________QWERTY_L2___________________ , ___________________QWERTY_R2___________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________QWERTY_L3___________________ , ___________________QWERTY_R3___________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________QWERTY_L4___________________ , ___________________QWERTY_R4___________________),
 // |___________________________________________________________________________________________________|
    [_SYM] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________SYM_L1______________________ , ___________________SYM_R1______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________SYM_L2______________________ , ___________________SYM_R2______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________SYM_L3______________________ , ___________________SYM_R3______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________SYM_L4______________________ , ___________________SYM_R4______________________),
 // |___________________________________________________________________________________________________|
    [_NUM] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________NUM_L1______________________ , ___________________NUM_R1______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NUM_L2______________________ , ___________________NUM_R2______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NUM_L3______________________ , ___________________NUM_R3______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NUM_L4______________________ , ___________________NUM_R4______________________),
 // |___________________________________________________________________________________________________|
    [_FUN] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________FUN_L1______________________ , ___________________FUN_R1______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________FUN_L2______________________ , ___________________FUN_R2______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________FUN_L3______________________ , ___________________FUN_R3______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________FUN_L4______________________ , ___________________FUN_R4______________________),
 // |___________________________________________________________________________________________________|
    [_NAV] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________NAV_L1______________________ , ___________________NAV_R1______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NAV_L2______________________ , ___________________NAV_R2______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NAV_L3______________________ , ___________________NAV_R3______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________NAV_L4______________________ , ___________________NAV_R4______________________),
 // |___________________________________________________________________________________________________|
    [_MOUSE] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________MOU_L1______________________ , ___________________MOU_R1______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________MOU_L2______________________ , ___________________MOU_R2______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________MOU_L3______________________ , ___________________MOU_R3______________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________MOU_L4______________________ , ___________________MOU_R4______________________),
 // |___________________________________________________________________________________________________|
    [_TMUX] = LAYOUT_wrapper(
 // |___________________________________________________________________________________________________|
      ___________________TMUX_L1_____________________ , ___________________TMUX_R1_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________TMUX_L2_____________________ , ___________________TMUX_R2_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________TMUX_L3_____________________ , ___________________TMUX_R3_____________________ ,
 // |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
      ___________________TMUX_L4_____________________ , ___________________TMUX_R4_____________________),
 // |___________________________________________________________________________________________________|
};

void matrix_scan_user(void) {
    achordion_task();
#ifdef MOUSE_ENABLE
    orbital_mouse_task();
#endif
}
