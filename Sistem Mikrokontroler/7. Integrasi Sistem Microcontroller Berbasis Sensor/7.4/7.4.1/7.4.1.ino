int pingPin = 4; // Trigger Pin of Ultrasonic Sensor
int echoPin = 3; // Echo Pin of Ultrasonic Sensor
int led = A1;
void setup()
{
Serial.begin(9600); // Starting Serial Terminal
}

void loop()
{
long duration;
int bright;
pinMode(pingPin, OUTPUT);
pinMode(led, OUTPUT);

digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);

pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
bright = duration/6500*25;
Serial.println(bright);
analogWrite(led,bright);

delay(100);
}
