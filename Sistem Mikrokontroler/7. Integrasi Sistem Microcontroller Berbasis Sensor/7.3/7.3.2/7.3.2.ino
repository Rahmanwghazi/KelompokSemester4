int pir = A5;
int buz = A2;

void setup(){
  pinMode(buz,OUTPUT);
  pinMode(pir,INPUT);
}
void loop(){
  int pirState=analogRead(pir);
  int volume=pirState/4;                                          
  delay(500);
  analogWrite(buz, volume);
  
}
