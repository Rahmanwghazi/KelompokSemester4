#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4,3, 2);

const int ROW = 4;
const int COL = 3; 

char keys[ROW][COL] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pin_rows[ROW] = {A0,A1,A2,A3}; 
byte pin_column[COL] = {13,8,7}; 

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW, COL );

int led1=10;
int led2=9;
int led3=6;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  lcd.begin(16, 2);
}

void loop(){
  char key = keypad.getKey();

  if (key=='1'){
    lcd.clear();
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    lcd.print("Grup LED1 nyala");
  }
  else if (key=='2'){
    lcd.clear();
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    lcd.print("Grup LED2 nyala");
  }
  else if (key=='3'){
    lcd.clear();
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    lcd.print("Grup LED3 nyala");
  }
  else if (key=='#'){
    for (int a=0;a<3;a++){
      lcd.clear();
      lcd.print("Running LED");
      digitalWrite(led1,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      delay(500);
      digitalWrite(led2,HIGH);
      delay(500);
      digitalWrite(led2,LOW);
      delay(500);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led3,LOW);
      delay(500);  
    }  
  }
  else if (key=='*'){
    for (int b=0;b<3;b++){
      lcd.clear();
      lcd.print("Blinking LED");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      delay(500);  
    }  
  }
}
