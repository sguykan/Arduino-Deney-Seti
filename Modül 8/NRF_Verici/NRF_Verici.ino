#include  <SPI.h> 
#include "nRF24L01.h"
#include "RF24.h"    

 
int mesaj[1];  
    
RF24 verici(9,10);  

const int kanal = 111; 
int buton = 4;  


void setup()
{

  verici.begin(); 
  verici.openWritingPipe(kanal);
}


void loop()
{
  if (digitalRead(buton) == 1)
  { 
    mesaj[0] = 50; 
    verici.write(&mesaj, sizeof(mesaj));
  }
  
}
