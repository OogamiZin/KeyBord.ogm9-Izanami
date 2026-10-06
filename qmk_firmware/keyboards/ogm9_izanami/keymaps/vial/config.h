#pragma once

#define VIAL_KEYBOARD_UID {0xfd, 0x16, 0xca, 0x2d, 0x73, 0x3f, 0xcb, 0xea}
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)

/* ---- ロータリーエンコーダー設定 ---- */
#define ENCODERS_PAD_A { GP27 }
#define ENCODERS_PAD_B { GP28 }
#define ENCODER_RESOLUTION 4

/* ---- ダイレクトピン（エンコーダー押し込み用） ---- */
#define DIRECT_PINS { \
    { GP29 } \
}
