#define boardLED 13
#include "Led.h"

static unsigned int time = 7;
static unsigned int time2 = 1000 - time;

Led led(boardLED); // <class> <object>([parameters/data])

void setup(){
  Serial.begin(9600);
  Serial.println();
  Serial.print(time);
  Serial.print(",");
  Serial.println(time2);
  led.init();
}

void loop(){
  led.on();
  delay(time);
  led.off();
  delay(time2);
}

// void setup(){
//   Serial.begin(9600);
//   Serial.println("");
//   Serial.println("SM Working @ 9600 baud")
// }

// void loop(){

// }