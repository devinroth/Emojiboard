#include "Keyboard.h"

#define   GRINNING_FACE                   "d83dde00"
#define   SLIGHTLY_FROWNING_FACE          "d83dde41"
#define   PILE_OF_POOP                    "d83ddca9"

#define   ALT     0x86

#define   DELAY   200

int grinningFaceButton = 14;
int slightlyFrowningFaceButton = 16;
int pileOfPoopButton = 10;

void setup() {
  pinMode(grinningFaceButton, INPUT_PULLUP);
  pinMode(slightlyFrowningFaceButton, INPUT_PULLUP);
  pinMode(pileOfPoopButton, INPUT_PULLUP);
}

void loop() {

  Keyboard.begin();

  if (digitalRead(grinningFaceButton) == LOW) {
    Keyboard.press(ALT);
    Keyboard.print(GRINNING_FACE);
    Keyboard.release(ALT);
    delay(DELAY);
  }

  if (digitalRead(slightlyFrowningFaceButton) == LOW) {
    Keyboard.press(ALT);
    Keyboard.print(SLIGHTLY_FROWNING_FACE);
    Keyboard.release(ALT);
    delay(DELAY);
  }
  
  if (digitalRead(pileOfPoopButton) == LOW) {
    Keyboard.press(ALT);
    Keyboard.print(PILE_OF_POOP);
    Keyboard.release(ALT);
    delay(DELAY);
  }


}
