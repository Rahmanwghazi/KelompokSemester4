byte ldr = A0;
int nilai;
void setup() { //C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_186451/No_6.ino.hex
  Serial.begin(9600);
}

void loop() {
  nilai = analogRead(ldr);
  
  if (nilai > 500) {
   Serial.println("LIGHT On");
  }
  else {
    Serial.println("LIGHT Off");
    
  }

}
