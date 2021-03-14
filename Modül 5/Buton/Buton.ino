#define bt1 10
#define bt2 11
#define bt3 12
#define led 13
boolean x = 0;

void setup()
{
  pinMode (led, OUTPUT);
  pinMode (bt1, INPUT);
  pinMode (bt2, INPUT);
  pinMode (bt3, INPUT);
}

void loop()
{
  if (digitalRead(bt1) == 1)
  {
    x = 1;
    delay(500);
  }
  if (digitalRead(bt2) == 1)
  {
    x = 0;
    delay(500);
  }
  if (digitalRead(bt3) == 1)
  {
    x = !x;
    delay(500);
  }
  digitalWrite(led, x);
  delay(50);
}
