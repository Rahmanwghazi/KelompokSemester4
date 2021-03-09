int led1=9;
int led2=10;
int led3=11;
int pot=A0;
int tombol=2; 
int data;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(tombol,INPUT);
} 
void loop(){
  //LED Fading by Potentiometer
  data=analogRead(pot);
  data=data/4;
  analogWrite(led1,data);
  delay(data);

  //LED On-Off by Push-button
 if(digitalRead(tombol)==LOW){
    digitalWrite(led2,HIGH);
 }
 else{
    digitalWrite(led2,LOW);
 }

 //LED On-Off by Delay
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
}
