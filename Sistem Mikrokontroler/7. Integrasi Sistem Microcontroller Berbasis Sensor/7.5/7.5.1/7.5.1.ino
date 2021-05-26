int lm35 = A2;
int led = A1;

void setup(){
  pinMode(lm35,INPUT);
  pinMode(led, OUTPUT);
}
void loop(){
  int suhu = analogRead(lm35)/2-1;
  analogWrite(led,suhu*2);
  delay(50);
}
