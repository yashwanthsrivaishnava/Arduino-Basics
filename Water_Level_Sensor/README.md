# 💧 Water Level Sensor – Arduino

## 📌 Overview

This project demonstrates how to interface a water level sensor with an Arduino UNO to monitor the level of water in a container.

The water level sensor produces an analog signal depending on how much of the sensing area is in contact with water. The Arduino reads this signal through an analog input and displays the sensor value on the Serial Monitor.

---

## 🎯 Objectives

- Learn how to interface a water level sensor with Arduino.
- Understand analog sensor inputs.
- Read sensor values using `analogRead()`.
- Monitor changes in water level.
- Display sensor readings through the Serial Monitor.

---

## 🧰 Components Required

- Arduino UNO
- Water Level Sensor
- Breadboard
- Jumper Wires
- USB Cable
- Container with Water

---

## 🔌 Circuit Connections

| Water Level Sensor | Arduino UNO |
|---|---|
| S | A0 |
| + | 5V |
| - | GND |

The sensor output is connected to the Arduino's analog pin A0.

---

## ⚙️ Working Principle

The water level sensor contains conductive sensing traces.

When water comes into contact with these traces, the electrical characteristics of the sensor change.

The Arduino reads the resulting analog signal using `analogRead()`.

The Arduino UNO converts the analog signal into a value between:

```text
0 – 1023
