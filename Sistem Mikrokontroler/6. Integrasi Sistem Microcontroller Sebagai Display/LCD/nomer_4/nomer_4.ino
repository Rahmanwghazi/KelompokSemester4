 #include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_881890/nomer_4.ino.hex
void setup()
{
lcd.begin(16, 2);
lcd.print("hello, world!");
delay(1000);
}
void loop()
//fungsi untuk melakukan perulangan aksi positionCounter bertambah 1 hingga 12 dari nilai awalnya i.e 0
{
for (int positionCounter = 0;
positionCounter < 13;
positionCounter++)
{//scroll display text lcd ke kiri
lcd.scrollDisplayLeft();
//kecepatan pergerakan scroll display (150 ms)
delay(150);
}
for (int positionCounter = 0;
positionCounter < 29;
positionCounter++)
{//scroll display text lcd ke kanan
lcd.scrollDisplayRight();
//kecepatan pergerakan scroll display (150 ms)
delay(150);
}
for (int positionCounter = 0;
positionCounter < 16;
positionCounter++)
{
lcd.scrollDisplayLeft();
delay(150);
}
delay(1000);
}
