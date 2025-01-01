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
}
