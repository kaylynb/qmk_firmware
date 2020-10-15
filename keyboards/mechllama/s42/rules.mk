CONSOLE_ENABLE = yes
LTO_ENABLE = yes

CUSTOM_MATRIX = lite

SRC += pca9675.c matrix.c
QUANTUM_LIB_SRC += i2c_master.c
