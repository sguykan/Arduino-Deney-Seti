
#define potpin A3
int deger = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Pot Deger Okuma");
}
void loop()
{
  deger  = analogRead(potpin);
  Serial.println(deger);
  delay(100);
}
