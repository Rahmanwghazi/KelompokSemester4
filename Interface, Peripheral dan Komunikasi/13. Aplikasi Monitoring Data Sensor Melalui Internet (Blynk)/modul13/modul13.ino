#include <BlynkSimpleStream.h>
// Pin Assignments
int redPin=13,yellowPin=12,greenPin=11; 
int LDR1;
int LDR2;
BlynkTimer timer;
char auth[] = "vmPaFK-rcC5AhI8St2bgAzStuQrYHyA2";

void setup(){
  pinMode(redPin,OUTPUT); 
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, Serial); 
  timer.setInterval(1000L, getSendData);
}

void loop(){
  timer.run();
  Blynk.run();
}
void getSendData(){
  LDR1=analogRead(A0);
  if(LDR1>=500){
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin,HIGH),
    digitalWrite(greenPin,HIGH),
    delay(1000);
    digitalWrite(redPin,LOW),
    digitalWrite(yellowPin,LOW),
    digitalWrite(greenPin,LOW),
    delay(1000);
  }
  LDR2=analogRead(A1);
  Blynk.virtualWrite(1, LDR1);
  Blynk.virtualWrite(2, LDR2); 
}
