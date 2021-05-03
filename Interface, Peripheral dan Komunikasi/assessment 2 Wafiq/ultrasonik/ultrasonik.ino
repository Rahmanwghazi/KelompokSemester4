#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 


const int pingPin = 9;
const int echoPin = 8; 

int tombol = 7;
int tekan=0;

int led1 = A0;
int led2 = A1;
int led3 = A2;

void setup()
{
  Serial.begin(9600); 
  lcd.begin(16,2);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);



  int stat=digitalRead(tombol);
  if (stat==HIGH){
    tekan=tekan+1;
  }

  if (tekan==1){
    Serial.print("[Tombol = 1]  ");
    Serial.println("Sensor PING aktif");
    delay(500);
  }

  else if (tekan==2){
    Serial.print("[Tombol = 2]  ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    lcd.print(cm);
    lcd.println("cm          ");
    delay(500);
  }
  else if (tekan>=3){
    Serial.print("[Tombol = 3]  ");
    Serial.print(cm);
    Serial.print("cm  ");
    Serial.print("Delay = ");
    Serial.println(cm*5);
    lcd.print(cm);
    lcd.println("cm          ");
    digitalWrite(led1,HIGH); 
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    delay(cm*5);
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW); 
    digitalWrite(led3,LOW);
    delay(cm*5);
  }



}


long microsecondsToCentimeters(long microseconds){
return microseconds / 29 / 2;
}
