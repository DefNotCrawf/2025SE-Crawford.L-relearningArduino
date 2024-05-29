#define LED_PIN 13

class Led 
{
private:
  byte pin;
public:
  Led(byte pin)
  {

  }
};

void setup(){
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop(){
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}