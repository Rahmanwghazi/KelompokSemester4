int led1=9;
int led2=10;
int led3=11;
int i;
int tombol1=2;
int tombol2=3;

void setup(){ 
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(tombol1,INPUT);
pinMode(tombol2,INPUT);
} 
void loop(){ 
  tombol1=(digitalRead(2));
  tombol2=(digitalRead(3));
  if(tombol1==LOW){
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);  
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(500);
  }
  else if(tombol1==HIGH){
  digitalWrite(led1,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led1,LOW);
  }
  
  if(tombol2==LOW){
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
  else if (tombol2==HIGH){
  digitalWrite(led1,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led1,LOW);
  }
}

//4 C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_568748/modul5.4.ino.hex
