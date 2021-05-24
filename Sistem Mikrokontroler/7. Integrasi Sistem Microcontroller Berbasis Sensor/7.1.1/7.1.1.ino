int led = A1;
int ldr = A0;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
}
void loop(){
  int cahaya=analogRead(ldr);
  int terang=cahaya/4;                                          
  delay(500);
  analogWrite(led, terang);
  
}
