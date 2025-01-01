#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
  
  MiniR4.OLED.setRotation(4);
  MiniR4.OLED.setTextSize(2);
  MiniR4.OLED.setTextColor(SSD1306_WHITE);
  MiniR4.OLED.setCursor(10, 10);
  MiniR4.OLED.print("Hello");
  MiniR4.OLED.display();
  
}

void loop()
{

}
