int led=13;
int ea=12;
int yes=11;
int tombol=2;
void setup(){
pinMode(led,OUTPUT);
  pinMode(ea,OUTPUT);
    pinMode(yes,OUTPUT);
pinMode(tombol,INPUT);
}
void loop(){
 if(digitalRead(tombol)==LOW){
digitalWrite(led,HIGH);
     delay(150);
   digitalWrite(ea,HIGH);
      delay(250);    
      digitalWrite(yes,HIGH);
        delay(350);
 }
else{
 digitalWrite(led,LOW);
  digitalWrite(ea,LOW);
    digitalWrite(yes,LOW);
 }
} 
