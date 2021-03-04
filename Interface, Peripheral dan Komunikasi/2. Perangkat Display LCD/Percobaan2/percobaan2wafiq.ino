#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4,
3, 2);

int tombol1 =10;
int tombol2 =9;

void setup()
{
pinMode(tombol1,INPUT);
pinMode(tombol2,INPUT);
lcd.begin(16, 2);
lcd.print("hello, world!");
delay(1000);
}

void loop()
{
  //scroll text ke kiri
  if (digitalRead (tombol1)==LOW){
     for (int positionCounter = 0;
       positionCounter < 13;
       positionCounter++){
        lcd.scrollDisplayLeft();
        delay(150);
    }
  }
  //scroll text ke kanan
  else if (digitalRead (tombol2)==LOW){
      for (int positionCounter = 0;
        positionCounter < 29;
        positionCounter++)
    {
    lcd.scrollDisplayRight();
    delay(150);
    }
      }
 delay(1000);
} 
