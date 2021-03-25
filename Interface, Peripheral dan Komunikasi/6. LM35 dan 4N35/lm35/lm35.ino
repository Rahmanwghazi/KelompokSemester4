float tempC; 
int reading; 
int tempPin = A0; 

void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL); 
  pinMode(tempPin,INPUT);
} 
void loop() { 
  reading = analogRead(tempPin); 
  tempC = reading / 9.31; 
  Serial.println(tempC);
} 
