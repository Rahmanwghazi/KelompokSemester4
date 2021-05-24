int ldr = A0;
int buz = A2;

void setup(){
  pinMode(buz,OUTPUT);
  pinMode(ldr,INPUT);
}
void loop(){
  int suara=analogRead(ldr);
  int volume=suara/4;                                          
  delay(500);
  analogWrite(buz, volume);
  
}
