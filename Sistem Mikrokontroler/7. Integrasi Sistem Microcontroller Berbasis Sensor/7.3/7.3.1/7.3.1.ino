int led = A1;
int pir = A5;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
}
void loop(){
  int pirState = analogRead(pir);
  int outputValue = map(pirState, 0, 1023, 0, 255);                                      
  delay(500);
  analogWrite(led, outputValue);
  Serial.print(outputValue);
}
