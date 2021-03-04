#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int tombol=10;
void setup(){
lcd.begin(16, 2);
Serial.begin(9600);
lcd.print("Hallo");
pinMode(tombol,INPUT);
}
void loop()
{
 if (Serial.available()) {
delay(2000);
lcd.clear();
 while (Serial.available() > 0) {
lcd.write(Serial.read());
 }
 }
 if (digitalRead(tombol)==LOW){
  for (int positionCounter = 0;
    positionCounter < 16;
    positionCounter++)
    {
    lcd.scrollDisplayRight();
    delay(500);
    }
     delay(500);
   }
}
