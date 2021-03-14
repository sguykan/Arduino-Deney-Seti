#include "IRremote.h"     //Kütüphane https://github.com/Arduino-IRremote/Arduino-IRremote

int IR = 8;

IRrecv IR_Kod(IR);

decode_results results;

void setup()
{
  Serial.begin(9600);
  IR_Kod.enableIRIn(); 
  Serial.println("IR Okumaya Hazır");
}

void loop() 
{
  if (IR_Kod.decode(&results)) 
  {
    Serial.println(results.value, HEX);
    IR_Kod.resume(); 
  }
  delay(100);
}
