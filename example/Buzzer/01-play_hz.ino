#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
  
  MiniR4.Buzzer.Tone(262, 100);
  delay(500);
  MiniR4.Buzzer.Tone(400, 100);
  delay(500);
  MiniR4.Buzzer.Tone(621, 100);
}

void loop()
{

}
