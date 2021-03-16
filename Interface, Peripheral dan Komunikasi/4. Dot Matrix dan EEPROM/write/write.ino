#include <EEPROM.h> // menambahkan modul EEPROM.h
int addr = 0; //inisialisasikan int addr = 0 
int potensio = A0; // menjelaskan bahwa potesio adalah pin A0
void setup() 
{ 
Serial.begin(9600); // akan ditampilkan ke serial monitor
} 
void loop() { 
 int val = analogRead(potensio) / 4; // potensio akan dibaca sebagai anolog
if (addr <= 512) {// jika nilai addr kurang dari 512
EEPROM.write(addr, val); // maka EEPROM menuliskan isi dari addr dan val
Serial.print(val); // akan menampilkan isi val ke serial monitor
Serial.print("\t"); // menambahkan spasi
Serial.println(addr); // akan menampilkan isi dari addr
addr = addr + 1; // addr di tambah 1 jad addr bernilai 1
} 
delay(100); 
}
