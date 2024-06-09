SRC += vince8x.c
SRC += $(USER_PATH)/definitions/keycodes.c
SRC += $(USER_PATH)/features/dynamic_macro.c
SRC += $(USER_PATH)/features/achordion.c
SRC += $(USER_PATH)/features/os_toggle.c
SRC += $(USER_PATH)/features/tapdance.c
SRC += $(USER_PATH)/features/macros.c
SRC += $(USER_PATH)/features/custom_shift_keys.c
SRC += $(USER_PATH)/features/orbital_mouse.c
SRC += $(USER_PATH)/features/select_word.c
SRC += $(USER_PATH)/features/sentence_case.c
SRC += $(USER_PATH)/features/num_word.c
SRC += $(USER_PATH)/features/tmux.c
SRC += $(USER_PATH)/features/nvim.c

MOUSE_ENABLE = yes
# UNICODEMAP_ENABLE = yes
COMBO_ENABLE = yes
OS_DETECTION_ENABLE = yes
REPEAT_KEY_ENABLE = yes
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes

INTROSPECTION_KEYMAP_C = ${USER_PATH}/features/combos.c

include $(USER_PATH)/definitions/rules.mk
