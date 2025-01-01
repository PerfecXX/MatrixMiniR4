#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
}

void loop()
{
  MiniR4.LED.setColor(1, 255, 0, 0);
  MiniR4.LED.setColor(2, 255, 0, 0);
  delay(1000);
  MiniR4.LED.setColor(1, 0, 0, 0);
  MiniR4.LED.setColor(2, 0, 0, 0);
  delay(1000);
}
