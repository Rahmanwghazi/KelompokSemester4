String control; 
void setup() {
pinMode(13, OUTPUT); 
Serial.begin(9600);
} 
void loop() {
 while (Serial.available())
 { 
 delay(10); 
 char c = Serial.read(); 
 control += c; 
 } 
 if (control.length() > 0)
 {
 Serial.println(control); 
 if(control == "on")
 {
 digitalWrite(13, HIGH);
 } 
 if(control == "off")
 {
 digitalWrite(13, LOW);
 } 
control="";
}
}
