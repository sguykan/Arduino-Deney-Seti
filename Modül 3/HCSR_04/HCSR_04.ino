#include "NewPing.h"

#define trig 9
#define echo 8

int distance;
NewPing sonar(trig, echo, 200);
void setup()
{
  Serial.begin (9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  distance = sonar.ping_cm();
  Serial.print("Mesafe = ");
  Serial.println(distance);
  delay(100);
}
