// IR Obstacle Sensor

const int irPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  Serial.println("IR Obstacle Sensor");
}

void loop() {

  int sensorState = digitalRead(irPin);

  if (sensorState == LOW) {
    // Object detected
    digitalWrite(ledPin, HIGH);

    Serial.println("Object Detected");
  } 
  else {
    // No object detected
    digitalWrite(ledPin, LOW);

    Serial.println("No Object");
  }

  delay(300);
}
