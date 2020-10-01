MCU = STM32F303

# project specific files
SRC += pca9675.c matrix.c
QUANTUM_LIB_SRC += i2c_master.c

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = yes
#COMMAND_ENABLE = yes
NKRO_ENABLE = yes
ENCODER_ENABLE = no
CUSTOM_MATRIX = lite
LTO_ENABLE = no
