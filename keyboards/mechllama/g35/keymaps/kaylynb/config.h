#pragma once

// This magic combination of defines lets the OLED timeout after changes
// but doesn't cause the OLED to display for normal button presses.
#define OLED_TIMEOUT 10000
#define OLED_DISABLE_TIMEOUT
