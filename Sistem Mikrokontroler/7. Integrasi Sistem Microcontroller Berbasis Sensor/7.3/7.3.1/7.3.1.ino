int led = A1;
int pir = A5;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
}
void loop(){
  int pirState=analogRead(pir);
  int terang=pirState/4;                                          
  delay(500);
  analogWrite(led, terang);
  
}
