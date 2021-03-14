// Gerekli Kütüphane Link https://github.com/adafruit/Adafruit_NeoPixel

#include "Adafruit_NeoPixel.h"
#define PIN            13
#define NUMPIXELS      8

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 25; 

void setup() 
{
pixels.begin();
pixels.setBrightness(50); 
}

void loop() {

  for(int i=0;i<NUMPIXELS;i++)
  {
   pixels.setPixelColor(i, pixels.Color(255,0,0)); 
   pixels.show(); 
   delay(delayval); 
  }

  for(int i=0;i<NUMPIXELS;i++)
  {
   pixels.setPixelColor(i, pixels.Color(0,255,0)); 
   pixels.show(); 
   delay(delayval); 
  }
  for(int i=0;i<NUMPIXELS;i++)
  {
   pixels.setPixelColor(i, pixels.Color(0,0,255)); 
   pixels.show(); 
   delay(delayval); 
  }

   for(int i=0;i<NUMPIXELS;i++)
  {
    pixels.setPixelColor(i, pixels.Color(255,255,0)); 
    pixels.show(); 
    delay(delayval); 
  }
     for(int i=0;i<NUMPIXELS;i++)
  {
  pixels.setPixelColor(i, pixels.Color(255,0,255)); 
  pixels.show(); 
  delay(delayval); 
  }
   for(int i=0;i<NUMPIXELS;i++)
  {
  pixels.setPixelColor(i, pixels.Color(0,255,255)); 
  pixels.show(); 
  delay(delayval); 
  }
   for(int i=0;i<NUMPIXELS;i++)
  {
    pixels.setPixelColor(i, pixels.Color(255,255,255)); 
    pixels.show(); 
    delay(delayval); 
  }   
  for(int i=0;i<NUMPIXELS;i++)
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0)); 
    pixels.show(); 
    delay(delayval); 
  }    
}
