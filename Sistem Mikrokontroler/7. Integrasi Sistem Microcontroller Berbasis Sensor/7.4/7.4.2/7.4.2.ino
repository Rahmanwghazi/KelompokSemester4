int pingPin = 4; // Trigger Pin of Ultrasonic Sensor
int echoPin = 3; // Echo Pin of Ultrasonic Sensor
int buz = A2;
void setup()
{
Serial.begin(9600); // Starting Serial Terminal
}

void loop()
{
long duration;
int volume;
pinMode(pingPin, OUTPUT);
pinMode(buz, OUTPUT);

digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);

pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
volume = duration/6500*25;
Serial.println(volume);
analogWrite(buz,volume);

delay(100);
}
