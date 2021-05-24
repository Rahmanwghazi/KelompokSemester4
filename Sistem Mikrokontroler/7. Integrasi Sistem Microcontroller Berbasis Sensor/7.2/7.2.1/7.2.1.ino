int led = A1;
int pd = A0;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(pd,INPUT);
}
void loop(){
  int cahaya=analogRead(pd);
  int terang=cahaya/4;                                          
  delay(500);
  analogWrite(led, terang);
  
}
