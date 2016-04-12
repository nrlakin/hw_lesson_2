#include <Arduino.h>
#include "rgb_led.h"

led_state_t LEDState;

void initRGB(void) {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  setRGB(0, 0, 0);
}

void setRGB(unsigned char red, unsigned char green, unsigned char blue) {
  analogWrite(RED_LED_PIN, red);
  analogWrite(GREEN_LED_PIN, green);
  analogWrite(BLUE_LED_PIN, blue);
}

