int led1=9;
int led2=10;
int led3=11;
int tombol1=2;
int tombol2=3;
int relay=A4;
int buz=A5;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(tombol1,INPUT);
  pinMode(tombol2,INPUT);
  pinMode(buz,OUTPUT);
  pinMode(relay,OUTPUT);
}

void loop(){
  tombol1=(digitalRead(2));
  tombol2=(digitalRead(3));
  if (tombol1==LOW){
    digitalWrite(relay,LOW);
    digitalWrite(buz,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  else if (tombol1==HIGH){
    digitalWrite(relay,HIGH);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    
  }


  
}

//7 C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_211042/modul5.7.ino.hex 
