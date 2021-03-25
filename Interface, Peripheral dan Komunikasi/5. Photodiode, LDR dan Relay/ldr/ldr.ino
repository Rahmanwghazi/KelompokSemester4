int lightPin = A0; 
int ledPin = 13; 
void setup() 
{ 
 Serial.begin(9600); 
 pinMode( ledPin, OUTPUT ); 
} 
void loop() 
{ 
Serial.println(analogRead(lightPin)); 
analogWrite(ledPin, analogRead(lightPin)/4); 
delay(10); 
} 

//C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_91725/ldr.ino.hex
