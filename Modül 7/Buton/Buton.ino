
#define bt 4
#define role 7
boolean x = 0;

void setup()
{
  pinMode (role, OUTPUT);
  pinMode (bt, INPUT);
}

void loop()
{
  if (digitalRead(bt) == 1)
  {
    x = !x;
    delay(500);
  }
  digitalWrite(role, x);
  delay(500);
}
