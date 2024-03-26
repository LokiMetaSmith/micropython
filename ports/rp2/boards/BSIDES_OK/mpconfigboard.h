//based partially on https://www.adafruit.com/product/4884
//
//#pragma once

#define MICROPY_HW_BOARD_NAME          "BSIDES OK RP2040"
#define MICROPY_HW_FLASH_STORAGE_BYTES (1 * 1024 * 1024)

#define MICROPY_HW_USB_VID (0x239A)
#define MICROPY_HW_USB_PID (0x80F2)


///#define MICROPY_HW_USB_MSC (1)

//#define MICROPY_HW_USB_DESC_STR_MAX (40)
//#define MICROPY_HW_USB_MANUFACTURER_STRING "Happy Fun Time Co"/
//#define MICROPY_HW_USB_PRODUCT_FS_STRING MICROPY_HW_BOARD_NAME " MicroPython"

//#define MICROPY_BANNER_MACHINE MICROPY_HW_BOARD_NAME

//#define MICROPY_HW_I2C_NO_DEFAULT_PINS (1)
//#define MICROPY_HW_SPI_NO_DEFAULT_PINS (1)
//#define MICROPY_HW_UART_NO_DEFAULT_PINS (1)

// NeoPixel GPIO16, power not toggleable

// Red user LED GPIO13
