#include <LiquidCrystal_SR_LCD3.h> 
#include <Keypad.h>

int a=10; 
int b=9; 
int c=8; 
int d=7; 
int e=6; 
int f=5; 
int g=4;

int buzzer=A0;

const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4;

LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK,PIN_LCD_STROBE);

char nohp[12];
char nomorhp;
 
 
const byte row=4;
const byte col=3;
const int buttonPin = A0;

int buttonState=1;
 
char keys[row][col]={ 
{'1','2','3'}, 
 {'4','5','6'}, 
 {'7','8','9'}, 
 {'*','0','#'} 
}; 

byte colpin[col]={13,12,11}; 
byte rowpin[row]={A1,A2,A3,A4};
Keypad keypad = Keypad(makeKeymap(keys),rowpin,colpin, row, col);


void setup(){ 

 
  lcd.begin(16,2);
  for (int i=0; i<3; i++){
    pinMode(colpin[i],INPUT); 
  }
  for (int i=0; i<4;i++){ 
    pinMode(rowpin[i],OUTPUT); 
  } 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(buttonPin, INPUT);

}


void loop(){ 
  for (int a=0;a<12;a++){
  char key = keypad.getKey();
  nohp[a]=key;
  if (key){
    lcd.print(key);
  }
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW){
    for (int x=0;x<12;x++){
      char nomorhp2=nohp[x];
      nomor(nomorhp2);
    }
  }
  }
}
void nomor(char nomorhp2){   
  if (nomorhp2=='0'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,LOW); 
 } 
 else if (nomorhp2=='1'){ 
    digitalWrite(a,LOW); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,LOW); 
    digitalWrite(e,LOW); 
    digitalWrite(f,LOW); 
    digitalWrite(g,LOW); 
 } 
 else if (nomorhp2=='2'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,LOW); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,HIGH); 
    digitalWrite(f,LOW); 
    digitalWrite(g,HIGH); 

 }
  else if (nomorhp2=='3'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,LOW); 
    digitalWrite(f,LOW); 
    digitalWrite(g,HIGH); 

 }
  else if (nomorhp2=='4'){ 
    digitalWrite(a,LOW); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,LOW); 
    digitalWrite(e,LOW); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,HIGH); 

 }
  else if (nomorhp2=='5'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,LOW); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,LOW); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,HIGH); 

 }
  else if (nomorhp2=='6'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,LOW); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,HIGH);
     
 }
  else if (nomorhp2=='7'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,LOW); 
    digitalWrite(e,LOW); 
    digitalWrite(f,LOW); 
    digitalWrite(g,LOW); 

 }
  else if (nomorhp2=='8'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,HIGH); 

 }
  else if (nomorhp2=='9'){ 
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH); 
    digitalWrite(c,HIGH); 
    digitalWrite(d,HIGH); 
    digitalWrite(e,LOW); 
    digitalWrite(f,HIGH); 
    digitalWrite(g,HIGH); 
 } 
}
