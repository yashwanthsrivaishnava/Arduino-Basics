# 🎚️ Analog Read

## Overview

This project demonstrates how to read an analog signal using an Arduino Uno.

Unlike a digital input, which provides only HIGH or LOW, an analog input can provide a range of values. The Arduino Uno's ADC converts the analog voltage into a digital value from 0 to 1023.

A potentiometer is used as an example analog input.

---

## 🎯 Objectives

- Understand analog input
- Learn how Arduino's ADC works
- Read values using `analogRead()`
- Display sensor values using the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Potentiometer | 1 |
| Breadboard | 1 |
| Jumper Wires | 3 |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Potentiometer | Arduino Uno |
|---|---|
| Left Pin | GND |
| Middle Pin | A0 |
| Right Pin | 5V |

---

## ⚙️ Working Principle

The potentiometer produces a variable voltage between 0V and 5V.

The Arduino reads this voltage through analog pin A0.

The `analogRead()` function converts the input voltage into a value between:

```text
0 → 1023
```

Approximately:

```text
0V → 0
2.5V → 512
5V → 1023
```

The values are displayed on the Serial Monitor.

---

## 💻 Arduino Functions Used

- `analogRead()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`
- `delay()`

---

## 📊 Expected Output

Open the Serial Monitor at **9600 baud**.

Example:

```text
Analog Value: 125
Analog Value: 356
Analog Value: 512
Analog Value: 781
Analog Value: 1002
```

The value changes when the potentiometer is rotated.

---

## 📚 Concepts Learned

- Analog signals
- Analog-to-Digital Conversion (ADC)
- Arduino analog pins
- Serial communication
- Variable voltage measurement

---

## 🚀 Applications

Analog inputs are commonly used with:

- Temperature sensors
- Light sensors
- Soil moisture sensors
- Potentiometers
- Gas sensors
- Joysticks
- Other analog sensors

---

## 🔮 Future Improvements

- Control LED brightness based on the analog value
- Display the value on an LCD
- Use a real sensor instead of a potentiometer
- Send analog data to an ESP32 or IoT dashboard

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
