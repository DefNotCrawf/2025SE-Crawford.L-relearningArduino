#include "PushButton.h"

PushButton::PushButton(
  byte pin,
  bool isPullUp,
  bool internalPullUpActivated) {
  this->pin = pin;
  this->isPullUp = isPullUp;
  this->internalPullUpActivated = internalPullUpActivated;
}

void PushButton::init() {
  if (isPullUp && internalPullUpActivated) {
    pinMode(pin, INPUT_PULLUP);
  } else {
    pinMode(pin, INPUT);
  }
  readState();
}
byte PushButton::readState() {
  state = digitalRead(pin);
  return state;
}