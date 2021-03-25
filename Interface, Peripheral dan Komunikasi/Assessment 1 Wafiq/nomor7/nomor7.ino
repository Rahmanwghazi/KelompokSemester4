#include <LiquidCrystal.h>
#include <EEPROM.h>

LiquidCrystal lcd(12, 11, 5, 4,3, 2);

int lm35=A0;
int suhu=0;
int tom=10;
int tekan=0;

void setup() {
  lcd.begin(16,2);
  pinMode(tom,INPUT);
  lcd.print("tekan u/ simpan data");
}

void loop() {
  
  suhu=analogRead(lm35);
  if(digitalRead(tom)==LOW){
    tekan=tekan+1;
  }
  
  if(tekan==1){
    EEPROM.write(0,suhu/2-1);
    delay(500);
    lcd.clear();
    lcd.print("data tersimpan");
    tekan=3;
  }
  else if(tekan==4){
    lcd.clear();
    lcd.print(EEPROM.read(0));
  }
  
  

}
