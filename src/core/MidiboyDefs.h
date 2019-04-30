#ifndef MIDIBOY_DEFS_H
#define MIDIBOY_DEFS_H

#ifndef ArduboyCore_h
#error Don't include MidiboyDefs.h directly! Include Arduboy2Core.h instead!
#endif

#ifdef MIDIBOY

#undef ARDUBOY_10
#undef AB_DEVKIT

// See core.h for value meanings.

// First undef all of the values, so we can redefine them again without compiler warnings.

#undef CS
#undef DC
#undef RST

#undef RED_LED
#undef GREEN_LED
#undef BLUE_LED
#undef TX_LED
#undef RX_LED

#undef PIN_LEFT_BUTTON
#undef PIN_RIGHT_BUTTON
#undef PIN_UP_BUTTON
#undef PIN_DOWN_BUTTON
#undef PIN_A_BUTTON
#undef PIN_B_BUTTON

#undef LEFT_BUTTON
#undef RIGHT_BUTTON
#undef UP_BUTTON
#undef DOWN_BUTTON
#undef A_BUTTON
#undef B_BUTTON

#undef PIN_SPEAKER_1
#undef PIN_SPEAKER_2

#undef PIN_SPEAKER_1_PORT
#undef PIN_SPEAKER_2_PORT

#undef PIN_SPEAKER_1_BITMASK
#undef PIN_SPEAKER_2_BITMASK

#undef OLED_PIXELS_INVERTED
#undef OLED_PIXELS_NORMAL

#undef OLED_ALL_PIXELS_ON
#undef OLED_PIXELS_FROM_RAM

#undef OLED_VERTICAL_FLIPPED
#undef OLED_VERTICAL_NORMAL

#undef COLUMN_ADDRESS_END
#undef PAGE_ADDRESS_END

// Now define to the correct values for Midiboy.

#define CS PIN_SPI_SS
#define DC PIN_LCD_DC
#define RST PIN_LCD_RESET

//#define RED_LED -1
//#define GREEN_LED -1
//#define BLUE_LED -1
//#define TX_LED -1
//#define RX_LED -1

#define PIN_LEFT_BUTTON  PIN_BTN_LEFT
#define PIN_RIGHT_BUTTON PIN_BTN_RIGHT
#define PIN_UP_BUTTON    PIN_BTN_UP
#define PIN_DOWN_BUTTON  PIN_BTN_DOWN
#define PIN_A_BUTTON     PIN_BTN_A
#define PIN_B_BUTTON     PIN_BTN_B

#define LEFT_BUTTON  _BV(digitalPinToBit(PIN_BTN_LEFT))
#define RIGHT_BUTTON _BV(digitalPinToBit(PIN_BTN_RIGHT))
#define UP_BUTTON    _BV(digitalPinToBit(PIN_BTN_UP))
#define DOWN_BUTTON  _BV(digitalPinToBit(PIN_BTN_DOWN))
#define A_BUTTON     _BV(digitalPinToBit(PIN_BTN_A))
#define B_BUTTON     _BV(digitalPinToBit(PIN_BTN_B))

#define PIN_SPEAKER_1 PIN_SPK_B
#define PIN_SPEAKER_2 PIN_SPK_A

#define PIN_SPEAKER_1_PORT portOutputRegister(PIN_SPEAKER_1)
#define PIN_SPEAKER_2_PORT portOutputRegister(PIN_SPEAKER_2)

#define PIN_SPEAKER_1_BITMASK _BV(digitalPinToBit(PIN_SPEAKER_1))
#define PIN_SPEAKER_2_BITMASK _BV(digitalPinToBit(PIN_SPEAKER_2))

#define OLED_PIXELS_INVERTED 0xA7
#define OLED_PIXELS_NORMAL 0xA6

#define OLED_ALL_PIXELS_ON 0xA5
#define OLED_PIXELS_FROM_RAM 0xA4

#define OLED_VERTICAL_FLIPPED 0xC8
#define OLED_VERTICAL_NORMAL 0xC0

#define OLED_HORIZ_FLIPPED 0xA0
#define OLED_HORIZ_NORMAL 0xA1

#define COLUMN_ADDRESS_END (WIDTH - 1) & 127
#define PAGE_ADDRESS_END ((HEIGHT/8)-1) & 7

#endif // MIDIBOY

#endif // MIDIBOY_DEFS_H
