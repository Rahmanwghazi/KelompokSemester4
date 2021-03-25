#include <LiquidCrystal_SR_LCD3.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,
PIN_LCD_CLOCK,
PIN_LCD_STROBE);

int a=10; 
int b=9; 
int c=8; //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_721087/tugas_4.ino.hex
int d=7; 
int e=6; 
int f=5; 
int g=4; 
int pot=A1;

int tombol1=13;
int tombol2=12;
int tombol3=11;

void setup() {
  lcd.begin(16,2);
  
  pinMode(PIN_LCD_STROBE,OUTPUT);
  pinMode(PIN_LCD_DATA,OUTPUT);
  pinMode(PIN_LCD_CLOCK,OUTPUT);
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  pinMode(tombol3, INPUT);

 
}

void loop() {
  if(digitalRead(tombol1)==LOW){
    for (int angka=0;angka<10;angka++){

    if(angka==0){
      lcd.clear();
      lcd.print("0");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      delay(500);   
    }

     else if(angka==1){
      lcd.clear();
      lcd.print("1");
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      delay(500); 
     }

      else if(angka==2){
      lcd.clear();
      lcd.print("2");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      delay(500); 
      }

      else if(angka==3){
      lcd.clear();
      lcd.print("3");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      delay(500); 
      }

      else if(angka==4){
      lcd.clear();
      lcd.print("4");
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(500);
      }
   
     else if(angka==5){
      lcd.clear(); 
      lcd.print("5");
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(500); 
     }

     else if(angka==6){
      lcd.clear();
      lcd.print("6");
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(500); 
     }
     
      else if(angka==7){
      lcd.clear();
      lcd.print("7");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      delay(500); 
      }

      else if(angka==8){
      lcd.clear();
      lcd.print("8");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(500); 
      }

      else if(angka==9){
      lcd.clear();
      lcd.print("9");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(500); 
      }
    }
  }
  
 
 if (digitalRead(tombol2)==LOW){
  // huruf 'a'

    lcd.clear();
    lcd.print("a");
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    delay(500);

    // huruf 'b'
    
    lcd.clear();
    lcd.print("b");
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(500);

     // huruf 'c'
    
    lcd.clear();
    lcd.print("c");
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(500);

     // huruf 'd'
    
    lcd.clear();
    lcd.print("d");
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    delay(500);

     // huruf 'e'
    
    lcd.clear();
    lcd.print("e");
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(500);

     // huruf 'f'
    
    lcd.clear();
    lcd.print("f");
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(500);
  // huruf 'g'
    
    
    lcd.clear();
    lcd.print("g");
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(500);
   
     // huruf 'h'
    
    lcd.clear();
    lcd.print("h");
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(500);
    
    //hurruf i
    
    lcd.clear();
    lcd.print("i");
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(500);
    
    // huruf 'J'
    
    lcd.clear();
    lcd.print("J");
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    }

 
 if(digitalRead(tombol3)==LOW){
  
   lcd.clear();
  int data = analogRead(pot)/100;
  if (data == 0){
   
    lcd.print("0");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
  }   
    
  if (data == 1){
 
  
   lcd.print("1");
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
  }    

    if (data == 2){
    
  
    lcd.print("2");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
    } 
     
     if (data == 3){

    lcd.print("3");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      
     }
    if (data == 4){
  
  
  lcd.print("4");
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
          
    }
    if (data == 5){
  
  
  lcd.print("5");
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      
    } 
    if (data == 6){
   
  
  lcd.print("6");
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      
    }  
      
    if (data == 7){
  
  
  lcd.print("7");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      
    
    }
   if (data == 8){
   
  lcd.print("8");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
     
   }  

    if (data == 9){
   
  lcd.print("9");
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      
    }  
  }
}
