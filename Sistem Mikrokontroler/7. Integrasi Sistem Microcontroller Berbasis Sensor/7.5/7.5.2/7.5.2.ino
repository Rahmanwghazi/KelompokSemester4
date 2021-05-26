int lm35 = A2;
int led = A1;

void setup(){
  pinMode(lm35,INPUT);
  pinMode(led, OUTPUT);
}
void loop(){
  double suhu = analogRead(lm35)/2-1;

  if(suhu>=38.5){
    for (int a=0;a<3;a++){
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
    }delay(5000);
  }
}
