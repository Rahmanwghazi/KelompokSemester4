#include <EEPROM.h> 
int address = 0; 
byte value; 
void setup() 
{ 
 Serial.begin(9600); 
} void loop() { 
value = EEPROM.read(address); // EEPROM akan membaca isi dari (address) 
Serial.print(address); //akan menampilkan ke serial monitor isi dari (address)
Serial.print("\t"); // spasi kebawah
Serial.print(value, DEC); //menampilkan isi dari value, DEC 
Serial.println(); //print kosong 
address = address + 1; //address akan di tambah 1 jadi address adalah 1 
if (address == 512) //jika nilai address 512 
address = 0; // maka address akan menjadi 0
delay(500); } 
