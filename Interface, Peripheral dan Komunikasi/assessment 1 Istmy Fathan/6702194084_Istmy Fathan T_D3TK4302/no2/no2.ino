#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_928361/no2.ino.hex

void setup() {
 
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Istmy  Fathan T"); 
  lcd.setCursor(0,1);
  lcd.print("6702194084"); 
}

void loop() {
 
  delay(300);
  lcd.noDisplay();
  delay(400);
  lcd.display();
}
