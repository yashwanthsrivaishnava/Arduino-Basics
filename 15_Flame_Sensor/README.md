# 🔥 Flame Sensor – Arduino

## 📌 Overview

This project demonstrates how to interface a flame sensor with an Arduino UNO to detect the presence of a flame.

The flame sensor detects infrared radiation produced by a flame and provides a digital output signal. When a flame is detected, the Arduino turns ON an LED and displays the detection status through the Serial Monitor.

---

## 🎯 Objectives

- Learn how to interface a flame sensor with Arduino.
- Understand digital sensor input.
- Detect the presence of a flame.
- Control an LED based on sensor input.
- Display sensor status using the Serial Monitor.

---

## 🧰 Components Required

- Arduino UNO
- Flame Sensor Module
- LED
- 220Ω Resistor (for external LED)
- Jumper Wires
- Breadboard
- USB Cable

---

## 🔌 Circuit Connections

### Flame Sensor

| Flame Sensor Pin | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| DO | Digital Pin 2 |

### LED

| LED Pin | Arduino UNO |
|---|---|
| Anode (+) | Digital Pin 13 |
| Cathode (-) | GND |

The built-in Arduino LED connected to pin 13 can also be used.

---

## ⚙️ Working Principle

The flame sensor detects infrared radiation emitted by a flame.

The sensor provides a digital signal through its DO (Digital Output) pin.

The Arduino continuously reads this signal.

- `LOW` → Flame detected
- `HIGH` → No flame detected

When a flame is detected, the Arduino:

1. Turns ON the LED.
2. Prints `Flame Detected!` on the Serial Monitor.

When there is no flame:

1. The LED remains OFF.
2. The Serial Monitor displays `No Flame Detected`.

> Note: Some flame sensor modules may use opposite logic. The sensor output can be adjusted using the onboard potentiometer.

---

## 💻 Arduino Code

The program reads the digital output of the flame sensor and controls an LED based on the detected condition.

```cpp
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
    Serial.println("Flame Detected!");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Flame Detected");
  }

  delay(500);
}
