#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //pin yang disambungkan antara arduino dengan LCD

void setup() {
  //pinMode=(lcd, OUTPUT);
  lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

}
