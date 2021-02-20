// Bu uygulamada mutlaka 5V Adaptör ve güç kablosu ile besleme yapılmalıdır.

#include <SparkFun_TB6612.h>

#define pot A2
#define yonB A1
#define BIN1 7
#define BIN2 8
#define PWMB 6
#define STBY 4

const int offsetB = 1;

int potan = 0, potanx = 0;

Motor motor2 = Motor(BIN1, BIN2, PWMB, offsetB, STBY);

void setup()
{
  pinMode(yonB, INPUT);
}

void loop()
{
  potan = analogRead(pot);
  potanx = map(potan, 0, 1023, 0, 255);
  if (digitalRead(yonB) == 1)
  {
    motor2.drive(-potanx, 1000);
  }
  else
  {
    motor2.drive(potanx, 1000);
  }
  delay(20);
}
