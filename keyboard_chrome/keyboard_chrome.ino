#define pin 3
#include "Keyboard.h"
#define delayi 250

char c [31] = {'h','t','t','p','s',':','/','/','w','w','w','.','b','o','s','t','o','n','d','y','n','a','m','i','c','s','.','c','o','m','/'};
char b[6] = {'C','H','R','O','M','E'};
void setup()
{
  pinMode(pin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() 
{
  while (digitalRead(pin) == HIGH) 
  {
    delay(500);
  }
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll() ;
  delay(delayi);
  for (int i=0;i<6;i++)
  {
    Keyboard.press(b[i]);
    Keyboard.releaseAll() ;
  }
  delay(delayi);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll() ;
  delay(delayi);
  for (int i=0;i<31;i++)
  {
    Keyboard.press(c[i]);
    Keyboard.releaseAll() ;
  }
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll() ;
}
