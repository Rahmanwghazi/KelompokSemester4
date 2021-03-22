#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_778274/nomer_6.ino.hex
int tombol=10;
void setup(){
lcd.begin(16, 2);
Serial.begin(9600);
lcd.print("Hallo");
pinMode(tombol,INPUT);
}
void loop()
{
if (Serial.available()) {//Jika terdapat serial monitor yang terdeteksi
delay(2000);
lcd.clear();
while (Serial.available() > 0) {//melakukan perulangan selama serial monitor tersedia
lcd.write(Serial.read());//menampilkan pada lcd data yang ada pada monitor serial
}
}
}
