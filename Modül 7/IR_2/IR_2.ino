#include "IRremote.h"

IRrecv IR(8);
decode_results results;

#define role 7
#define led 5


void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(role, OUTPUT);
  IR.enableIRIn();
}
void loop() 
{
  if (IR.decode(&results))
  {
    if (results.value == 0xFF6897)
    {
      digitalWrite(led, !digitalRead(led));
      if (digitalRead(led) == 1)
      {
        Serial.println("LED yandi");
      }
      else
      {
        Serial.println("LED sondu");
      }
    }
    if (results.value == 0xFF9867)
    {
      digitalWrite(role, !digitalRead(role));
      if (digitalRead(role) == 1)
      {
        Serial.println("Role Aktif");
      }
      else
      {
        Serial.println("Role Pasif");
      }
    }

    if (results.value == 0xFF02FD)
    {
      digitalWrite(led, 1);
      digitalWrite(role, 1);
      Serial.println("Tum Alıcılar Enerjili");
    }
    if (results.value == 0xFF4AB5)
    {
      digitalWrite(led, 0);
      digitalWrite(role, 0);
      Serial.println("Tum Alıcılar Enerjisiz");
    }

    IR.resume();
  }
}
