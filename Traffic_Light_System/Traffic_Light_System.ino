// Traffic Light System using Arduino Uno

const int redLED = 10;
const int yellowLED = 9;
const int greenLED = 8;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Red light ON
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);

  Serial.println("RED - STOP");
  delay(5000);

  // Green light ON
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);

  Serial.println("GREEN - GO");
  delay(5000);

  // Yellow light ON
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);

  Serial.println("YELLOW - WAIT");
  delay(2000);
}
