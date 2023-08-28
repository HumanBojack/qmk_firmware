/* Copyright 2020 null-ll
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

#include "basketweave_s.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_default(  /* base */
        /*esc       `        1        2        3        4        5        6        7        8        9        0        -        =      capslk    mute   */
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_CAPS, KC_MUTE,
        /*nth     tab        Q        W        F        P        B        J        L        U        Y        ;        [        ]        \      nth     */
        KC_NO,   KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
        /*nth     bspc       A        R        S        T        G        M        N        E        I        O        '      enter            toggl    */
        KC_NO,   KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, KC_ENT,           TG(2),
        /*        shift      X        C        D        V        Z        `        K        H        ,        .        /      shift     up      nth     */
                 KC_LSFT, KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,    KC_GRV,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_NO,
        /*        ctrl      win              space              fn               space              alt      ctrl              left     down     right  */
                 KC_LCTL, KC_LGUI,          KC_SPC,           MO(1),            KC_SPC,           KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    [1] = LAYOUT_default(  /* fn */
        /*trns     trns      F1       F2        F3      F4       F5       F6       F7       F8       F9       F10      F11      F12     trns     trns   */
        KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
        /*trns     trns     trns     trns     trns     flash    trns     trns    insr      trns     trns    PRSCR     trns     trns     trns     trns */
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        /*play     trns     trns     trns     trns     trns     trns     trns     trns     trns     trns     trns     insr     trns              trns   */
        KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS,          KC_TRNS,
        /*        shift     trns     trns     trns     trns     trns     trns     trns     mute     trns     trns     trns    shift     pgup      trns  */
                 KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT, KC_PGUP, KC_TRNS,
        /*        ctrl      alt              trns               trns              trns              alt      ctrl              home    pgdown    end    */
                 KC_LCTL, KC_LALT,          KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_RALT, KC_RCTL,          KC_HOME, KC_PGDN, KC_END
    ),

    [2] = LAYOUT_default(  /* qwerty */
        /*esc       `        1        2        3        4        5        6        7        8        9        0        -        =      capslk    mute   */
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_CAPS, KC_MUTE,
        /*nth     tab        Q        W        E        R        T        Y        U        I        O        P        [        ]        \      nth     */
        KC_NO,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
        /*nth     bspc       A        S        D        F        G        H        J        K        L        ;        '      enter             trns    */
        KC_NO,   KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_TRNS,
        /*        shift      Z        X        C        V        B        `        N        M        ,        .        /      shift     up      nth     */
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_NO,
        /*        ctrl      win              space              fn               space              alt      ctrl              left     down     right  */
                 KC_LCTL, KC_LGUI,          KC_SPC,           MO(1),            KC_SPC,           KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RIGHT
    )
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _RIGHT) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return true;
}
