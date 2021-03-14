#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

int mesaj[1];

RF24 alici(9, 10);

const int kanal = 111;
int led = 5;


void setup() {

  alici.begin();
  alici.openReadingPipe(1, kanal);
  alici.startListening();
  pinMode(led, OUTPUT);
}

void loop()
{
  if (alici.available())
  {
    bool done = false;
    while (!done) 
    {
      done = alici.read(&mesaj, sizeof(mesaj));
      if (mesaj[0] == 50)
      {
        digitalWrite(led, HIGH);
        delay(2000);
        digitalWrite(led, LOW);
      }
    }
  }
}
