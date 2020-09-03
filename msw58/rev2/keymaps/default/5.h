
#include "keymap_jp.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-----------------------------------------.  ,-----------------------------------------------.
   * | ESC  |   1  |   2  |   3  |   4  |   5  |  |   6   |   7   |   8   |   9   |   0   |  -    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |  |   Y   |   U   |   I   |   O   |   P   |  @    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * |Insert|   A  |   S  |   D  |   F  |   G  |  |   H   |   J   |   K   |   L   |   ;   |  :    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * | HOME |   Z  |   X  |   C  |   V  |   B  |  |   N   |   M   |   ,   |   .   |   /   |  END  |
   * `------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------'
   *        | EISU | Ctrl |Space |Shift | LEFT |  | RIGHT | BkSp  | Enter |Delete |  KANA |
   *        `----------------------------------'  `---------------------------------------'
JP_LALT
JP_LGUI
SYMBOL
   */

  [_QWERTY] = LAYOUT( \
      JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,  /**/   JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, \
      JP_TAB,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,  /**/   JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_AT,   \
      JP_INS,  JP_A,    JP_S,    JP_D,    JP_F,    JP_G,  /**/   JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_COLN, \
      JP_HOME, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,  /**/   JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_END,  \
               KC_MHEN, JP_LCTL, JP_LSFT, JP_SPC,  LEFT,  /**/   RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KC_HENK                             \
      ),

  /* Ystrp
   * ,-----------------------------------------.  ,----------------------------------------------.
   * | ESC  |   1  |   2  |   3  |   4  |   5  |  |   6   |   7   |   8   |   9   |   0   |  -    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * | Tab  |   Q  |   W  |  "D" |  "F" |  "G" |  |   Y   |  "S"  |  "T"  |  "R"  |   P   |  @    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * |Insert|   A  |  "O" |  "E" |  "U" |  "I" |  |   H   |   J   |   K   |   L   |   ;   |  :    |
   * |------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------|
   * | HOME |   Z  |   X  |   C  |   V  |   B  |  |   N   |   M   |   ,   |   .   |   /   |  END  |
   * `------+------+------+------+------+------|  |-------+-------+-------+-------+-------+-------'
   *        | EISU | Ctrl |Space |Shift | LEFT |  | RIGHT | BkSp  | Enter |Delete |  KANA |
   *        `----------------------------------'  `---------------------------------------'
   */

  [_YSTRP] = LAYOUT( \
      JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,  /**/   JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, \
      JP_TAB,  JP_Q,    JP_W,    JP_D,    JP_F,    JP_G,  /**/   JP_Y,    JP_S,    JP_T,    JP_R,    JP_P,    JP_AT,   \
      JP_INS,  JP_A,    JP_O,    JP_E,    JP_U,    JP_I,  /**/   JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_COLN, \
      JP_HOME, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,  /**/   JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_END,  \
               KC_MHEN, JP_LCTL, JP_LSFT, JP_SPC,  LEFT,  /**/   RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KC_HENK                             \
      ),

  /* Symbol
   * ,-----------------------------------------------.  ,----------------------------------------------.
   * | ESC   |   1   |   2   |   3   |   4   |   5   |  |   6   |   7   |   8   |   9   |   0   |  -    |
   * |-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
   * | Tab   |   ~   |   _   |   "   |   '   |   `   |  |   &   |   (   |   <   |   {   |   [   |  @    |
   * |-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
   * |Insert |   +   |   -   |   *   |   =   |   :   |  |   |   |   )   |   >   |   }   |   ]   |  :    |
   * |-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
   * | HOME  |   !   |   ?   |   #   |   $   |   %   |  |       |   @   |   ^   |   ,   |   \   |  END  |
   * `-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'
   *         | EISU  |  Ctrl | Space | Shift |  LEFT |  | RIGHT | BkSp  | Enter |Delete |  KANA |
   *         `---------------------------------------'  `---------------------------------------'
   */


  [_SYMBOL] = LAYOUT( \
      JP_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,     /**/  JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS,\
      JP_TAB,  JP_TILD, JP_UNDS, JP_DQT,  JP_QUOT, JP_GRV,   /**/  JP_AMPR, JP_LPRN, JP_LT,   JP_LCBR, JP_LBRC, JP_AT,  \
      JP_INS,  JP_PLUS, JP_MINS, JP_ASTR, JP_EQL,  JP_COLN,  /**/  JP_PIPE, JP_RPRN, JP_GT,   JP_RCBR, JP_RBRC, JP_COLN,\
      JP_HOME, JP_EXLM, JP_QUES, JP_HASH, JP_DLR,  JP_PERC,  /**/  _______, JP_AT,   JP_CIRC, JP_COMM, JP_BKSL, JP_END, \
               KC_MHEN, JP_LCTL, JP_LSFT, JP_SPC,  LEFT,     /**/  RIGHT,   JP_BSPC, JP_ENT,  JP_DEL,  KC_HENK        \
      ),

  /* LEFT
   * ,-----------------------------------------.  ,-----------------------------------------.
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  |  F7  |  F8  |  F9  | F10  |  F11 |  F12 |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |Qwerty|EEPROM|  | Left | Down |  Up  |Right |      |      |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |Ystrp |Reset |  |      |      |      |      |      |      |
   * `------+------+------+------+------+------|  |------+------+------+------+------+------'
   *        |      | Ctrl |Space |Shift |      |  |Adjust| BkSp |Enter |Delete|      |
   *        `----------------------------------'  `----------------------------------'
   */

  [_LEFT] = LAYOUT( \
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /**/ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
      _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, QWERTY,  EEP_RST, /**/ JP_LEFT, JP_DOWN, JP_UP,   JP_RGHT, _______, _______, \
      _______, _______, _______, _______, YSTRP,   RESET,   /**/ _______, _______, _______, _______, _______, _______, \
               _______, JP_LCTL, JP_SPC,  JP_LSFT, _______, /**/ ADJUST,  JP_BSPC, JP_ENT,  JP_DEL,  _______           \
      ),

  /* Right
   * ,-----------------------------------------.  ,-----------------------------------------.
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  |  F7  |  F8  |  F9  | F10  |  F11 |  F12 |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |  |      | M.lc | M.mc | M.rc | wh.u |      |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |Qwerty|EEPROM|  | M.l  | M.d  | M.u  | M.r  | wh.d |      |
   * |------+------+------+------+------+------|  |------+------+------+------+------+------|
   * |      |      |      |      |Ystrp |Reset |  | Left | Down |  Up  |Right |      |      |
   * `------+------+------+------+------+------|  |------+------+------+------+------+------'
   *        |      | Ctrl |Space |Shift |Adjust|  |      | BkSp |Enter |Delete|      |
   *        `----------------------------------'  `----------------------------------'
   */

  [_RIGHT] = LAYOUT( \
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /**/ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
      _______, _______, _______, _______, _______, _______, /**/ _______, JP_BTN1, JP_BTN3, JP_BTN2, JP_WH_U, _______, \
      _______, _______, _______, _______, QWERTY,  EEP_RST, /**/ JP_MS_L, JP_MS_D, JP_MS_U, JP_MS_R, JP_WH_D, _______, \
      _______, _______, _______, _______, YSTRP,   RESET,   /**/ JP_LEFT, JP_DOWN, JP_UP,   JP_RGHT, _______, _______, \
               _______, JP_LCTL, JP_SPC,  JP_LSFT, _______, /**/ ADJUST,  JP_BSPC, JP_ENT,  JP_DEL,  _______           \
      ),

  /* Adjust
   * LeftとRightを同時押しするとこのレイヤーになります。特に何も配置していません。
   * ,-----------------------------------------.  ,------------------------------------------.
   * |      |      |      |      |      |      |  |      |      |      |      |      |       |
   * |------+------+------+------+------+------|  |------+------+------+------+------+-------|
   * |      |      |      |      |      |      |  |      |      |      |      |      |       |
   * |------+------+------+------+------+------|  |------+------+------+------+------+-------|
   * |      |      |      |      |      |      |  |      |      |      |      |      |       |
   * |------+------+------+------+------+------|  |------+------+------+------+------+-------|
   * |      |      |      |      |      |      |  |      |      |      |      |      |       |
   * `------+------+------+------+------+------|  |------+------+------+------+------+-------'
   *        |      |      |      |      |      |  |      |      |      |      |      |
   *        `----------------------------------'  `----------------------------------'
   */

  [_ADJUST] = LAYOUT( \
      _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, \
               _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______           \
      )
};


