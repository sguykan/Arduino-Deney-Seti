#define  pir 2
#define led1 13
#define led2 12
#define D 10   //Dijital Çıkış max 1A
int x = 0;

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(D, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  x = digitalRead(pir);
  Serial.println(x);

  if (x == 1)
  {
    digitalWrite(led1, 1);
    digitalWrite(D, 1);
    digitalWrite(led2, 0);
  }
  else
  {
    digitalWrite(led1, 0);
    digitalWrite(D, 0);
    digitalWrite(led2, 1);
  }
 delay(100);
}
