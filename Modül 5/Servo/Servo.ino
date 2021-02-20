#include "Servo.h"
Servo motor;
#define pot A2
int potan = 0, potanx = 0;

void setup()
{
  motor.attach(9);
  Serial.begin(9600);
}

void loop()
{
  potan = analogRead(pot);
  potanx = map(potan, 0, 1023, 0, 180);
  Serial.print("Potansiyometre Degeri= ");
  Serial.println(potanx);
  motor.write(potanx);
  delay(50);
}
