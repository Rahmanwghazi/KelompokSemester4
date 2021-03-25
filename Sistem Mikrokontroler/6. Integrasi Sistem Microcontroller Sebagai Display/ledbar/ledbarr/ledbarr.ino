const int analogPin = A0;   // pin potensio
const int ledCount = 10;    // nomer yang ada di ledbar
//C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_552392/ledbarr.ino.hex
int ledPins[] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};   // pin yang terhubung ke ledbar


void setup() {
  // mengulangi isi pin aray dan seet semuanya menjadi output
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  // membuat variable potensiometer:
  int sensorReading = analogRead(analogPin);
  // petakan hasil ke kisaran dari 0 ke jumlah LED:
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }
    // turn off all pins higher than the ledLevel:
    else {
      digitalWrite(ledPins[thisLed], LOW);
    }
  }
}
