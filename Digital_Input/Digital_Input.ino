// Digital Input Example

const int inputPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int inputState = digitalRead(inputPin);

  if (inputState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
