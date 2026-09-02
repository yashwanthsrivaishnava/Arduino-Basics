# 🎚️ Potentiometer Controlled LED

## Overview

This project demonstrates how to use a potentiometer as an analog input to control the brightness of an LED using an Arduino Uno.

The potentiometer provides a variable analog voltage. The Arduino reads this value and converts it into a PWM value to control the LED brightness.

---

## 🎯 Objectives

- Learn how to read a potentiometer
- Understand analog input
- Understand PWM output
- Control LED brightness using an analog input
- Learn how to map one range of values to another

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| 10kΩ Potentiometer | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### Potentiometer

| Potentiometer Pin | Arduino |
|---|---|
| Left | GND |
| Middle | A0 |
| Right | 5V |

### LED

| LED | Arduino |
|---|---|
| Positive | D9 through 220Ω resistor |
| Negative | GND |

---

## ⚙️ Working Principle

The potentiometer produces an analog voltage between 0V and 5V.

Arduino reads this value using:

```cpp
analogRead()
```

The Arduino Uno converts the analog signal into a value from:

```text
0 - 1023
```

This value is then converted to a PWM range:

```text
0 - 255
```

using the `map()` function.

The resulting PWM value controls the brightness of the LED.

---

## 🔄 Process

```text
Potentiometer
      ↓
Analog Voltage
      ↓
analogRead()
      ↓
0 - 1023
      ↓
map()
      ↓
0 - 255
      ↓
PWM Output
      ↓
LED Brightness
```

---

## 📊 Expected Behavior

| Potentiometer Position | LED |
|---|---|
| Minimum | OFF / Very Low |
| Middle | Medium Brightness |
| Maximum | Maximum Brightness |

The LED brightness changes smoothly as the potentiometer is rotated.

---

## 💻 Arduino Functions Used

- `analogRead()`
- `analogWrite()`
- `map()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`

---

## 📟 Serial Monitor

Open the Serial Monitor at **9600 baud**.

Example:

```text
Potentiometer: 125 | LED Brightness: 31
Potentiometer: 512 | LED Brightness: 127
Potentiometer: 850 | LED Brightness: 212
```

---

## 🚀 Applications

- LED brightness control
- Motor speed control
- User input systems
- Robotics control interfaces
- Electronic control panels
- Embedded systems

---

## 🔮 Future Improvements

- Use the potentiometer to control motor speed
- Control servo position
- Add an LCD display
- Use multiple potentiometers for robot control

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
