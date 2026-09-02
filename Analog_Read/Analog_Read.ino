// Analog Read Example

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  Serial.print("Analog Value: ");
  Serial.println(sensorValue);

  delay(500);
}
