# 💡 Digital Output

## Overview

This project demonstrates how to configure and control a digital output pin using an Arduino Uno.

The Arduino sends HIGH and LOW signals to Digital Pin 13 to control an LED.

---

## Objectives

- Understand digital output pins
- Learn how to configure a pin as OUTPUT
- Control an LED using digital signals
- Understand HIGH and LOW logic levels

---

## Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## Pin Configuration

| Arduino Pin | Function |
|---|---|
| D13 | LED Output |
| GND | Ground |

---

## Working Principle

The Arduino configures Digital Pin 13 as an output using `pinMode()`.

The program then sends two digital states:

- **HIGH** → LED ON
- **LOW** → LED OFF

A one-second delay is used between each state.

---

## Arduino Functions Used

- `setup()`
- `loop()`
- `pinMode()`
- `digitalWrite()`
- `delay()`

---

## Expected Output

The LED continuously follows this sequence:

```text
LED ON
  ↓
1 second
  ↓
LED OFF
  ↓
1 second
  ↓
Repeat
```

---

## Applications

- LED indicators
- Relay control
- Motor control
- Robotics
- Automation systems
- Embedded systems

---

## Future Improvements

- Control multiple LEDs
- Add push-button control
- Control a relay
- Control motors using digital outputs

---

## Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
