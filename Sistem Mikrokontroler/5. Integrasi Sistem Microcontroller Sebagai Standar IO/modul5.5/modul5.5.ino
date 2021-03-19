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
data=data/4; // nilai dari pot dibagi 4
analogWrite(led,data);
 delay(100);
 data=analogRead(pot);
data=data/4; // nilai dari pot dibagi 4
analogWrite(ea,data);
 delay(200);
 data=analogRead(pot);
data=data/4; // nilai dari pot dibagi 4
analogWrite(yes,data);
 delay(300);
}

// 5 C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_25231/modul5.5.ino.hex
