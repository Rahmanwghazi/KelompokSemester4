#include <LiquidCrystal_SR_LCD3.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_350650/nomer_9.ino.hex
PIN_LCD_CLOCK,
PIN_LCD_STROBE);
int tombol1=7;
int tombol2=6;
void setup()
{
lcd.begin(16,2);
lcd.home ();
lcd.setCursor (0, 0);
pinMode (tombol1,INPUT);
pinMode (tombol2,INPUT);
}
void loop()
{
if (digitalRead 
(tombol1)==LOW){
 lcd.setCursor (0, 0);
 lcd.print("Tombol 1 Ditekan"); 
}
else if (digitalRead (tombol2)==LOW){
 lcd.setCursor (0, 1);
 lcd.print("Tombol 2 Ditekan"); 
}
}
