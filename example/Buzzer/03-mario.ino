#include "MatrixMiniR4.h"

#define NOTE_E7 2637
#define NOTE_G7 3136
#define NOTE_A7 3520
#define NOTE_C7 2093
#define NOTE_G6 1568

void setup() {
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
}

void loop() {
  MiniR4.Buzzer.Tone(NOTE_E7, 200);
  delay(250);
  MiniR4.Buzzer.Tone(NOTE_E7, 200);
  delay(250);
  MiniR4.Buzzer.Tone(NOTE_E7, 200);
  delay(300);
  MiniR4.Buzzer.Tone(NOTE_C7, 200);
  delay(150);
  MiniR4.Buzzer.Tone(NOTE_E7, 200);
  delay(300);
  MiniR4.Buzzer.Tone(NOTE_G7, 400);
  delay(500);
  MiniR4.Buzzer.Tone(NOTE_G6, 400);
  delay(500);
  while (1);
}
