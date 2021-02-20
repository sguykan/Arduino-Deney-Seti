// Bu uygulamayı çalıştırmadan önce mutlaka 5V adaptör ve Güç kablosunu kullanınız.
#include "Stepper.h"

#define STEPS 64
#define enb 4
#define PWMA 5
#define PWMB 6
#define pot A3
int potan = 0, potanx = 0;
#define yon A0
Stepper stepper(STEPS, 3, 2, 7, 8);

void setup()
{
  pinMode(enb, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  digitalWrite(enb, 1);
  digitalWrite(PWMA, 1);
  digitalWrite(PWMB, 1);
  pinMode(yon, INPUT);
}

void loop()
{
  potan = analogRead(pot);
  potanx = map(potan, 0, 1023, 0, 500);
  stepper.setSpeed(potanx);

  if (digitalRead(yon) == 1)
  {
    stepper.step(STEPS);
  }
  else
  {
    stepper.step(-STEPS);
  }

}
