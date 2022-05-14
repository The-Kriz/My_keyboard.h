#define pin 3
#include "Keyboard.h"
#define delayi 250
int d = 1;

void setup() 
{
  pinMode(pin , INPUT_PULLUP);
  Keyboard.begin();
}

void loop() 
{

  while (digitalRead(pin) == HIGH ) 
  {
    delay(500);
  }
  
  if (d == 1)
  {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('a');
      Keyboard.releaseAll() ;
      delay(500);
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('c');
      Keyboard.releaseAll() ;
      d = 0;
  } 
  else 
  {
      delay(100);
      Keyboard.press(KEY_LEFT_CTRL);
      delay(50);
      Keyboard.press('v');
      Keyboard.releaseAll() ;
      d = 1;
  }
  Keyboard.releaseAll() ;
}
