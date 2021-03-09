#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //pin yang disambungkan antara arduino dengan LCD
int in1=10;
int in2=9;
int in3=8;
void setup() {
pinMode(in1, INPUT);
pinMode(in2, INPUT);
pinMode(in3, INPUT);
  
if(digitalRead(in1)==LOW){
 lcd.print("YA!");// untuk menampilkan hello worrld ke lcd
}
else if(digitalRead(in2)==LOW){
 lcd.print("222");// untuk menampilkan hello worrld ke lcd
}
else if(digitalRead(in3)==LOW){
 lcd.print("333");// untuk menampilkan hello worrld ke lcd
}
else
lcd.print("PIN?");
}
void loop() {


} 
