#include "PushButton.h"

#define BUTTON_PIN 7

PushButton button(BUTTON_PIN, true, true);

void setup() {
  Serial.begin(9600);
  button.init();
}

void loop() {
  Serial.println(button.readState());
  delay(100);
}