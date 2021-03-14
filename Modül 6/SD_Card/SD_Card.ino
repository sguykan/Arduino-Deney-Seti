// SD Card modülünü takarken uçlarını kontrol ederek takınız.
#include <SPI.h>
#include <SD.h>

Sd2Card card;
SdVolume volume;
SdFile root;

const int chipSelect = 10;

void setup()
{
  Serial.begin(9600);
  while (!Serial)
  {

  }

  Serial.println("\nSd Kart Okunuyor...");
  if (!card.init(SPI_HALF_SPEED, chipSelect))
  {
    Serial.println("Kart okuma başarısız. Donanım bağlantı kontorlü yapın:");
    while (1);
  }
  else
  {
    Serial.println("Kart bulundu ve bilgileri alınıyor.");
  }
  Serial.println();
  Serial.print("Kart Tipi= ");
  switch (card.type())
  {
    case SD_CARD_TYPE_SD1:
      Serial.println("SD1");
      break;
    case SD_CARD_TYPE_SD2:
      Serial.println("SD2");
      break;
    case SD_CARD_TYPE_SDHC:
      Serial.println("SDHC");
      break;
    default:
      Serial.println("Bilinmiyor");
  }

  if (!volume.init(card)) {
    Serial.println("SD Kart FAT16 veya FAT32 tipinde biçimlendirilmeli");
    while (1);
  }
  uint32_t volumesize;
  Serial.print("SD Kart= ");
  Serial.println(volume.fatType(), DEC);
  volumesize = volume.blocksPerCluster();
  volumesize *= volume.clusterCount();
  volumesize /= 2;
  Serial.print("Volume size (Kb):  ");
  Serial.println(volumesize);
  Serial.print("Volume size (Mb):  ");
  volumesize /= 1024;
  Serial.println(volumesize);
  Serial.print("Volume size (Gb):  ");
  Serial.println((float)volumesize / 1024.0);
  Serial.println("\nSD Kart içindeki dosyalar");
  root.openRoot(volume);
  root.ls(LS_R | LS_DATE | LS_SIZE);
}

void loop(void)
{
}
