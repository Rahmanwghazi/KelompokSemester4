int led1=9;
int led2=10;
int led3=11;
int i;
void setup(){ 
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
} 
void loop(){ 
for (i=0; i<=255; i+=5){ 
analogWrite(led1,i);
analogWrite(led2,i);
analogWrite(led3,i);
delay(100); 
} 
for (i=255; i>=0; i-=5){ 
analogWrite(led1,i);
analogWrite(led2,i);
analogWrite(led3,i); 
delay(100);
}
}

//3 C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_182868/modul5.3.ino.hex
