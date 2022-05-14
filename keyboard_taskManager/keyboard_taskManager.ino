#define pin 3
#include "Keyboard.h"
#define delayi 250
void setup() 
{
  Keyboard.begin();
  Serial.begin(9600);
  pinMode(pin , INPUT_PULLUP);
}

void loop() 
{
    while (digitalRead(pin) == HIGH ) 
    {
      delay(500);
    }
    Keyboard.press(KEY_LEFT_CTRL);
    delay(50);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(50);   
    Keyboard.press(KEY_ESC);
    delay(50);
    Keyboard.releaseAll() ;
    delay(delayi);
}

    
