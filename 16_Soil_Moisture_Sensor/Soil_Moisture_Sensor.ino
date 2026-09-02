int soilSensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(soilSensor);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  delay(1000);
}
