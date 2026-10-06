VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes

ENCODER_ENABLE = yes
VIAL_ENCODER_ENABLE = yes

# Override dynamic_keymap_reset
LDFLAGS += -Wl,-wrap=dynamic_keymap_reset
