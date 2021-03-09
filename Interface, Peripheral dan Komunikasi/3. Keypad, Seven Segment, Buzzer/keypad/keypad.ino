#include <LiquidCrystal_SR_LCD3.h> 
#include <Keypad.h>

const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK,PIN_LCD_STROBE);

int C[]={13,12,11}; 
int R[]={A1,A2,A3,A4}; 
char keymap[4][3]={ 
{'1','2','3'}, 
 {'4','5','6'}, 
 {'7','8','9'}, 
 {'*','0','#'} 
}; 
char key; 

void setup(){ 
  
lcd.begin(16,2);
lcd.home ();
lcd.setCursor (0, 0);


for (int i=0; i<3; i++){ 
pinMode(C[i],INPUT); 
 } 
 for (int i=0; i<4; 
i++){ 
pinMode(R[i],OUTPUT); 
 } 
 Serial.begin(9600); 


} 
void loop(){ 
scankeypad(); 


Serial.println(key);
delay(200);
lcd.clear();
lcd.write(key);



} 
void scankeypad(){ 
for(int i=0; i<4; i++){ 
digitalWrite(R[i],LOW); 
for(int j=0; j<3; j++){ 
if(digitalRead(C[j])==LOW){ 
key=keymap[i][j]; 
delay(500); 
 } } 
 
digitalWrite(R[i],HIGH); 
 } 
} 
