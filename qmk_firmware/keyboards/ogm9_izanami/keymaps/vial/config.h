#pragma once

#define VIAL_KEYBOARD_UID {0xfd, 0x16, 0xca, 0x2d, 0x73, 0x3f, 0xcb, 0xea}
#define NUM_ENCODERS 1
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)

#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define VIAL_KEY_OVERRIDE_ENTRIES 4

// Dynamic Macro のバッファサイズ（初期値 128 の5倍）
// マクロ1・2で共有。キーを押す・離すでそれぞれ1件消費する
#define DYNAMIC_MACRO_SIZE 640
