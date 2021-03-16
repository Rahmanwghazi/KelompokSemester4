#include <EEPROM.h> 
void setup() 
{ 
 for (int i = 0; i < 512; i++) // perulangan penulisan EEPROM
EEPROM.write(i, 0); // EEPROM akan menjadi 0
digitalWrite(13, // pin 13 akan HIGH
HIGH); 
} 
void loop() 
{ 
} 
