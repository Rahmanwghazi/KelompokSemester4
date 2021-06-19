#include <HCSR04.h>
#include <Servo.h>
#include <LiquidCrystal_SR_LCD3.h>

const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 3;
const int PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK,PIN_LCD_STROBE);

const int trigPin = 5;
const int echoPin = 6;

Servo myServo;

void setup()
{
    lcd.begin(16, 2);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    myServo.attach(9);
}

void loop()
{
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;

    if (distance <= 10)
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Terima Kasih");
        myServo.write(0);
        delay(500);
        myServo.write(180);
        delay(2000);
    }
    else
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Dekatkan Tangan");
        myServo.write(180);
    }
    delay(200);
}
