#include <avr/pgmspace.h>

#ifndef ARDUBOY_LOGO_CREATED
#define ARDUBOY_LOGO_CREATED

// arduboy_logo.png
// 88x16
PROGMEM const unsigned char arduboy_logo[] = {
0xF0, 0xF8, 0x9C, 0x8E, 0x87, 0x83, 0x87, 0x8E, 0x9C, 0xF8, 
0xF0, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 
0x07, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x03, 
0x03, 0x03, 0x03, 0x07, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0xFF, 
0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
0x00, 0x00, 0xFE, 0xFF, 0x83, 0x83, 0x83, 0x83, 0x83, 0xC7, 
0xEE, 0x7C, 0x38, 0x00, 0x00, 0xF8, 0xFC, 0x0E, 0x07, 0x03, 
0x03, 0x03, 0x07, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0x3F, 0x7F, 
0xE0, 0xC0, 0x80, 0x80, 0xC0, 0xE0, 0x7F, 0x3F, 0xFF, 0xFF, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 
0x00, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x3E, 0x77, 
0xE3, 0xC1, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xE0, 0x70, 0x3F, 0x1F, 0x00, 0x00, 0x1F, 0x3F, 0x70, 
0xE0, 0xC0, 0xC0, 0xC0, 0xE0, 0x70, 0x3F, 0x1F, 0x00, 0x00, 
0x7F, 0xFF, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xE3, 0x77, 0x3E, 
0x1C, 0x00, 0x00, 0x1F, 0x3F, 0x70, 0xE0, 0xC0, 0xC0, 0xC0, 
0xE0, 0x70, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00

};

#ifdef MIDIBOY
const uint8_t midiboy_edition_text[] PROGMEM = {
0xFF, 0xFF, 0x0E, 0x1C, 0x0E, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
0x00, 0xFF, 0xFF, 0xC3, 0xE7, 0x7E, 0x3C, 0x00, 0xFF, 0xFF,
0x00, 0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xEE, 0x00, 0x7E, 0xFF,
0xC3, 0xC3, 0xFF, 0x7E, 0x00, 0x0F, 0x1F, 0xF8, 0xF8, 0x1F,
0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
0xDB, 0xDB, 0xDB, 0xC3, 0x00, 0xFF, 0xFF, 0xC3, 0xE7, 0x7E,
0x3C, 0x00, 0xFF, 0xFF, 0x00, 0x03, 0x03, 0xFF, 0xFF, 0x03,
0x03, 0x00, 0xFF, 0xFF, 0x00, 0x7E, 0xFF, 0xC3, 0xC3, 0xFF,
0x7E, 0x00, 0xFF, 0xFF, 0x1C, 0x38, 0xFF, 0xFF
};
#endif

#endif
