int buzz = 11; //set pin 11 sebagai pin untuk buzze
int senRead = 0; //men set senRead adalah 0
int limit = 850;// men set limit sampe 850
int pd = A5;// set pin pd pada pin  A5
void setup() 
{ 
 pinMode(pd,OUTPUT); // men set pd sebagai output
pinMode(buzz,OUTPUT); // sen pin buzz sebagai output
digitalWrite(buzz,LOW); //men sett keadaan buzz LOW 
Serial.begin(9600); // untutk mengaktifkan serial monitor
} 
void loop() 
{ 
 int val=analogRead(senRead); // membuat variable baru yaitu val yang isinya dari analogread senRead
Serial.println(val); // untuk menampilkan hasil dari val ke serial monitor
if(val <= limit) // val kurarng dari limit
 { 
 digitalWrite(buzz,HIGH); // maka buzz  akan keadaan HIGH (aktif)
delay(20); // delay selama 20ms
 } 
 else if(val > limit) // jika val lebih dari limit
 { 
 digitalWrite(buzz,LOW); // maka buzz akan keadaan LOW (mati)
delay(20); // delay selama 20ms
 } 
}

//C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_71861/photodiode.ino.hex
