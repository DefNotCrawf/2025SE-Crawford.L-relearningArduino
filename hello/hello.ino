static unsigned long time = 16;

#define boardLED 13

#include "Led.h"

Led led(boardLED); // <class> <object>([parameters/data])

void setup(){
  led.init();
}

void loop(){
  led.on();
  delay(time);
  led.off();
  delay(time);
}