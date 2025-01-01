#include "MatrixMiniR4.h"

int l_speed;
int r_speed;
int ly;
int rx;

void setup(){
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);

  MiniR4.M3.setReverse(true);
  MiniR4.M4.setReverse(true);
  MiniR4.M3.setBrake(true);
  MiniR4.M4.setBrake(true);

}

void loop(){
  MiniR4.PS2.read_gamepad(false, 0);
  
  ly = MiniR4.PS2.Analog(PSS_LY);
  rx = MiniR4.PS2.Analog(PSS_RX);

  ly = map(ly,0,255,-100,100);
  rx = map(rx,0,255,-100,100);

  Serial.print(ly);
  Serial.println(rx);

  l_speed = ly+rx;
  r_speed = rx-ly;

  MiniR4.M4.setSpeed(l_speed);
  MiniR4.M3.setSpeed(r_speed);
}
