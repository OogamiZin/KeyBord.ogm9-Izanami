VIA_ENABLE = yes
ENCODER_MAP_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes


# Override dynamic_keymap_reset
LDFLAGS += -Wl,-wrap=dynamic_keymap_reset
