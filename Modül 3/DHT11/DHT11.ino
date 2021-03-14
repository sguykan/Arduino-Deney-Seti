
#include "dht11.h"
#define PIN 7

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT11.read(PIN);

  Serial.print("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Sicaklik (Celcius): ");
  Serial.println((float)DHT11.temperature, 2);

  Serial.print("Cig Olusma Noktasi: ");
  Serial.println(DHT11.dewPoint(), 2);

  delay(2000);

}
