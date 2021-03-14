#define bt1 A0
#define bt2 A1
#define bt3 10
#define bt4 11
#define ld1 2
#define ld2 3
#define ld3 4
#define ld4 5

void setup() 
{
 pinMode(bt1,INPUT);
 pinMode(bt2,INPUT);
 pinMode(bt3,INPUT);
 pinMode(bt4,INPUT);
 
 pinMode(ld1,OUTPUT);
 pinMode(ld2,OUTPUT);
 pinMode(ld3,OUTPUT);
 pinMode(ld4,OUTPUT);
}

void loop() 
{
 digitalWrite(ld1,digitalRead(bt1));
 digitalWrite(ld2,digitalRead(bt2));
 digitalWrite(ld3,digitalRead(bt4));
 digitalWrite(ld4,digitalRead(bt3));
 delay(50);
}
