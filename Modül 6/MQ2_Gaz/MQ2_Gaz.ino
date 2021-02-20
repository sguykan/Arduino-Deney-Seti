
int Alarm = 250;              
int buzer = 3;                  
int mq;                         

void setup()
{
  Serial.begin(9600);
  pinMode(buzer, OUTPUT);      
}

void loop()
{
  mq = analogRead(A0);           
  Serial.print("MQ2 Değer= ");
  Serial.println(mq);

  if (mq > Alarm)           
  {
    digitalWrite(buzer, 1);
    delay(100);
    digitalWrite(buzer, 0);
    delay(100);
    digitalWrite(buzer, 1);
    delay(300);
    digitalWrite(buzer, 0);
    delay(100);

  }
  else
  {
    digitalWrite(buzer, 0);
  }
  delay(1000);
}
