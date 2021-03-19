int led=9;
int pot=A0; 
int data;
int ea=10;
int yes=11;
void setup(){
 pinMode(ea,OUTPUT);
 pinMode(yes,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(pot,INPUT); 
} 
void loop(){
data=analogRead(pot);
data=data/4; 
analogWrite(led,data);
 delay(1000);
 data=analogRead(pot);
data=data/4; 
analogWrite(ea,data);
 delay(2000);
 data=analogRead(pot);
data=data/4;
analogWrite(yes,data);
 delay(3000);
}

// 6 C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_976027/modul5.6.ino.hex
