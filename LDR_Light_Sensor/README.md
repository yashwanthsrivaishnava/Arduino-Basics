# 🌞 LDR Light Sensor

## Overview

This project demonstrates how to measure the intensity of light using an LDR (Light Dependent Resistor) and an Arduino Uno.

The Arduino reads the analog voltage produced by the LDR circuit and uses the reading to control an LED.

---

## 🎯 Objectives

- Understand analog sensors
- Learn how an LDR works
- Read light intensity using an analog pin
- Control an LED based on sensor readings
- Display sensor values using the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LDR | 1 |
| 10kΩ Resistor | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

The LDR and resistor are connected as a voltage divider.

| Connection | Arduino |
|---|---|
| Voltage-divider output | A0 |
| LED | D13 |
| Ground | GND |
| Supply | 5V |

---

## ⚙️ Working Principle

An LDR changes its resistance depending on the amount of light falling on it.

The Arduino reads the resulting analog voltage using:

```cpp
analogRead()
```

The Arduino Uno converts the analog signal into a value between:

```text
0 - 1023
```

The program compares the sensor reading with a threshold.

If the reading is below the selected threshold, the LED is switched ON. Otherwise, the LED is switched OFF.

---

## 🔄 Working Process

```text
Light
  ↓
LDR
  ↓
Voltage Divider
  ↓
Arduino A0
  ↓
Analog Reading
  ↓
Threshold Comparison
  ↓
LED ON / OFF
```

---

## 📟 Serial Monitor

Open the Serial Monitor at:

```text
9600 baud
```

Example:

```text
Light Value: 235
Light Value: 412
Light Value: 587
Light Value: 721
```

The values change depending on the amount of light reaching the LDR.

---

## 💻 Arduino Functions Used

- `analogRead()`
- `digitalWrite()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`
- `pinMode()`

---

## 🚀 Applications

LDR-based systems can be used for:

- Automatic street lights
- Night lamps
- Light detection
- Smart lighting
- Security systems
- Robotics
- IoT systems

---

## 🔮 Future Improvements

- Build an automatic night lamp
- Add an LCD display
- Send readings to an ESP32
- Create an IoT light monitoring system
- Automatically adjust LED brightness using PWM

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
