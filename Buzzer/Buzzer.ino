// Arduino Buzzer Example

const int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 1000);  // Generate 1 kHz tone
  delay(1000);

  noTone(buzzerPin);      // Stop the tone
  delay(1000);
}
