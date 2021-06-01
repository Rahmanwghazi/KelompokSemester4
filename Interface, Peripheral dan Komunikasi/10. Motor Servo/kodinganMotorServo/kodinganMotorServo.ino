#include <Servo.h>
Servo myservo; 
int potpin = A0;    
int val;
void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}

void loop() {
    val = analogRead (potpin);
    val = map(val,0,1023,0,180);
    myservo.write(val);
    Serial.print(val);
    Serial.println(" derajat");
    delay(15);                                            
}
