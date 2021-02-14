#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9

void setup() 
{
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
}

void loop() 
{
    digitalWrite(led8,1);
    digitalWrite(led1,1);
    delay(100);
    digitalWrite(led7,1);
    digitalWrite(led2,1);
    delay(100);
    digitalWrite(led6,1);
    digitalWrite(led3,1);
    delay(100);
    digitalWrite(led5,1);
    digitalWrite(led4,1);
    delay(300);
    
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    delay(100);
    digitalWrite(led6,0);
    digitalWrite(led3,0);
    delay(100);
    digitalWrite(led7,0);
    digitalWrite(led2,0);
    delay(100);
    digitalWrite(led8,0);
    digitalWrite(led1,0);
    delay(500);
}
