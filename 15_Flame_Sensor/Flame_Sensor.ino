int flameSensor = 2;
int ledPin = 13;

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int flameState = digitalRead(flameSensor);

  if (flameState == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("🔥 Flame Detected!");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Flame Detected");
  }

  delay(500);
}
