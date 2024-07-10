#ifndef Led_H
#define Led_H

#include <Arduino.h>

class Led
{
private: // setting private data
  byte pin;
  byte state;

public:    // setting public data (so that it is accessible outside of the class)
  Led() {} // do not use (default constructor (needed))
  Led(byte pin);

  // methods
  void init();
  void init(byte defaultState);

  void on();
  void off();

  // power on/off
  void toggle();

  bool isPoweredOn();
};

#endif