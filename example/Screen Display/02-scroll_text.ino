#include "MatrixMiniR4.h"

int x_pos;

void setup() {
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);

  MiniR4.OLED.setRotation(2);
  MiniR4.OLED.setTextSize(1); 
  MiniR4.OLED.setTextColor(SSD1306_WHITE);
  MiniR4.OLED.setTextWrap(false);
}

void loop() {
  for(x_pos=0;x_pos<126;x_pos++)
  {
  MiniR4.OLED.clearDisplay();
  MiniR4.OLED.setCursor(x_pos, 10);
  MiniR4.OLED.print("Scroll");
  MiniR4.OLED.display();
  delay(10);
  }

  for(x_pos=126;x_pos>0;x_pos--)
  {
  MiniR4.OLED.clearDisplay();
  MiniR4.OLED.setCursor(x_pos, 10);
  MiniR4.OLED.print("Scroll");
  MiniR4.OLED.display();
  delay(10);
  }
}
