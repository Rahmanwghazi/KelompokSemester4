int led1=10;
int led2=9;
int led3=8;
int in1=7;
int in2=6;
int in3=5;
void setup() {
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
}

void loop() {
  if(digitalRead(in1)==LOW){
    digitalWrite(led1,HIGH);
    delay(500);
  }
else if(digitalRead(in1)==HIGH){
digitalWrite(led1,LOW);
}
}
