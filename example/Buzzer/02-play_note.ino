#include "MatrixMiniR4.h"

int notes[] = {
    NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3,
    NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4,
    NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
  };

void setup()
{
  MiniR4.begin();
  MiniR4.PWR.setBattCell(2);
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++)
  {
    MiniR4.Buzzer.Tone(notes[i], 1000); 
    delay(1000);
  }
}
