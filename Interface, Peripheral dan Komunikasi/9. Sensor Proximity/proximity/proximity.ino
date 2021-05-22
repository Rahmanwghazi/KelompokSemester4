#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

int ProxSensor = A4;
int Buzzer = A5;
int inputVal = 0;
int tombol =7;
int tekan=0;

void setup() {
 Serial.begin(9600); 
 lcd.begin(16,2);
 pinMode(Buzzer, OUTPUT);
 pinMode(ProxSensor, INPUT);

 Serial.begin(9600);
}
void loop() {
  int stat=digitalRead(tombol);
  
  if (stat==HIGH){
    tekan=tekan+1;
  }
  if(tekan==1){
    Serial.print("[Tombol = 1]  ");
    inputVal = analogRead(ProxSensor);
    Serial.println(inputVal);
    delay(500);
  }
  if(tekan==2){
    Serial.print("[Tombol = 2]  ");
    if (analogRead(ProxSensor) >=500) {
     digitalWrite(Buzzer, HIGH);
     inputVal = analogRead(ProxSensor);
     Serial.print(inputVal);
     Serial.println(" (Mencapai batas:500)");
     lcd.setCursor(0,0);
     lcd.print("Wafiq");
     lcd.setCursor(0,1);
     lcd.print("Istmy");
     delay(500);
    }
    else if (digitalRead(ProxSensor) <= 498) {
     digitalWrite(Buzzer, LOW);
     inputVal = analogRead(ProxSensor);
     Serial.print(inputVal);
     Serial.println(" (Belum mencapai batas:500)");
     delay(500);
    }
  }
  if(tekan==3){
     Serial.print("[Tombol = 3]  LCD CLEAR");
     lcd.clear();
  }
 
}
