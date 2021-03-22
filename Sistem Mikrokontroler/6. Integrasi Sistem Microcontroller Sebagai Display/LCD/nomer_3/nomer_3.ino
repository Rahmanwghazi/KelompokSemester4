#include <LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2); //pin yang terkoneksi ke arduino
int in1=10;
int in2=9;
int in3=8;
void setup() { 
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
lcd.begin(16, 2); //set jumlah kolom baris lcd
} 
void loop() { 

if(digitalRead(in1)==LOW){
lcd.setCursor(0,1); //set cursor lcd pada baris 0 kolom 1
lcd.print("yowassap"); //menampilkan teks ke lcd
}
else if (digitalRead(in2)==LOW){
  lcd.setCursor(1,0); //set cursor lcd pada baris 0 kolom 1
lcd.print("yoi"); //menampilkan teks ke lcd
}
else if(digitalRead(in3)==LOW){
lcd.clear();
}//C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_980831/nomer_3.ino.hex
}
