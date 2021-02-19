#define rl 7
#define bt1 4
#define bt2 3
#define bt3 2
#define led 5
boolean x = 0;
void setup()
{
  pinMode (rl, OUTPUT);
  pinMode (led, OUTPUT);
  pinMode (bt1, INPUT_PULLUP);
  pinMode (bt2, INPUT_PULLUP);
  pinMode (bt3, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(bt1) == 0)
  {
    x = 1;
    delay(500);
  }
  if (digitalRead(bt2) == 0)
  {
    x = 0;
    delay(500);
  }
  if (digitalRead(bt3) == 0)
  {
    x = !x;
    delay(500);
  }
  digitalWrite(rl, x);
  digitalWrite(led, x);
  delay(50);
}
