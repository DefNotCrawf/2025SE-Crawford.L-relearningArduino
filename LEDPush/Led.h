#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led{
private: // setting private data
  byte pin;
public: // setting public data (so that it is accessible outside of the class)
  Led() {} // do not use
  Led(byte pin);

  // methods
  void init();
  void init(byte defaultState);

  void on();
  void off();
};

#endif