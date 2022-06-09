//This DigiKeyboard Script takes a screenshot of the desktop, sets it as the wallpaper and hides the desktop icons.
//Work with Windows XP(?)/Vista(?)/7/8/8.1/10 etc.

#include "DigiKeyboard.h"
void setup() {
    pinMode(1, OUTPUT); //LED on Model A
    digitalWrite(1, HIGH);
    DigiKeyboard.delay(500);
    digitalWrite(1, LOW); //turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on

    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(70, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("mspaint");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(800);
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("%USERPROFILE%\\wall.jpg");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(600);
    DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_K);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_F);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_X);
    DigiKeyboard.delay(600);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_V);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(81);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(81);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(81);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(81);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(81);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    DigiKeyboard.delay(100);
    digitalWrite(1, HIGH);
}

void loop() {}