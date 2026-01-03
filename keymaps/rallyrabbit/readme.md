# DROP CSTM80 Keyboard RallyRabbit Driver

This is the keymap and other items tied to the RallyRabbit customizations for the Massdrop CSTM80 TKL Keyboard (Similar to the RallyRabbit Driver for Drop CTRL)

## Main Features

I really like the Drop CTRL keyboard but recently picked up a CSTM80 and wanted my same driver and layout used there.  Either way, I really dislike the Drop CTRL and CSTM80 stock drivers and feel like Drop really strayed from the benefits of QMK.  My goal was to take the Drop CTRL driver, port it to Drop CSTM80 and make it much more standard to QMK.  My features include.

Features that are complete:
* Standard Windows and Mac OS X QWERTY keyboard layouts
* Added most of the standard QMK RGB Matrix Patterns.
* Added Rainbow Diaganol which is a small tweak of Cool Diaganol of HorrorTroll
* Added Flower Blooming of HorrorTroll
* Added Deep River (unchangeable blue with green saturation that moves)
* Added Deep River Reverse (unchangeable green with blue saturation that moves)
* Added Hella Rally Rabbit Theme (unchangeable blue with green saturation that moves)
* Added Hella Rally Rabbit Reverse (unchangeable green with blue saturation that moves)
* Added 30 minutes keybaord timeout inactivity to diable the RGB matrix
* Added a Windows Keyboard Layout (default) with bottom row as CTRL WIN ALT SPACE ALT FN MENU CTRL
* Added hotkey FN-W to set Windows keyboard mode (layer)
* Added hotkey FN-M to set MacOS keyboard mode (layer)
* Added attempted host os detection on startup (default Windows) to automatically set layer
* Added a Mac OS X Keybaord Layout with bottom row as CTRL OPT CMD SPACE CMD FN OPT CTRL
* Added hotkey FN-M to set windows keybaord mode
* Added FN-Z to toggle RGB Modes
* Added FN-X to toggle RGB timeout mode
* Added funciton key layout that cancels RGB Matrix and loads keymap (see function key layout)
* Added Keypad as FN-0 to FN-9 with keypad -/ and +* keys
* Added Audio controls and sound mute to FN hotkeys
* Added Sound volume to FN-Page Up and FN-Page Down
* Added Boot Loader hotkey as FN-F1
* Added function-pause in both WINDOWS and MACOS to be quick lock
* Added Spanish accent letters to FN-A, FN-E, FN-I, FN-O, FN-U (Á, É, Í, Ó, Ú)
* Added Spanish N with Tilda to FN-N
* Added British/Nordic AE to FN-S (Æ)
* Special characters work as Windows unicode, Windows Alt-Code, and Mac Special Sequence output
* Full RGB controls (see layout)
* Num Lock on the FN-` key
* Caps Word with Shift Double Tap, or Left/Right Shift at same time. Times out in 5 Seconds.
* Re-do of digital raindrops to be more like the Matrix.
* Feature flagged the RGB Timeout
* Added persistent "white" RGB color when Caps Lock or Scroll Lock is pressed

## Things Incomplete

Items that I still want to add to the driver:
* Improve Cylon RGB Effect
  
## RGB Matrix Effects Included

Standard QMK RGB Matrix Effects Included

* ALPHAS_MODS - Static dual hue, speed is hue for secondary hue
* BREATHING
* BAND PINWHEEL (Sat and Val)
* BAND_SPIRAL_SAT - Single hue spinning spiral fades saturation
* BAND_SPIRAL_VAL - Single hue spinning spiral fades brightness
* BAND_SAT
* BAND_VAL - Single hue band fading brightness scrolling left to right
* CYCLE_ALL - Full keyboard solid hue cycling through full gradient
* CYCLE_LEFT_RIGHT - Full gradient scrolling left to right
* CYCLE_OUT_IN
* CYCLE_OUT_IN_DUAL
* CYCLE_PINWHEEL
* CYCLE_SPIRAL
* CYLCLE_UP_DOWN
* DUAL_BEACON
* GRADIENT_LEFT_RIGHT - Static gradient left to right, speed controls how much gradient changes
* GRADIENT_UP_DOWN - Static gradient top to bottom, speed controls how much gradient changes
* HUE_BREATHING
* HUE_PENDULUM
* HUE_WAVE
* JELLYBEAN_RAINDROPS - Randomly changes a single key's hue and saturation
* PIXEL_FLOW - Pulsing RGB flow along LED wiring with random hues
* PIXEL_FRACTAL - Single hue fractal filled keys pulsing horizontally out to edges
* PIXEL_RAIN - Randomly light keys with random hues
* RAINBOW_BEACON
* RAINBOW_MOVING_CHEVRON
* RAINBOW_PINWHEELS
* RAINDROPS - Randomly changes a single key's hue
* SOLID_REACTIVE
* SOLID_REACTIVE_CROSS
* SOLID_REACTIVE_NEXUS
* SOLID_REACTIVE_SIMPLE
* SOLID_REACTIVE_WIDE
* SOLID_REACTIVE_MULTIWIDE
* SOLID_REACTIVE_MULTICROSS
* SOLID_REACTIVE_MULTINEXUS
* SOLID_SPLASH - Hue & value pulse away from a single key hit then fades value out
* SOLID_MULTISPLASH - Full gradient & value pulse away from multiple key hits then fades value out
* MULTISPLASH - Full gradient & value pulse away from a single key hit then fades value out
* SPLASH
* HEATMAP

### Special to Rally Rabbit Driver

Special RGB Effects added to my driver that are not normal parts of QMK.

* RAINBOW_DIAGONAL - Small tweak of Cool Diaganol of HorrorTroll
* BAND_SAT_DEEP_RIVER - Deep River Lacrosse Blue with Neon Green Field Scroll
* BAND_SAT_DEEP_RIVER_REVERSE - Deep River Lacrosse Neon Green with Blue Field Scroll
* RALLYRABBIT_CYLON - Cylon effect on first three rows inspired by Battlestar Galactica 
* BAND_SAT_RALLYRABBIT_HELLA - Hella Rally Rabbit Blue with Yellow Field Scroll
* BAND_SAT_RALLYRABBIT_HELLA_REVERSE - Hella Rally Rabbit Yellow with Blue Field Scroll
* RALLY_RABBIT_MATRIX_RAIDROPS - Essentially the Matrix with more speed, control and color

## To Use

Follow the QMK directions isntalling QMK MSYS.
* Download the QMK firmware (this repository)
* config.h in the current directory is used to add to the drop/cstm80/keymap/rallyrabbit/config.h or remove things added in that file as it is included after that file.
* rules.mk is used in addition to the massdrop/ctrl/rules.mk and is used to add to or turn off items in the standard rules.mk file
* Build with "qmk compile -kb drop/cstm80 -km rallyrabbit"

## Layers

### Windows Typing Layer

![Image](https://i.imgur.com/RS2nLDM.png)

### Mac OS X Typing Layer

![Image](https://i.imgur.com/SNfU9fI.png)

### "Function" Layer

![Image](https://i.imgur.com/KFqwnoy.png)


