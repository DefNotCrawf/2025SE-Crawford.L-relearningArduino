#define boardLED 13

#include "Led.h"

Led led(boardLED); // <class> <object>([parameters/data])

void setup(){
  Serial.begin(9600);
  led.init();
}

void loop(){
  led.on();
  delay(500);
  led.off();
  delay(500);
}