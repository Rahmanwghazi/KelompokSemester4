#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4,3, 2);

void setup(){
  lcd.begin(16, 2);
  lcd.print("16");
}

void loop(){
  for (int posisi = 0;posisi < 13;posisi++){
    lcd.scrollDisplayRight();
    delay(150);
  }
}
