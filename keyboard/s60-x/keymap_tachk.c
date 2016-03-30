/* Custom keymap (by tachk) for Sentraq S60-X */

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0: Main layer

    ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    │ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │ FN  │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │▒▒▒▒▒│ENTER│█████│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RS/CL│▒▒▒▒▒│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │LCTRL│L_GUI│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_GUI│PAUSE│RCTRL│█████│
    └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘

*/

    /* ANSI qwerty */
    KEYMAP(ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,   NO, BSPC, \
           TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,       \
           FN0,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,   NO,  ENT,       \
          LSFT,   NO,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,   NO,  FN1,   NO, \
          LCTL, LGUI, LALT,                    SPC,                   RALT, RGUI,PAUSE, RCTL),

/* Layer 1: Function layer

    ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    │GRAVE│ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│ DEL │
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │     │     │     │     │     │     │     │     │     │     │PRTSC│HOME │ END │     │█████│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │     │     │     │     │     │     │Left │Down │ Up  │Right│     │     │▒▒▒▒▒│     │█████│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │LSHFT│▒▒▒▒▒│     │     │     │     │     │     │     │PGUP │PGDWN│     │▒▒▒▒▒│RS/CL│▒▒▒▒▒│
    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    │LCTRL|L_GUI│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_GUI│     │RCTRL│█████│
    └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘

*/

    /* Utility keys */
    KEYMAP(GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,   NO,  DEL, \
            NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO, PSCR, HOME,  END,   NO,       \
          TRNS,   NO,   NO,   NO,   NO,   NO, LEFT, DOWN,   UP,RIGHT,   NO,   NO,   NO,   NO,       \
          LSFT,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO, PGUP, PGDN,   NO,   NO,  FN1,   NO, \
          LCTL, LGUI, LALT,                    SPC,                   RALT, RGUI,   NO, RCTL)

};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // To utility keys layer
    [1] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_CAPS)  // Need to use MOD moniker for shift
};

