int lightPin = A0; // untuk set pin A0
int ledPin = 13; // set pin 13 unuk LED
void setup() 
{ 
 Serial.begin(9600); 
 pinMode( ledPin, OUTPUT ); // menset pin ledpin sebagai output
} 
void loop() 
{ 
Serial.println(analogRead(lightPin)); // memprintt ke serial monitor hasil dari analogread lightpin
analogWrite(ledPin, analogRead(lightPin)/4); // menuliskan ke ouput dengan hasil  yang di bagi 4
delay(10); // delay 10ms
} 

//C:\\Users\\mrwgj\\AppData\\Local\\Temp\\arduino_build_91725/ldr.ino.hex
