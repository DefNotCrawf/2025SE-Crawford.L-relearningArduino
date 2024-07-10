#ifndef PushButton_H
#define PushButton_H

#include <Arduino.h>

class PushButton {
private:
  byte pin;
  byte state;
  bool isPullUp;
  bool internalPullUpActivated;

  unsigned long lastTimeStateChanged;
  unsigned long debounceDelay;

  void readState();

public:
  PushButton() {}
  PushButton(byte pin, bool isPullUp, bool internalPullUpActivated);

  void init();

  bool isPressed();
};

#endif