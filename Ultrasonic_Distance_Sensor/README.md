# 📏 Ultrasonic Distance Sensor

## Overview

This project demonstrates distance measurement using an HC-SR04 ultrasonic sensor and an Arduino Uno.

The sensor sends ultrasonic sound waves and measures the time taken for the reflected wave to return. The Arduino uses this time to calculate the distance of an object.

---

## 🎯 Objectives

- Interface an HC-SR04 sensor with Arduino
- Understand ultrasonic distance measurement
- Measure the distance of nearby objects
- Learn pulse timing using Arduino
- Display distance using Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| HC-SR04 | Arduino Uno |
|---|---|
| VCC | 5V |
| TRIG | Digital Pin 9 |
| ECHO | Digital Pin 10 |
| GND | GND |

---

## ⚙️ Working Principle

The HC-SR04 uses ultrasonic sound waves to measure distance.

The Arduino sends a short pulse to the TRIG pin.

The sensor then transmits an ultrasonic pulse.

When the sound wave hits an object, it reflects back toward the sensor.

The ECHO pin remains HIGH for the time taken by the sound wave to travel to the object and return.

The Arduino uses this time to calculate the distance.

---

## 🧮 Distance Calculation

The distance is calculated using:

```text
Distance = (Time × Speed of Sound) / 2
```

The division by 2 is required because the sound travels:

```text
Sensor → Object → Sensor
```

In the program, the approximate speed of sound is taken as:

```text
0.0343 cm/µs
```

---

## 🔄 Working Process

```text
Arduino
   ↓
Trigger Pulse
   ↓
HC-SR04
   ↓
Ultrasonic Wave
   ↓
Object
   ↓
Reflected Wave
   ↓
HC-SR04 Echo
   ↓
Arduino
   ↓
Distance Calculation
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
Distance: 12.45 cm
Distance: 15.32 cm
Distance: 22.18 cm
Distance: 35.67 cm
```

The displayed value changes as the object moves closer to or farther away from the sensor.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `delayMicroseconds()`
- `pulseIn()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`

---

## 📚 Concepts Learned

- Ultrasonic sensing
- Time-of-flight measurement
- Pulse generation
- Pulse duration measurement
- Distance calculation
- Serial communication

---

## 🚀 Applications

Ultrasonic sensors are commonly used in:

- Obstacle avoiding robots
- Distance measurement systems
- Parking assistance systems
- Water level monitoring
- Autonomous robots
- Object detection
- Industrial automation

---

## 🔮 Future Improvements

- Add an LED obstacle warning
- Add a buzzer warning
- Display distance on an LCD
- Mount the sensor on a servo
- Build an obstacle avoiding robot
- Create a parking sensor system

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
