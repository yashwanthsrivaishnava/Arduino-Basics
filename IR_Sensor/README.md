# 🔴 IR Obstacle Sensor

## Overview

This project demonstrates how to interface an IR obstacle detection sensor with an Arduino Uno.

The IR sensor detects whether an object is present in front of it. The Arduino reads the sensor's digital output and provides an indication through the onboard LED and Serial Monitor.

---

## 🎯 Objectives

- Learn how to interface an IR sensor with Arduino
- Understand digital sensor output
- Detect nearby objects
- Control an LED based on sensor input
- Display sensor status through Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| IR Obstacle Sensor Module | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### IR Sensor

| IR Sensor | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | Digital Pin 2 |

### LED

| LED | Arduino Uno |
|---|---|
| Positive | Digital Pin 13 |
| Negative | GND |

---

## ⚙️ Working Principle

The IR obstacle sensor uses infrared light to detect objects.

The sensor emits infrared light and detects the reflected signal.

The sensor module provides a digital output that can be read by the Arduino.

For a typical IR obstacle sensor:

```text
Object Detected → LOW
No Object       → HIGH
```

The Arduino uses this signal to control the LED.

---

## 🔄 Working Process

```text
Object
   ↓
IR Sensor
   ↓
Infrared Reflection
   ↓
Digital Output
   ↓
Arduino
   ↓
LED + Serial Monitor
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
IR Obstacle Sensor
No Object
No Object
Object Detected
Object Detected
No Object
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Infrared sensing
- Digital input
- Object detection
- Sensor interfacing
- Conditional statements
- Serial monitoring

---

## 🚀 Applications

IR obstacle sensors are commonly used in:

- Obstacle avoiding robots
- Line-following robots
- Object detection
- Automatic doors
- Robotics projects
- Industrial automation
- Proximity detection

---

## 🔮 Future Improvements

- Use multiple IR sensors
- Build a line-following robot
- Control a DC motor based on detection
- Add a buzzer warning
- Combine IR and ultrasonic sensors
- Use the sensor in a robotic navigation system

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
