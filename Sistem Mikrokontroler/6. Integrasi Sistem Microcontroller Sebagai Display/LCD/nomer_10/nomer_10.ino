#include <LiquidCrystal_SR_LCD3.h>
const int
PIN_LCD_STROBE = 2; const int
PIN_LCD_DATA = 3; const int
PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_515713/nomer_10.ino.hex
PIN_LCD_CLOCK,
PIN_LCD_STROBE);
int led1=8;
int led2=9;
int led3=10;
int pot=A0;
int tombol1=7;
int tombol2=6;
int tombol3=5; 
int data;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(pot,INPUT);
 pinMode(tombol1,INPUT);
 pinMode(tombol2,INPUT);
 pinMode(tombol3,INPUT);
 lcd.begin(16,1);
 lcd.home ();
 lcd.setCursor (0, 81);
}
void loop() {
 // put your main code here, to run repeatedly:
if(digitalRead(tombol1)==LOW){
//LED Fading by Potentiometer
for (int a=0;a<2;a++){
 lcd.print(" Fading LED -");
 } 
 data=analogRead(pot);
 data=data/4;
 analogWrite(led2,data);
 delay(data);
 
}
else{
 digitalWrite(led2,LOW);
 lcd.clear();
 
}
 //LED On-Off by Push-button
if(digitalRead(tombol2)==LOW){
 for (int b=0;b<2;b++){
 lcd.print(" Blinking LED -");
 delay(100);
 }
 digitalWrite(led1,HIGH);
 delay(100);
 digitalWrite(led1,LOW);
 delay(100);
 
}
else{
 digitalWrite(led1,LOW);
 
}
if(digitalRead (tombol3)==LOW){
//LED On-Off by Delay
 for (int c=0;c<2;c++){
 lcd.print(" Running LED -");
 delay(300);
 } 
 digitalWrite(led3,HIGH);
 delay(300);
 digitalWrite(led3,LOW);
 delay(300);
 digitalWrite(led2,HIGH);
 delay(300);
 digitalWrite(led2,LOW);
 delay(300);
 digitalWrite(led1,HIGH);
 delay(300);
 digitalWrite(led1,LOW);
 delay(300);
}
else{
 digitalWrite (led3,LOW);
}
}
