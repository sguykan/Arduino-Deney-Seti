#define POT A3  //Led ve Dijital çıkış LDR nin çalışma eşik değer ayar
#define LDR A2
#define led 5
#define D 6   //Yaklaşık 1A lik Dijital çıkış
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(D, OUTPUT);
}

void loop()
{
  Serial.print("Pot Değeri= ");
  Serial.print(analogRead(POT));
  Serial.print("\tLDR Değeri= ");
  Serial.println(analogRead(LDR));

  if (analogRead(LDR) > analogRead(POT))
  {
    digitalWrite(led, 0);
    digitalWrite(D, 0);
  }
  else
  {
    digitalWrite(led, 1);
    digitalWrite(D, 1);
  }

  delay(100);
}
