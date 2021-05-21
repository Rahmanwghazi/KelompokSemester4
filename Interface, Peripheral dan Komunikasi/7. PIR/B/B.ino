//Inisialisasi waktu kalibrasi, pin, dll
int calibrationTime = 30;
long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;
int pirPin = 12;
int ledPin = A5;

void setup()
{
    Serial.begin(9600);
    pinMode(pirPin, INPUT);              //PIR sebagai input
    pinMode(ledPin, OUTPUT);             //LED sebagai output
    digitalWrite(pirPin, LOW);           //PIN diset ke LOW
    Serial.print("calibrating sensor "); //Menampilkan teks ke Serial
    for (int i = 0; i < calibrationTime; i++)
    { //Kalibrasi selama 30 detik
        Serial.print(".");
        delay(1000);
    }
    Serial.println(" done");
    Serial.println("SENSOR ACTIVE");
    delay(50);
}

void loop()
{
    if (digitalRead(pirPin) == HIGH)
    { //Jika PIR HIGH, maka LED menyala
        digitalWrite(ledPin, HIGH);
        if (lockLow)
        { //Untuk menampilkan teks dibawah jika terdapat gerakan yang terdeteksi
            lockLow = false;
            Serial.println("---");
            Serial.print("motion detected at ");
            Serial.print(millis() / 1000);
            Serial.println(" sec");
            delay(50);
        }
        takeLowTime = true;
    }
    if (digitalRead(pirPin) == LOW)
    { //Jika PIR LOW, maka LED mati
        digitalWrite(ledPin, LOW);
        if (takeLowTime)
        {
            lowIn = millis();
            takeLowTime = false;
        }
        if (!lockLow && millis() - lowIn > pause)
        { //Jika locklow FALSE dan milis -lowIn lebih besar dari pause
            lockLow = true;
            Serial.print("motion ended at ");
            Serial.print((millis() - pause) / 1000);
            Serial.println(" sec");
            delay(50);
        }
    }
}
