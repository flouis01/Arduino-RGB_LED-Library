/*
  Name:
    RGB_LED_Example
  Discription:
    This code uses the RGB_LED library to make the RGB-LED cycle colors.
  Functions:
    RGB_LED [name]; creates a new RGB_LED object with the specified name. 
      .setup(int RED, int Green, int BLUE) sets the to the colors corresponding pins.
      .mono(int volume) sets the LED to a grayscale value.
      .fadeMono(int volume, int time) makes the LED fade to a grayscale value over the specified time. 
      .RGB(int RED, int Green, int BLUE, int time) sets the LED to a RGB value.
      .fadeRGB(int RED, int Green, int BLUE, int time) makes the LED fade to a RGB value over the specified time. 
*/

#include <RGB_LED.h>

RGB_LED LED; 

void setup(){
  LED.setup(6, 5, 3); 
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
  LED.mono(255);
  delay(1000);
  LED.mono(0);
  delay(1000);
};
