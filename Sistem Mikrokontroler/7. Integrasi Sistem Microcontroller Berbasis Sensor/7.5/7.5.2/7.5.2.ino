int lm = A2;
int led = A1;

void setup(){
  pinMode(lm,INPUT);
  pinMode(led, OUTPUT);
}
void loop(){
  double suhu = analogRead(lm)/2-1;

  if(suhu>=38.5){
    for (int a=0;a<3;a++){
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
    }delay(5000);
  }
}
