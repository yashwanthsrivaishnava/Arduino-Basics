int waterSensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int waterLevel = analogRead(waterSensor);

  Serial.print("Water Level Sensor Value: ");
  Serial.println(waterLevel);

  delay(1000);
}
