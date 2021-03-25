int ldr=A0;
int cahaya=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  cahaya=analogRead(ldr);
  if(cahaya>10){
    Serial.println("LIGHT ON");
  }
  else if (cahaya<=10){
    Serial.println("LIGHT OFF");
  }
  delay(500);

}
