#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
}

void loop()
{
  if(MiniR4.BTN_UP.getState())
  {
    Serial.println("Button Up is pressed!");
    MiniR4.LED.setColor(1, 0, 255, 0);
    MiniR4.LED.setColor(2, 0, 255, 0);
  }
  if(MiniR4.BTN_DOWN.getState())
  {
    Serial.println("Button Down is pressed!");
    MiniR4.LED.setColor(1, 0, 0, 0);
    MiniR4.LED.setColor(2, 0, 0, 0);
  }

}
