# 🌡️ DHT11 Temperature & Humidity Sensor

## Overview

This project demonstrates how to measure temperature and humidity using a DHT11 sensor and an Arduino Uno.

The sensor provides environmental data that is displayed on the Arduino IDE Serial Monitor.

---

## 🎯 Objectives

- Learn how to interface a DHT11 sensor with Arduino
- Measure temperature
- Measure relative humidity
- Read sensor data using a library
- Display sensor readings through Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| DHT11 Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| DHT11 | Arduino Uno |
|---|---|
| VCC | 5V |
| DATA | Digital Pin 2 |
| GND | GND |

---

## 📚 Required Library

This project uses the:

**DHT sensor library**

Install it through:

```text
Arduino IDE
→ Sketch
→ Include Library
→ Manage Libraries
→ Search "DHT sensor library"
```

---

## ⚙️ Working Principle

The DHT11 sensor measures:

- Temperature
- Relative Humidity

The Arduino communicates with the sensor through the DATA pin.

The measured values are read by the Arduino and displayed on the Serial Monitor.

---

## 🔄 Working Process

```text
DHT11 Sensor
     ↓
Temperature + Humidity
     ↓
Arduino Uno
     ↓
DHT Library
     ↓
Serial Monitor
     ↓
Display Readings
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
DHT11 Temperature and Humidity Monitor

Temperature: 28.00 °C
Humidity: 62.00 %
--------------------

Temperature: 28.00 °C
Humidity: 63.00 %
--------------------
```

---

## 💻 Arduino Functions Used

- `dht.begin()`
- `dht.readTemperature()`
- `dht.readHumidity()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`

---

## 📊 Parameters Measured

| Parameter | Unit |
|---|---|
| Temperature | °C |
| Relative Humidity | % |

---

## 🚀 Applications

DHT11-based systems can be used for:

- Environmental monitoring
- Smart home systems
- Weather monitoring
- IoT projects
- Greenhouse monitoring
- Robotics
- Embedded systems

---

## 🔮 Future Improvements

- Add an LCD display
- Connect the sensor to ESP32
- Create an IoT dashboard
- Store readings in a database
- Add temperature and humidity alerts

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
