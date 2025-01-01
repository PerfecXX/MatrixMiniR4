#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
  MiniR4.LED.setColor(1, 255, 0, 0);
}

void loop()
{
  
}
