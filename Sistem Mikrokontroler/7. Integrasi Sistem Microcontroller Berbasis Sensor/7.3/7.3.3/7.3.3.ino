int pir = A5;
int led =A1;
int buz = A2;

void setup(){
  pinMode(buz,OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(pir,INPUT);
}
void loop(){
  int pirState=digitalRead(pir);                                          
  if(pirState==HIGH){
    for(int a=0;a<3;a++){
      digitalWrite(buz, HIGH);
      digitalWrite(led,HIGH);
      delay(500);
    }
  }
  
}
