#  RGB LED Color Control

## Overview

This project demonstrates how to control a three-color RGB LED using an Arduino Uno.

An RGB LED contains three individual LED channels:

- Red
- Green
- Blue

By controlling the brightness of each channel using PWM, different colors can be produced.

---
⚠️ Important

The code above assumes a common-cathode RGB LED.

Use a resistor for each color channel.

If you have a common-anode RGB LED, tell me before uploading because the code needs to be inverted.

---

## 🎯 Objectives

- Learn RGB LED control
- Understand PWM
- Control multiple outputs
- Generate different colors by combining RGB channels
- Understand analog-style output using `analogWrite()`

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| RGB LED | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

This project uses a **common-cathode RGB LED**.

| RGB LED | Arduino Uno |
|---|---|
| Red | D9 through resistor |
| Green | D10 through resistor |
| Blue | D11 through resistor |
| Common Cathode | GND |

---

## ⚙️ Working Principle

An RGB LED contains three separate LED channels.

Each channel is controlled using PWM.

The PWM values range from:

```text
0 → OFF
255 → Maximum brightness
```

Different combinations of Red, Green and Blue produce different colors.

For example:

```text
Red + Green = Yellow
Green + Blue = Cyan
Red + Blue = Purple
Red + Green + Blue = White
```

---

## 🔄 Working Sequence

The program displays the following colors:

```text
Red
↓
Green
↓
Blue
↓
Yellow
↓
Cyan
↓
Purple
↓
White
↓
OFF
↓
Repeat
```

Each color remains active for one second.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `analogWrite()`
- `delay()`
- Custom functions
- `setup()`
- `loop()`

---

## 📊 RGB Values

| Color | Red | Green | Blue |
|---|---:|---:|---:|
| Red | 255 | 0 | 0 |
| Green | 0 | 255 | 0 |
| Blue | 0 | 0 | 255 |
| Yellow | 255 | 255 | 0 |
| Cyan | 0 | 255 | 255 |
| Purple | 255 | 0 | 255 |
| White | 255 | 255 | 255 |
| OFF | 0 | 0 | 0 |

---

## 🚀 Applications

RGB LEDs are commonly used in:

- Status indicators
- Smart lighting
- IoT devices
- User interfaces
- Robotics
- Mood lighting
- Embedded systems

---

## 🔮 Future Improvements

- Control RGB color using a potentiometer
- Control colors using push buttons
- Create smooth color transitions
- Control RGB LED through Bluetooth
- Control RGB LED using an ESP32 web interface

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
