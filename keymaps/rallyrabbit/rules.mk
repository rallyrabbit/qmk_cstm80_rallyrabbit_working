#
# Copyright 2023 @rallyrabbit <https://github.com/rallyrabbit>
# SPDX-License-Identifier: GPL-2.0-or-later
#

# From CSTM80 rules.mk
UF2_DEVICE_TYPE_ID = 0x8bfa7750
UF2CONV_ARGS = --device-type $(UF2_DEVICE_TYPE_ID)

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = no        # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
VIRTSER_ENABLE = no         # USB Serial Driver
RAW_ENABLE = no             # Raw device
AUTO_SHIFT_ENABLE = no      # Auto Shift
CAPS_WORD_ENABLE = yes      # Caps Word
COMBO_ENABLE = no           # Allow combo keys

# Custom RGB matrix handling
RGB_MATRIX_ENABLE = yes
#RGB_MATRIX_DRIVER = custom

# Allow Unicode for RallyRabbit Keymap
UNICODE_ENABLE = yes        # Enable Unicode Characters/Strings

# Custom RGB Effects
RGB_MATRIX_CUSTOM_USER = yes

# Attempt OS Detection (automate layer selection for Windows/MacOs)
OS_DETECTION_ENABLE = yes

SRC += lib/common.c
