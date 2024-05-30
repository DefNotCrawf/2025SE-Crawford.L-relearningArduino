#include <Arduino.h>
#define boardLED 13

class Led{
  // setting data
  private: // setting private data
    byte pin;
    public: // setting public data (so that it is accessible outside of the class)
    Led() {} // do not use

    Led(byte pin){
      this->pin = pin;
    }

    // methods
    void init(){
      pinMode(pin, OUTPUT);
    }

  void init(byte defaultState){
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }

  void on(){
    digitalWrite(pin, HIGH);
  }

  void off(){
    digitalWrite(pin, LOW);
  }
};

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