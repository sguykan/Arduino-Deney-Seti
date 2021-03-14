//Bu kod, analog değerden sıcaklık değerine dönüşüm için logaritma gibi matematik fonksiyonlarına ihtiyaç duymakta. 
//Bu yüzden, kodumuza log() gibi fonksiyonları barındıran math.h isimli kütüphaneyi dahil etmemiz gerekli.

void setup()
{
  Serial.begin(9600);
}

double Termistor(int analogOkuma)
{
  double sicaklik;
  sicaklik = log(((10240000 / analogOkuma) - 10000));
  sicaklik = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * sicaklik * sicaklik )) * sicaklik );
  sicaklik = sicaklik - 273.15;
  return sicaklik;
}

void loop()
{
  int deger;
  double sicaklik;
  deger = analogRead(A1);
  sicaklik = Termistor(deger);
  Serial.println(sicaklik);
  delay(500);
}
