int led1=10;
int led2=9;
int led3=6;

int tom1=8;
int tom2=7;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  pinMode(tom1,INPUT);
  pinMode(tom2,INPUT);
}

void loop() {
  if (digitalRead(tom1)==LOW){
    for(int a=0;a<3;a++){
      digitalWrite(led1,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      delay(300);
      digitalWrite(led2,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      delay(300);
      digitalWrite(led3,HIGH);
      delay(300);
      digitalWrite(led3,LOW);
      delay(300);
    }
  }
  else if(digitalRead(tom2)==LOW){
    for(int b=0;b<3;b++){
      digitalWrite(led3,HIGH);
      delay(300);
      digitalWrite(led3,LOW);
      delay(300);
      digitalWrite(led2,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      delay(300);
      digitalWrite(led1,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      delay(300);
    }
  }
    

}
