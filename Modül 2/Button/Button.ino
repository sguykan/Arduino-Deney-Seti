
#define led 5
#define bt1 A0
#define bt2 A1

byte bt1_drm = 0, bt2_drm = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
}

void loop()
{
  bt1_drm = digitalRead(bt1);
  bt2_drm = digitalRead(bt2);
  if (bt1_drm == 1)
  {
    Serial.println("Led Yandı");
    digitalWrite(led, 1);
  }
  if (bt2_drm == 1)
  {
    Serial.println("Led Söndü");
    digitalWrite(led, 0);
  }

  delay(200);

}
