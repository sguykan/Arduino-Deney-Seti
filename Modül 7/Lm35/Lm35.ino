
#define Pin A0
float gerilim = 0;
float sensor = 0;
float sicaklik = 0;

 
void setup() 
{

  Serial.begin(9600);         
}
 
void loop() 
{
 
 sensor = analogRead(Pin);
 
 Serial.print("Sensör Değeri:  ");
 Serial.println(sensor);
 
 gerilim = (sensor/1023)*5000;
 
 Serial.print("Gerilim Değeri: ");
 Serial.println(gerilim);
 
 sicaklik = gerilim / 10.0;
 
 Serial.print("Sıcaklık Değeri: ");
 Serial.println(sicaklik);
 
 Serial.println("**********************************");
 delay(1000);
}
