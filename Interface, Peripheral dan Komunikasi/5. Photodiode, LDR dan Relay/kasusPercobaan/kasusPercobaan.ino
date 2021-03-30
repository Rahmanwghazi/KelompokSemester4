#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

int lightPin = A0;  

int tombol1= 9;
int tombol2= 8;
int tombol3= 7;
int tombol4= 6;

  int tekan1=0;
  int tekan2=0;
  int tekan3=0;
  int tekan4=0;
  
int pd = A1;
int buz = 11;
int led=10;


void setup() 
{ 
 Serial.begin(9600); 
 lcd.begin(16,2); 
 pinMode(tombol1,INPUT);
 pinMode(tombol2,INPUT);
 pinMode(tombol3,INPUT);
 pinMode(tombol4,INPUT);
 pinMode(lightPin,INPUT);
 pinMode(buz, OUTPUT);
 pinMode(led,OUTPUT);
} 
void loop() 
{ 
  int tombol1 = digitalRead(9);
  int tombol2 = digitalRead(8);
  int tombol3 = digitalRead(7);
  int tombol4 = digitalRead(6);



  int data=(analogRead(lightPin));
  
  if(tombol1==LOW){
    tekan1=tekan1+1;
  }
  
  if(tekan1>0){
    Serial.println(data);
    analogWrite(led,(data/4));
  }
  
  if(tombol2==LOW){
    tekan2=tekan2+1;
  }
  if(tekan2>0){
    Serial.println(analogRead(pd)); 
    analogWrite(led,(analogRead(lightPin))/4);
  }

  if(tombol3==LOW){
    tekan3=tekan3+1;
  }
  
  if(tekan3>0){
    
    if (data <= 350){
      digitalWrite(buz, HIGH);
      lcd.clear();
      lcd.println("bts nilai tercapai");
    }
    else if (data >350){
      digitalWrite(buz,LOW);
      lcd.clear();
      lcd.println("bts nilai blm tercapai");
    }
    Serial.println(analogRead(lightPin)); 
     
  }

  if(tombol4==LOW){
    
    if (data<=350){
      lcd.clear();
       lcd.println("bts nilai tercapai"); 
       digitalWrite(buz, HIGH);
    }
    else if (data >350){
      lcd.clear();
      lcd.println("bts nilai blm tercapai");
      digitalWrite(buz,LOW);
    }
  }
  
delay(100);
  
 //C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_3021/kasusPercobaan.ino.hex 
} 
