int relay = A5; // men set pin A5 sebagai relay
void setup() { 
pinMode(relay, OUTPUT); // menset relay sebagai output
} 
void loop() { 
 digitalWrite(relay, HIGH); //menyalakan relay keadaan HIGH
delay(1000); // memberi delay selama 1 detik
digitalWrite(relay, LOW); //menyalakan relay keadaan LOW
delay(1000); // memberi delay selama 1 detik
} 
