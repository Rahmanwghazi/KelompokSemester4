int pd = A0;
int led =A1;
int buz = A2;

void setup(){
  pinMode(buz,OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(pd,INPUT);
}
void loop(){
  int cahaya=digitalRead(pd);                                          
  if(cahaya==HIGH){
    for(int a=0;a<3;a++){
      digitalWrite(buz, HIGH);
      digitalWrite(led,HIGH);
      delay(500);
    }
  }
  
}
