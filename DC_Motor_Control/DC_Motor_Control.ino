// DC Motor Control using Arduino Uno and L298N

const int ENA = 9;
const int IN1 = 8;
const int IN2 = 7;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  Serial.begin(9600);

  Serial.println("DC Motor Control");
}

void loop() {

  // Motor rotates forward
  Serial.println("Motor Forward");

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);

  delay(3000);

  // Stop motor
  Serial.println("Motor Stop");

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);

  delay(2000);

  // Motor rotates backward
  Serial.println("Motor Reverse");

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);

  delay(3000);

  // Stop motor
  Serial.println("Motor Stop");

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);

  delay(2000);
}
