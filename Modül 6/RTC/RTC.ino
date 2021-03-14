#include "Wire.h"
#include "RTClib.h"

RTC_DS1307 rtc;

char daysOfTheWeek[7][12] = {"Pazar", "Pazartesi", "Salı", "Çarşamba", "Perşembe", "Cuma", "Cumartesi"};

void setup ()
{
  Serial.begin(9600);
  delay(1000);

  if (! rtc.begin()) 
  {
    Serial.println("RTC Modül Bulunamadı");
    while (1);
  }

//rtc.adjust(DateTime(2021, 2, 20, 21, 18, 20));  // Ayar birkereliğine buradan yapılıp sonradan bu satır iptal edilir.

}

void loop ()
{
  DateTime now = rtc.now();
  Serial.println("Current Date & Time: ");
  Serial.print(now.day(), DEC);
  Serial.print('.');
  Serial.print(now.month(), DEC);
  Serial.print('.');
  Serial.print(now.year(), DEC);
  Serial.print(" (");
  Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
  Serial.print(") ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();

  delay(1000);
}
