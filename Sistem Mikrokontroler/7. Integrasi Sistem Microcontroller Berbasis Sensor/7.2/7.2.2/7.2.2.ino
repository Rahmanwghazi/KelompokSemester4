int pd = A0;
int buz = A2;

void setup(){
  pinMode(buz,OUTPUT);
  pinMode(pd,INPUT);
}
void loop(){
  int cahaya=analogRead(pd);
  int volume=cahaya/4;                                          
  delay(500);
  analogWrite(buz, volume);
  
}
