byte ldr = A0;
int nilai;
void setup() {
  Serial.begin(9600);
}

void loop() {
  nilai = analogRead(ldr);
  
  if (nilai > 300) {
   Serial.println("LDR ONN");
  }
  else {
    Serial.println("LDR OFF");
    
  }

}
