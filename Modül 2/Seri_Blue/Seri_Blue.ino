// Seri Port Ekranından veya Arduino Blurtooth programları ile deneyebilirsiniz. "Arduino bluetooth controller"
// HC06 modülünü takmadan önce mutlaka pin kontrolü yapınız
  
#define led1 11
#define led2 8
#define led3 7
#define led4 2

char veri = 0;  // Seri Bilginin tutulacağı değişken
int x = 0;
void setup()
{
  Serial.begin(57600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}
void loop()
{
  x++;
  if (x>10000)x=0;
  
  if (Serial.available() > 0)
  {
    veri = Serial.read();

    if (veri == 'A') digitalWrite(led1, 1);

    if (veri == 'a') digitalWrite(led1, 0);

    if (veri == 'B') digitalWrite(led2, 1);

    if (veri == 'b') digitalWrite(led2, 0);

    if (veri == 'C') digitalWrite(led3, 1);

    if (veri == 'c') digitalWrite(led3, 0);

    if (veri == 'D') digitalWrite(led4, 1);

    if (veri == 'd') digitalWrite(led4, 0);

    if (veri == '1')
    {
      digitalWrite(led1, 1);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
      digitalWrite(led4, 1);
    }
    if (veri == '0')
    {
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
      digitalWrite(led4, 0);
    }
    if (veri == 's' || veri == 'S')
    {
      Serial.print("Sayı Değeri= ");
      Serial.println(x);
    }

  }
delay(200);
}
