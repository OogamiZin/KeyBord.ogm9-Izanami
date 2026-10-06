MCU = RP2040
BOOTLOADER = rp2040

VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
LTO_ENABLE = no

ENCODER_ENABLE = yes
VIAL_ENCODER_ENABLE = yes


# Override dynamic_keymap_reset
LDFLAGS += -Wl,-wrap=dynamic_keymap_reset