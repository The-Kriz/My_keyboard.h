#define pin 3
#include "Keyboard.h"
#define n 19
#define delayi 250
char inputByte;


int a[n] = {72,105,44,32,77,121,32,110,97,109,101,32,105,115,32,104,97,114,105 };
char b[7] = {'N','O','T','E','P','A','D'};

void setup() 
{
  Keyboard.begin();
  Serial.begin(9600);
  pinMode(pin , INPUT_PULLUP);
}

void loop() 
{
  while(Serial.available()>0)
  {
    if (Serial.read()== '1')
    {
      delay(1000);
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      Keyboard.releaseAll() ;
      delay(delayi);
      for (int i=0;i<8;i++)
      {
        Keyboard.press(b[i]);
        Keyboard.releaseAll() ;
      }
      delay(delayi);
    
      Keyboard.press(KEY_RETURN);
    
      Keyboard.releaseAll() ;
    
      delay(delayi);
    
      for (int i=0;i<n;i++)
      {
        Keyboard.press(a[i]);
        Keyboard.releaseAll() ;
      }
    }
  }
}
