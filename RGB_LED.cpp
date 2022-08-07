#include "RGB_LED.h"

int PIN_LED_RED, PIN_LED_GREEN, PIN_LED_BLUE;
int LED_RED = 0, LED_GREEN = 0, LED_BLUE = 0;

void RGB_LED::setup(int RED, int GREEN, int BLUE) {
  PIN_LED_RED = RED;
  PIN_LED_GREEN = GREEN;
  PIN_LED_BLUE = BLUE;
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
};

void RGB_LED::Mono(int volume) {
  LED_RED = volume;
  LED_GREEN = volume;
  LED_BLUE = volume;
  analogWrite(PIN_LED_RED, volume);
  analogWrite(PIN_LED_GREEN, volume);
  analogWrite(PIN_LED_BLUE, volume);
};

void RGB_LED::RGB(int RED, int GREEN, int BLUE) {
  LED_RED = RED;
  LED_GREEN = GREEN;
  LED_BLUE = BLUE;
  analogWrite(PIN_LED_RED, RED);
  analogWrite(PIN_LED_GREEN, GREEN);
  analogWrite(PIN_LED_BLUE, BLUE);
};

void RGB_LED::fadeMono(int volume, int time) {
  double mod_RED = (double)(volume - LED_RED) / time;
  double mod_GREEN = (double)(volume - LED_GREEN) / time;
  double mod_BLUE = (double)(volume - LED_BLUE) / time;
  long startTime = millis();
  while ((int)(millis() - startTime) < time) {
    analogWrite(PIN_LED_RED, (int)((millis() - startTime) * mod_RED) + LED_RED);
    analogWrite(PIN_LED_GREEN, (int)((millis() - startTime) * mod_GREEN) + LED_GREEN);
    analogWrite(PIN_LED_BLUE, (int)((millis() - startTime) * mod_BLUE) + LED_BLUE);
    delay(25);
  }
  LED_RED = volume;
  LED_GREEN = volume;
  LED_BLUE = volume;
  analogWrite(PIN_LED_RED, volume);
  analogWrite(PIN_LED_GREEN, volume);
  analogWrite(PIN_LED_BLUE, volume);
};

void RGB_LED::fadeRGB(int RED, int GREEN, int BLUE, int time) {
  double mod_RED = (double)(RED - LED_RED) / time;
  double mod_GREEN = (double)(GREEN - LED_GREEN) / time;
  double mod_BLUE = (double)(BLUE - LED_BLUE) / time;
  long startTime = millis();
  while ((int)(millis() - startTime) < time) {
    analogWrite(PIN_LED_RED, (int)((millis() - startTime) * mod_RED) + LED_RED);
    analogWrite(PIN_LED_GREEN, (int)((millis() - startTime) * mod_GREEN) + LED_GREEN);
    analogWrite(PIN_LED_BLUE, (int)((millis() - startTime) * mod_BLUE) + LED_BLUE);
    delay(25);
  }
  LED_RED = RED;
  LED_GREEN = GREEN;
  LED_BLUE = BLUE;
  analogWrite(PIN_LED_RED, RED);
  analogWrite(PIN_LED_GREEN, GREEN);
  analogWrite(PIN_LED_BLUE, BLUE);
};