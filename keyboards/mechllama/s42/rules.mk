DEBOUNCE_TYPE = sym_eager_pk

CUSTOM_MATRIX = lite

SRC += pca9675.c matrix.c encoder_right.c
QUANTUM_LIB_SRC += i2c_master.c
