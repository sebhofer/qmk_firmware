/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum planck_layers
  {
   _QWERTY,
   _COLEMAK,
   _DVORAK,
   _LOWER,
   _RAISE,
   _ADJUST,
   _MOVE
  };

enum planck_keycodes
  {
   QWERTY = SAFE_RANGE,
   QWERTZ,
   COLEMAK,
   DVORAK,
   LOWER,
   RAISE,
   MOVE
  };

/* enum unicode_names */
/*   { */
/*    UML_U, */
/*    UML_A, */
/*    UML_O, */
/*    UML_S */
/*   }; */

/* const uint32_t PROGMEM unicode_map[] = */
/*   { */
/*    [UML_A]  = 0x0228, */
/*    [UML_O]  = 0x0246, */
/*    [UML_U]  = 0x0252, */
/*    [UML_S]  = 0x0223 */
/*   }; */

/* enum tapdance_codes { */
/*                      TD_UML_A, */
/*                      TD_UML_O, */
/*                      TD_UML_U, */
/*                      TD_UML_S */
/* }; */

/* //Tap Dance Definitions */
/* qk_tap_dance_action_t tap_dance_actions[] = */
/*   { */
/*    //Tap once for Esc, twice for Caps Lock */
/*    [TD_UML_A]  = ACTION_TAP_DANCE_DOUBLE(KC_A, UC(0xE4)), */
/*    [TD_UML_O]  = ACTION_TAP_DANCE_DOUBLE(KC_O, UC(0xF6)), */
/*    [TD_UML_U]  = ACTION_TAP_DANCE_DOUBLE(KC_U, UC(0xFC)) */
/*   }; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {

   /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
   [_QWERTY] = LAYOUT_planck_mit
   (
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
    KC_LCTL, MOVE, KC_LGUI, KC_LALT, RAISE,       KC_SPC,          LOWER,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

   /* Colemak
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
   [_COLEMAK] = LAYOUT_planck_mit
   (
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    MOVE, KC_LCTL, KC_LALT, KC_LGUI, LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

   /* Dvorak
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
   [_DVORAK] = LAYOUT_planck_mit
   (
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
    KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT ,
    MOVE, KC_LCTL, KC_LALT, KC_LGUI, LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

   /* Lower
    * ,-----------------------------------------------------------------------------------.
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
    * `-----------------------------------------------------------------------------------'
    */
   [_LOWER] = LAYOUT_planck_mit
   (
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
    _______, _______, _______, _______, _______,     _______,      _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
    ),

   /* Raise
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
    * `-----------------------------------------------------------------------------------'
    */
   [_RAISE] = LAYOUT_planck_mit
   (
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______,     _______,      _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
    ),

   [_MOVE] = LAYOUT_planck_mit
   (
    _______, _______, _______, _______, _______, _______, _______,  _______,  KC_UP,   _______, KC_UP, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_LEFT,  KC_DOWN, KC_RIGHT, _______,_______,
    _______, _______, _______, _______, _______, _______, KC_DOWN, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______,     _______,      _______, _______,  _______, _______, _______
    ),


   /* Adjust (Lower + Raise)
    * ,-----------------------------------------------------------------------------------.
    * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
   [_ADJUST] = LAYOUT_planck_mit
   (
    _______, RESET,   DEBUG,   _______, _______, _______, _______, _______, COLEMAK, DVORAK, _______, _______,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY, _______, _______, _______, _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    _______, _______, _______, _______, _______,     _______,      _______, _______,  _______, _______, _______
    )

  };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QWERTY:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_QWERTY);
    }
    return false;
    break;
  case COLEMAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_COLEMAK);
    }
    return false;
    break;
  case DVORAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_DVORAK);
    }
    return false;
    break;
  case LOWER:
    if (record->event.pressed) {
      layer_on(_LOWER);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    } else {
      layer_off(_LOWER);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    }
    return false;
    break;
  case RAISE:
    if (record->event.pressed) {
      layer_on(_RAISE);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    } else {
      layer_off(_RAISE);
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
    }
    return false;
    break;
  case MOVE:
    if (record->event.pressed) {
      layer_on(_MOVE);
    } else {
      layer_off(_MOVE);
    }
    return false;
    break;
  }
  return true;
}
