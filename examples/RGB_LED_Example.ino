/*
  Name:
    RGB_LED_Example
  Discription:
    This code uses the RGB_LED library to make the a RGB-LED cycle colors.
*/

#include <RGB_LED.h>

RGB_LED LED;

void setup(){
  LED.setup(6, 5, 3);
  LED.Mono(255);
  delay(1000);
  LED.Mono(0);
  delay(1000);
};

void loop(){
  //with fade
  LED.fadeRGB(255, 0, 0, 1000);
  LED.fadeRGB(255, 255, 0, 1000);
  LED.fadeRGB(0, 255, 0, 1000);
  LED.fadeRGB(0, 255, 255, 1000);
  LED.fadeRGB(0, 0, 255, 1000);
  LED.fadeRGB(0, 0, 0, 1000);
  delay(1000);
  LED.fadeMono(255, 1000);
  delay(1000);
  LED.fadeMono(0, 1000);
  //without fade
  LED.RGB(255, 0, 0);
  delay(1000);
  LED.RGB(255, 255, 0);
  delay(1000);
  LED.RGB(0, 255, 0);
  delay(1000);
  LED.RGB(0, 255, 255);
  delay(1000);
  LED.RGB(0, 0, 255);
  delay(1000);
  LED.RGB(255, 0, 250);
  delay(1000);
  LED.Mono(255);
  delay(1000);
  LED.Mono(0);
  delay(1000);
};
