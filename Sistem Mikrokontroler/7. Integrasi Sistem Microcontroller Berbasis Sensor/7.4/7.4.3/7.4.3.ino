int pingPin = 4; // Trigger Pin of Ultrasonic Sensor
int echoPin = 3; // Echo Pin of Ultrasonic Sensor
int buz = A2;
int led = A1;

void setup()
{
Serial.begin(9600); // Starting Serial Terminal
}

void loop()
{
long duration;
int ping;
pinMode(pingPin, OUTPUT);
pinMode(buz, OUTPUT);
pinMode(led, OUTPUT);

digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);

pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
ping = duration/6500*25;
Serial.println(ping);

if(ping>=100){
  digitalWrite(led,HIGH);
  digitalWrite(buz,HIGH);
}
else{
  digitalWrite(buz,LOW);
  digitalWrite(led,LOW);
}

delay(100);
}
