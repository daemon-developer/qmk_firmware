/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


#define SPLIT_USB_DETECT


#ifdef RGBLIGHT_ENABLE
    #warn "RGBLight is enabled"
    #define RGB_DI_PIN E6  // Confirm this is the correct pin for your PCB
    //#define RGBLED_NUM 54  // Set to the correct number of RGB LEDs on your Corne
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_SLEEP // turn off effects when suspended
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#endif
