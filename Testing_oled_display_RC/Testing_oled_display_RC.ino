//www.diyusthad.com
 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
 
#define OLED_RESET 4
Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET);
 
//Paste your bitmap here
 //------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------

const unsigned char myBitmap [] PROGMEM = {
  // 'ROCKET FLIGHT Computer (2), 128x64px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x7c, 0x7e, 0x3e, 0x64, 0x79, 0xf0, 0x01, 0xf2, 0x08, 0xf8, 0x84, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x66, 0x42, 0x60, 0x68, 0x40, 0x40, 0x01, 0x82, 0x09, 0x80, 0x84, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x66, 0xc3, 0x60, 0x78, 0x40, 0x40, 0x01, 0x82, 0x09, 0x00, 0xfc, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x7c, 0xc3, 0x60, 0x78, 0x78, 0x40, 0x01, 0xe2, 0x09, 0x18, 0xfc, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x6c, 0x42, 0x60, 0x68, 0x40, 0x40, 0x01, 0x82, 0x09, 0x88, 0x84, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x64, 0x66, 0x30, 0x6c, 0x40, 0x40, 0x01, 0x82, 0x09, 0x88, 0x84, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x66, 0x3c, 0x1e, 0x66, 0x78, 0x40, 0x01, 0x83, 0xc8, 0xf8, 0x84, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0x8c, 0x33, 0xe6, 0x37, 0xef, 0x9f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0xce, 0x73, 0x36, 0x31, 0x8c, 0x19, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xce, 0x73, 0x36, 0x31, 0x8c, 0x19, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xca, 0x53, 0xe6, 0x31, 0x8f, 0x9f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0xcb, 0xd3, 0x86, 0x21, 0x8c, 0x1b, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0x19, 0x89, 0x93, 0x02, 0x61, 0x8c, 0x19, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0x09, 0x93, 0x03, 0xc1, 0x8f, 0x99, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x80, 0x03, 0xfe, 0x00, 0x04, 0x00, 0x03, 0xfe, 0x00, 0x30, 0x00, 0x7f, 0xc0, 0x01, 0x00, 
  0x01, 0x80, 0x03, 0xfe, 0x00, 0x0c, 0x00, 0x03, 0xfe, 0x00, 0x30, 0x00, 0x7f, 0xc0, 0x01, 0x80, 
  0x01, 0xc0, 0x03, 0xfe, 0x00, 0x0e, 0x00, 0x03, 0xfe, 0x00, 0x78, 0x00, 0x7f, 0xc0, 0x03, 0x80, 
  0x03, 0xc0, 0x03, 0xfe, 0x00, 0x1e, 0x00, 0x03, 0xfe, 0x00, 0x78, 0x00, 0x7f, 0xe0, 0x03, 0xc0, 
  0x07, 0xe0, 0x07, 0x8e, 0x00, 0x3f, 0x00, 0x07, 0x8e, 0x00, 0xfc, 0x00, 0x70, 0xe0, 0x07, 0xe0, 
  0xff, 0xff, 0x06, 0x03, 0x07, 0xff, 0xf8, 0x06, 0x03, 0x1f, 0xff, 0xe0, 0xc0, 0x60, 0xff, 0xff
};
void setup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //or 0x3C
  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(0, 0, myBitmap, 128, 64, WHITE); // display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.display();
}
 
void loop() { }
