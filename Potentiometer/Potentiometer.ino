// Potentiometer Controlled LED

const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);

  // Convert 0-1023 to 0-255
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

  Serial.print("Potentiometer: ");
  Serial.print(potValue);

  Serial.print(" | LED Brightness: ");
  Serial.println(brightness);

  delay(50);
}
