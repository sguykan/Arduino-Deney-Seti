#define bt1 4
#define bt2 5
#define bt3 6
#define bt4 7
#define bt5 8
#define led 2
#define buz 3

void setup()
{
  Serial.begin(9600);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3, INPUT);
  pinMode(bt4, INPUT);
  pinMode(bt5, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);
}

void loop()
{
  if (digitalRead(bt1) == 1)
  {
    Serial.println("Birinci Butona basıldı");
    digitalWrite(led, 1);
    digitalWrite(buz, 1);
  }
  if (digitalRead(bt2) == 1)
  {
    Serial.println("İkinci Butona basıldı");
    digitalWrite(led, 1);
    digitalWrite(buz, 1);
  }
  if (digitalRead(bt3) == 1)
  {
    Serial.println("Üçüncü Butona basıldı");
    digitalWrite(led, 1);
    digitalWrite(buz, 1);
  }
  if (digitalRead(bt4) == 1)
  {
    Serial.println("Dördüncü Butona basıldı");
    digitalWrite(led, 1);
    digitalWrite(buz, 1);
  }
  if (digitalRead(bt5) == 1)
  {
    Serial.println("Beşinci Butona basıldı");
    digitalWrite(led, 1);
    digitalWrite(buz, 1);
  }
  delay(100);
  digitalWrite(led, 0);
  digitalWrite(buz, 0);
  delay(50);
}
