#include "MatrixMiniR4.h"

void setup() {
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);

  MiniR4.OLED.setRotation(2);
  MiniR4.OLED.setTextSize(1);
  MiniR4.OLED.setTextColor(SSD1306_WHITE);
  MiniR4.OLED.clearDisplay();
  MiniR4.OLED.setCursor(10, 10);
  MiniR4.OLED.println("Press any button...");
  MiniR4.OLED.display();
}

void loop() {

  MiniR4.PS2.read_gamepad(false, 0);
  MiniR4.OLED.setCursor(10, 10);

  if (MiniR4.PS2.Button(PSB_SELECT)) {
    Serial.println("SELECT");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("SELECT");
  }
  if (MiniR4.PS2.Button(PSB_L3)) { 
    Serial.println("L3");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("L3");
  }
  if (MiniR4.PS2.Button(PSB_R3)) {
    Serial.println("R3");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("R3");
  }
  if (MiniR4.PS2.Button(PSB_START)) {
    Serial.println("START");
    MiniR4.OLED.println("START");
  }
  if (MiniR4.PS2.Button(PSB_PAD_UP)) {
    Serial.println("UP");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("UP");
  }
  if (MiniR4.PS2.Button(PSB_PAD_RIGHT)) {
    Serial.println("RIGHT");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("RIGHT");
  }
  if (MiniR4.PS2.Button(PSB_PAD_DOWN)) {
    Serial.println("DOWN");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("DOWN");
  }
  if (MiniR4.PS2.Button(PSB_PAD_LEFT)) {
    Serial.println("LEFT");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("LEFT");
  }
  if (MiniR4.PS2.Button(PSB_L2)) {
    Serial.println("L2");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("L2");
  }
  if (MiniR4.PS2.Button(PSB_R2)) {
    Serial.println("R2");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("R2");
  }
  if (MiniR4.PS2.Button(PSB_L1)) {
    Serial.println("L1");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("L1");
  }
  if (MiniR4.PS2.Button(PSB_R1)) {
    Serial.println("R1");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("R1");
  }
  if (MiniR4.PS2.Button(PSB_TRIANGLE)) {
    Serial.println("TRIANGLE");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("TRIANGLE");
  }
  if (MiniR4.PS2.Button(PSB_CIRCLE)) {
    Serial.println("CIRCLE");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("CIRCLE");
  }
  if (MiniR4.PS2.Button(PSB_CROSS)) {
    Serial.println("CROSS");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("CROSS");
  }
  if (MiniR4.PS2.Button(PSB_SQUARE)) {
    Serial.println("SQUARE");
    MiniR4.OLED.clearDisplay();
    MiniR4.OLED.println("SQUARE");
  }

  MiniR4.OLED.display();
  delay(100);
}
