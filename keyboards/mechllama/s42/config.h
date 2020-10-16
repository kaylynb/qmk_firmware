/*
Copyright 2020 Kaylyn Bogle <kaylyn@kaylyn.ink>

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

#include "config_common.h"

#define VENDOR_ID       0xCEEB
#define PRODUCT_ID      0x8342
#define MANUFACTURER    MechLlama
#define PRODUCT         S42
#define DESCRIPTION     Split keyboard

#define USB_POLLING_INTERVAL_MS 1

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// Encoders aren't actually wired, as forgot to wire on prototype. oops.
// These are just placeholders to get the io expander encoders working.
#define ENCODERS_PAD_A { B0, A5, A7 }
#define ENCODERS_PAD_B { B1, A6, A8 }
