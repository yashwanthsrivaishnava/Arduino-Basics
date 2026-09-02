# 💡 Analog Write / PWM LED Control

## Overview

This project demonstrates Pulse Width Modulation (PWM) using an Arduino Uno to control the brightness of an LED.

The brightness is gradually increased and then gradually decreased, creating a smooth fading effect.

---

## 🎯 Objectives

- Understand PWM
- Learn how `analogWrite()` works
- Control LED brightness
- Understand duty cycle
- Learn PWM-based output control

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Arduino | Component |
|---|---|
| D9 | LED positive through 220Ω resistor |
| GND | LED negative |

---

## ⚙️ Working Principle

Arduino Uno does not produce a continuously variable analog voltage using `analogWrite()`.

Instead, it generates a PWM signal.

The PWM value ranges from:

```text
0 → 255
```

Where:

```text
0   = LED OFF
255 = Maximum brightness
```

Intermediate values produce different apparent brightness levels.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `analogWrite()`
- `for()` loop
- `delay()`

---

## 📊 PWM Values

| PWM Value | Approximate Output |
|---:|---|
| 0 | OFF |
| 64 | Low brightness |
| 128 | Medium brightness |
| 192 | High brightness |
| 255 | Maximum brightness |

---

## ▶️ Working Sequence

```text
Brightness increases
        ↓
    Maximum
        ↓
Brightness decreases
        ↓
      OFF
        ↓
     Repeat
```

---

## 🚀 Applications

PWM is widely used for:

- LED brightness control
- DC motor speed control
- Servo-related control systems
- Fan speed control
- Robotics
- Embedded systems

---

## 📚 Concepts Learned

- PWM
- Duty cycle
- Analog-style output
- `analogWrite()`
- Loops
- LED brightness control

---

## 🔮 Future Improvements

- Control brightness using a potentiometer
- Control brightness using an LDR
- Use PWM for DC motor speed control
- Create multiple LED fading effects

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
