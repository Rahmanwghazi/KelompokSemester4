int led1=11;
int led2=10;
int led3=9;
int tom=7;
int tekan=0;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(tom,INPUT);
}

void loop(){
  if(digitalRead(tom)==LOW){
    tekan=tekan+1;
  }
  if (tekan>0){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(500);
   }
}
