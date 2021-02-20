#include "SPI.h"
#include "RFID.h"

#define K_ld 6
#define Y_ld 5
#define buz 8

RFID rfid(10, 9);

byte kart[5] = {169, 233, 46, 195, 173};

boolean izin = true;
void setup()
{
  Serial.begin(9600);
  SPI.begin();
  rfid.init();
  pinMode(K_ld, OUTPUT);
  pinMode(Y_ld, OUTPUT);
  pinMode(buz, OUTPUT);
}

void loop()
{
  izin = true;
  if (rfid.isCard())
  {
    digitalWrite(buz, 1);
    delay(300);
    digitalWrite(buz, 0);
    delay(50);

    if (rfid.readCardSerial())
    {
      Serial.print("Kart bulundu ID: ");
      Serial.print(rfid.serNum[0]);
      Serial.print(",");
      Serial.print(rfid.serNum[1]);
      Serial.print(",");
      Serial.print(rfid.serNum[2]);
      Serial.print(",");
      Serial.print(rfid.serNum[3]);
      Serial.print(",");
      Serial.println(rfid.serNum[4]);
    }
    for (int i = 0; i < 5; i++)
    {
      if (rfid.serNum[i] != kart[i])
      {
        izin = false;
      }
    }

    if (izin == true)
    {
      Serial.println("Doğru RFID");
      digitalWrite(Y_ld, 1);
      delay(1000);
      digitalWrite(Y_ld, 0);
    }
    else
    {
      Serial.println("Yanlış RFID");
      digitalWrite(K_ld, 1);
      delay(1000);
      digitalWrite(K_ld, 0);
    }

    rfid.halt();
  }
}
