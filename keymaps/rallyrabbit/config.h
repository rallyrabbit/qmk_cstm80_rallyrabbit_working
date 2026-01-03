// Copyright 2023 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9

#define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10101000
#define EXTERNAL_EEPROM_WP_PIN B7
#define EEPROM_I2C_24LC256

#define IS31FL3733_I2C_ADDRESS_1 IS31FL3733_I2C_ADDRESS_GND_GND
#define IS31FL3733_I2C_ADDRESS_2 IS31FL3733_I2C_ADDRESS_VCC_VCC
#define IS31FL3733_PWM_FREQUENCY IS31FL3733_PWM_FREQUENCY_26K7_HZ

// Set Bootmagic to use the Escape Key (Alternative to Function-F1 that does the same thing on this keymap)
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0

//
// Keys from Adam's CTRL driver
//

//#define RGB_MATRIX_CAPS_LOCK_INDEX 48

#define MODS_SHIFT      (get_mods() & MOD_MASK_SHIFT)
#define MODS_CTRL       (get_mods() & MOD_MASK_CTRL)
#define MODS_ALT        (get_mods() & MOD_MASK_ALT)
#define MODS_RSHIFT     (MOD_BIT(KC_LSFT))
#define MODS_LSHIFT     (MOD_BIT(KC_RSFT))

// For Spanish Keycode Functions
//#define USE_UNICODE_ALT_LETTERS
#define USE_WINDOWS_ALT_CODES
#define USE_MACOS_ALT_CODES

// RGB Timeout feature
#define RALLYRABBIT_FEATURE_RGB_TIMEOUT
#define MS_TO_SECONDS 1000

// RGB Timeout (1800 seconds = 30 minutes)
#define DEFAULT_RGB_TIMEOUT_SECONDS 1800

// Caps Word Enable
// Enable with Double Tap Shift or Press Both Shifts
// Invert characters when shift pressed
// Auto Turn Off after 3 Seconds
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 3000
#define CAPS_WORD_INVERT_ON_SHIFT
// NOTE: I prefer this method, but as of QMK Dec 2025, this does not work no matter what I tried, will revisit later.
//#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// RGB Matrix Animation modes. Explicitly enabled in addition to the ones in CSTM80/keyboard.json
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#define ENABLE_RGB_MATRIX_RIVERFLOW
#define ENABLE_RGB_MATRIX_STARLIGHT
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
#define ENABLE_RGB_MATRIX_STARLIGHT_SMOOTH
