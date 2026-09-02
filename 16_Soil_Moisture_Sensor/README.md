# 🌱 Soil Moisture Sensor – Arduino

## 📌 Overview

This project demonstrates how to interface a soil moisture sensor with an Arduino UNO to measure the moisture level of soil.

The analog output of the sensor is connected to an analog input of the Arduino. The Arduino reads the sensor value and displays it on the Serial Monitor.

---

## 🎯 Objectives

- Learn how to interface a soil moisture sensor with Arduino.
- Understand analog sensor inputs.
- Read sensor values using `analogRead()`.
- Monitor soil moisture through the Serial Monitor.
- Understand the basics of sensor-based monitoring systems.

---

## 🧰 Components Required

- Arduino UNO
- Soil Moisture Sensor Module
- Jumper Wires
- Breadboard
- USB Cable
- Soil

---

## 🔌 Circuit Connections

| Soil Moisture Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |

The Digital Output (DO) pin is not required for this project.

---

## ⚙️ Working Principle

The soil moisture sensor detects the moisture content of the soil.

The sensor produces an analog voltage corresponding to the measured condition. The Arduino reads this voltage through analog pin A0 using `analogRead()`.

The Arduino UNO's ADC converts the analog signal into a value from:

```text
0 to 1023
