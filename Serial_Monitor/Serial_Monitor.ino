// Serial Monitor Example

void setup() {
  Serial.begin(9600);

  Serial.println("Arduino Serial Monitor Started");
}

void loop() {
  Serial.println("Hello from Arduino!");

  delay(1000);
}
