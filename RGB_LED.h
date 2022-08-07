#ifndef RGB_LED_H
#define RGB_LED_H

#include <Arduino.h>

class RGB_LED{
  private:
  int PIN_LED_RED, PIN_LED_GREEN, PIN_LED_BLUE;
  int LED_RED, LED_GREEN, LED_BLUE;

  public:
  void setup(int RED, int GREEN, int BLUE);

  void Mono(int volume);

  void RGB(int RED, int GREEN, int BLUE);

  void fadeMono(int volume, int time);

  void fadeRGB(int RED, int GREEN, int BLUE, int time);
};

#endif