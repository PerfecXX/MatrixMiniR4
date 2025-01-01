#include "MatrixMiniR4.h"

void setup() {
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
}

void loop() {
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, 255, i, 0);  // Red to Yellow
    delay(10);
  }
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, 255 - i, 255, 0);  // Yellow to Green
    delay(10);
  }
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, 0, 255, i);  // Green to Cyan
    delay(10);
  }
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, 0, 255 - i, 255);  // Cyan to Blue
    delay(10);
  }
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, i, 0, 255);  // Blue to Magenta
    delay(10);
  }
  for (int i = 0; i < 255; i++) {
    MiniR4.LED.setColor(1, 255, 0, 255 - i);  // Magenta to Red
    delay(10);
  }
}
