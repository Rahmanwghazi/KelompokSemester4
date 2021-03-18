#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 1; 
const int PIN_LCD_DATA = 2; 
const int PIN_LCD_CLOCK = 3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

int lightPin = A0;  
int tombol1= 7;
int tombol2= 6;
int tombol3= 5;
int tombol4= 4;
int pd = A1;
int buz = 11;


void setup() 
{ 
 Serial.begin(9600); 
 lcd.begin(16,2); 
 pinMode(tombol1,INPUT);
 pinMode(tombol2,INPUT);
 pinMode(tombol3,INPUT);
 pinMode(tombol4,INPUT);
 pinMode(buz, OUTPUT);
 
} 
void loop() 
{ 
  int tombol1 = digitalRead(7);
  int tombol2 = digitalRead(6);
  int tombol3 = digitalRead(5);
  int tombol4 = digitalRead(4);
  
  if(tombol1==LOW){
    Serial.println(analogRead(lightPin)); 
    lcd.println("tesS"); 
    
  }

  else if(tombol2==LOW){
    Serial.println(analogRead(pd)); 
    lcd.println(analogRead(pd)); 
  }
  else if(tombol3==LOW){
    Serial.println(analogRead(pd)); 
    lcd.println(analogRead(pd)); 
  }

  else if(tombol4==LOW){
    int data=(analogRead(lightPin));
    if (data <= 350){
      digitalWrite(buz, HIGH);
    }
    else if (data >350){
      digitalWrite(buz,LOW);
    }
    Serial.println(analogRead(lightPin)); 
    lcd.println(analogRead(lightPin)); 
  }
  
delay(100);
  
  
} 
