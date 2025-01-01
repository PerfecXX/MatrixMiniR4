#include "MatrixMiniR4.h"

int lx;
int ly;
int rx;
int ry;

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);

  MiniR4.OLED.setRotation(2);
  MiniR4.OLED.setTextSize(1);
  MiniR4.OLED.setTextColor(SSD1306_WHITE);
}

void loop()
{
  MiniR4.PS2.read_gamepad(false, 0);
  
  lx = MiniR4.PS2.Analog(PSS_LX);
  ly = MiniR4.PS2.Analog(PSS_LY);
  rx = MiniR4.PS2.Analog(PSS_RX);
  ry = MiniR4.PS2.Analog(PSS_RY);

  Serial.print("LX:");
  Serial.print(lx);
  Serial.print(" LY:");
  Serial.print(ly);
  Serial.print(" RX:");
  Serial.print(rx);
  Serial.print(" RY:");
  Serial.println(ry);

  MiniR4.OLED.setCursor(0,10);
  MiniR4.OLED.print("LX:");
  MiniR4.OLED.setCursor(20,10);
  MiniR4.OLED.print(lx);

  MiniR4.OLED.setCursor(0,25);
  MiniR4.OLED.print("LY:");
  MiniR4.OLED.setCursor(20,25);
  MiniR4.OLED.print(ly);

  MiniR4.OLED.setCursor(55,10);
  MiniR4.OLED.print("RX:");
  MiniR4.OLED.setCursor(75,10);
  MiniR4.OLED.print(rx);

  MiniR4.OLED.setCursor(55,25);
  MiniR4.OLED.print("RY:");
  MiniR4.OLED.setCursor(75,25);
  MiniR4.OLED.print(ry);

  MiniR4.OLED.display();
  delay(1);
  MiniR4.OLED.clearDisplay();
}
