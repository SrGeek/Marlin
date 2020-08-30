/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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

// R25 = 20kΩ +-3% Rated Zero REsistance B Value 25/85 4282K +-2% -50-300C Temperature  203NT-4 -R025H42G
const short temptable_68[][2] PROGMEM = {

{ OV(   4.35 ),  300 },
{ OV(   5.67 ),  280 },
{ OV(   7.57 ),  260 },
{ OV(  10.32 ),  240 },
{ OV(  14.42 ),  220 },
{ OV(  20.70 ),  200 },
{ OV(  30.61 ),  180 },
{ OV(  46.68 ),  160 },
{ OV(  73.44 ),  140 },
{ OV( 118.91 ),  120 },
{ OV( 195.92 ),  100 },
{ OV( 283.91 ),   85 },
{ OV( 320.17 ),   80 },
{ OV( 497.44 ),   60 },
{ OV( 598.58 ),   50 },
{ OV( 698.81 ),   40 },
{ OV( 829.15 ),   25 },
{ OV( 921.67 ),   10 },
{ OV( 961.80 ),    0 },
{ OV( 988.08 ),  -10 },
{ OV(1013.63 ),  -30 },
{ OV(1021.51 ),  -50 },
};