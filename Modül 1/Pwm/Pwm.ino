#define ledA 5
#define ledB 6
int brightness = 0;
int fadeAmount = 5;

void setup() 
{
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() 
{

  for (int i = 0; i <= 255;) 
  {
    analogWrite(ledA, brightness);
    brightness += fadeAmount;
    i += fadeAmount;
    delay(30);
  }

  for (int i = 255; i >= 0;) 
  {
    analogWrite(ledA, brightness);
    brightness -= fadeAmount;
    i -= fadeAmount;
    delay(30);
  }

  for (int j = 0; j <= 255;) 
  {
    analogWrite(ledB, brightness);
    brightness += fadeAmount;
    j += fadeAmount;
    delay(30);
  }

  for (int j = 255; j >= 0;) 
  {
    analogWrite(ledB, brightness);
    brightness -= fadeAmount;
    j -= fadeAmount;
    delay(30);
  }
}
