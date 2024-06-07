#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

#include <Arduino.h>

class PushButton {
private:
  byte pin;
  byte state;

  bool isPullUp;
  bool internalPullUpActivated;
public:
  PushButton() {}
  PushButton(byte pin, bool isPullUp, bool internalPullUpActivated);

  void init();
  byte readState();
};

#endif