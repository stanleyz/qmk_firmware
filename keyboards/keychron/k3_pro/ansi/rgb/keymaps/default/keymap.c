/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_84(
     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNAP,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_BASE] = LAYOUT_ansi_84(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

const key_override_t alt_h_left = ko_make_basic(MOD_MASK_ALT, KC_H, KC_LEFT);
const key_override_t alt_l_right = ko_make_basic(MOD_MASK_ALT, KC_L, KC_RIGHT);
const key_override_t alt_j_down = ko_make_basic(MOD_MASK_ALT, KC_J, KC_DOWN);
const key_override_t alt_k_up = ko_make_basic(MOD_MASK_ALT, KC_K, KC_UP);
const key_override_t alt_i_pageup = ko_make_basic(MOD_MASK_ALT, KC_I, KC_PAGE_UP);
const key_override_t alt_o_pagedown = ko_make_basic(MOD_MASK_ALT, KC_O, KC_PAGE_DOWN);
const key_override_t alt_u_home = ko_make_basic(MOD_MASK_ALT, KC_U, KC_HOME);
const key_override_t alt_p_end = ko_make_basic(MOD_MASK_ALT, KC_P, KC_END);
const key_override_t rctrl_a_home = ko_make_basic(MOD_BIT(KC_RCTL), KC_A, KC_HOME);
const key_override_t rctrl_e_end = ko_make_basic(MOD_BIT(KC_RCTL), KC_E, KC_END);
//const key_override_t rctrl_f_right = ko_make_basic(MOD_BIT(KC_RCTL), KC_F, KC_RIGHT);
//const key_override_t rctrl_b_left = ko_make_basic(MOD_BIT(KC_RCTL), KC_B, KC_LEFT);
//const key_override_t rctrl_n_next = ko_make_basic(MOD_BIT(KC_RCTL), KC_N, KC_DOWN);
//const key_override_t rctrl_p_previous = ko_make_basic(MOD_BIT(KC_RCTL), KC_P, KC_UP);
//upon testing, 4 is the Windows layer, 2 is the MAC.
//I don't see how to switch the other layer for each OS although following the doc.
const key_override_t lctrl_q_alt_f4 = ko_make_with_layers(MOD_BIT(KC_LCTL), KC_Q, LALT(KC_F4), 4);
const key_override_t lctrl_right_bracket_cycle_forward = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_RBRC, RCTL(KC_PAGE_DOWN), 4);
const key_override_t lctrl_left_bracket_cycle_back = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_LBRC, RCTL(KC_PAGE_UP), 4);
// Move around
const key_override_t lctrl_lshift_left = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_LEFT, LWIN(KC_LEFT), 4);
const key_override_t lctrl_lshift_right = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_RIGHT, LWIN(KC_RIGHT), 4);
const key_override_t lctrl_lshift_up = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_UP, LWIN(KC_UP), 4);
const key_override_t lctrl_lshift_down = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_DOWN, LWIN(KC_DOWN), 4);
const key_override_t lctrl_lshift_enter = ko_make_with_layers(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT), KC_ENTER, LWIN(KC_UP), 4);

const key_override_t lctrl_space_ctrl_esc = ko_make_with_layers(MOD_BIT(KC_LCTL), KC_SPACE, RCTL(KC_ESC), 4);

const key_override_t **key_overrides = (const key_override_t *[]) {
    &alt_h_left,
    &alt_l_right,
    &alt_j_down,
    &alt_k_up,
    &alt_i_pageup,
    &alt_o_pagedown,
    &alt_u_home,
    &alt_p_end,
    &rctrl_a_home,
    &rctrl_e_end,
 // This has been replaced by the same functionalities in process_record_user
 //   &rctrl_f_right,
 //   &rctrl_b_left,
 //   &rctrl_n_next,
 //   &rctrl_p_previous,
    &lctrl_q_alt_f4,
    &lctrl_right_bracket_cycle_forward,
    &lctrl_left_bracket_cycle_back,
    &lctrl_lshift_left,
    &lctrl_lshift_right,
    &lctrl_lshift_up,
    &lctrl_lshift_down,
    &lctrl_lshift_enter,
    &lctrl_space_ctrl_esc,
    NULL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // bool to track whether alt tab registered
    static bool alttab_registered;
    static bool ctrl_uw_mode = false;
    switch (keycode) {

    case KC_TAB:
        // Detect the activation of only left Ctrl
        if (get_mods() == MOD_BIT(KC_LCTL)) {
            if (record->event.pressed) { // if TAB is pressed
                // Press down left alt
                add_mods(MOD_BIT(KC_LALT));
                // temporary release left ctrl
                del_mods(MOD_BIT(KC_LCTL));
                // trigger TAB
                register_code(KC_TAB);
                alttab_registered = true;
                // Add right ctrl back to trigger futher TAB swtich
                add_mods(MOD_BIT(KC_LCTL));
            } else { // if TAB is releajsed
                unregister_code(KC_TAB);
            }
            // Do not let QMK process the keycode further
            return false;
        }
        // Else, let QMK process the KC_ESC keycode as usual
        return true;

    case KC_LCTL:
        if (alttab_registered) {
            if (! record->event.pressed) { // Let QMK process the event
                del_mods(MOD_BIT(KC_LALT));
                alttab_registered = false;
            }
        }
        return true;

    case KC_B:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(KC_LEFT);
                return false;
            }
        }
        return true;

    case KC_F:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(KC_RIGHT);
                return false;
            }
        }
        return true;

    case KC_K:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(LSFT(KC_END));
                tap_code16(LCTL(KC_X));
                return false;
            }
        }
        return true;

    case KC_N:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                del_mods(MOD_BIT(KC_RCTL));
                tap_code16(KC_DOWN);
                add_mods(MOD_BIT(KC_RCTL));
                return false;
            }
        }
        return true;

    case KC_P:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                del_mods(MOD_BIT(KC_RCTL));
                tap_code16(KC_UP);
                add_mods(MOD_BIT(KC_RCTL));
                return false;
            }
        }
        return true;

    case KC_T:
        // whther left alt if pressed
        if (record->event.pressed) {
            if(get_mods() == MOD_BIT(KC_RALT)) {
                ctrl_uw_mode = !ctrl_uw_mode;
                return false;
            }
        }
        return true;

    case KC_U:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(LSFT(KC_HOME));
                tap_code16(LCTL(KC_X));
                return false;
            }
        }
        return true;

    case KC_W:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(LCTL(KC_BSPC));
                return false;
            }
        }
        return true;

    case KC_Y:
        if(record->event.pressed) {
            if (get_mods() == MOD_BIT(KC_RCTL) && ctrl_uw_mode) {
                tap_code16(LCTL(KC_V));
                return false;
            }
        }
        return true;

    }

    return true;
};
