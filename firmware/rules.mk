#oled
OLED_ENABLE = yes
OLED_TRANSPORT = i2c
OLED_DRIVER = ssd1306

#rgb
RGB_MATRIX_DRIVER = is31fl3741
COMMON_VPATH += $(DRIVER_PATH)/led/issi
SRC += is31fl3741-mono.c # For single-color
SRC += is31fl3741.c # For RGB
I2C_DRIVER_REQUIRED = yes

# required for rp2040
LTO_ENABLE = yes

# encoder
ENCODER_ENABLE = yes
