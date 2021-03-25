#include<EEPROM.h>
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_734401/nomor7.ino.hex
const int PIN_LCD_CLOCK = 1; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

byte data;
int tekan=0;
int tombol=A0;
int Lm=A2;
int hasil=0;
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(tombol,INPUT);
}

void loop(){

  int tombol = digitalRead(A0);
  data= analogRead(Lm)/4;
  
if(tombol==LOW){
 tekan=tekan+1;
  }
  if(tekan==1){    EEPROM.write(0,data);
      lcd.setCursor (0, 0);
      lcd.println(data);
    }
    else if(tekan==2){
   EEPROM.read(0);
    hasil=data;
     lcd.setCursor (0, 0);
   lcd.println(EEPROM.read(0));
    }
  Serial.println(data);  delay(1000);
  
}
