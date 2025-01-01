#include "MatrixMiniR4.h"

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
  Serial.println("Enter 'on' to turn LEDs on, 'off' to turn LEDs off.");
}

void loop()
{
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    
    if (input == "on") {
      Serial.println("LEDs are ON");
      MiniR4.LED.setColor(1, 0, 255, 0);
      MiniR4.LED.setColor(2, 0, 255, 0);
    }
    else if (input == "off") {
      Serial.println("LEDs are OFF");
      MiniR4.LED.setColor(1, 0, 0, 0);
      MiniR4.LED.setColor(2, 0, 0, 0);
    }
    else {
      Serial.println("Invalid input. Enter 'on' or 'off'.");
    }
  }
}
