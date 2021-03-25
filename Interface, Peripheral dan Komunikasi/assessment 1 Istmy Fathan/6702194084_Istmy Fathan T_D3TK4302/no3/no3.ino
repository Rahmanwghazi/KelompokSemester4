 #include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_389151/no3.ino.hex
int in1=10;
int in2=9;
int in3=8;
void setup()
{
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
lcd.begin(16, 2);
 lcd.setCursor(0,0);
  lcd.print("Istmy Fathan T"); 
  lcd.setCursor(0,1);
  lcd.print("6702194084"); 
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
positionCounter < 13;
positionCounter++)
{//scroll display text lcd ke kanan
lcd.scrollDisplayRight();
//kecepatan pergerakan scroll display (150 ms)
delay(150);
}

delay(100);
}
