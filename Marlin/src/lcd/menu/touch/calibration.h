/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../../../inc/MarlinConfigPre.h"

#if ENABLED(TOUCH_BUTTONS)

// menu_touchscreen.cpp
void menu_touchscreen();
void enter_touch_calibrate();

// main.cpp
void do_calibration();
void loop_calibration();

class TouchCalibration {
protected:
  uint8_t calibration_state;
  void exit_calibration();
public:
  void init_calibration(const uint8_t init_state);
};

extern TouchCalibration calibration;

#endif // TOUCH_BUTTONS
