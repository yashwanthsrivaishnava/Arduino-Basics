# 🔌 Digital Input

## Overview

This project demonstrates how to read a digital signal using an Arduino Uno.

The Arduino reads the state of a digital input pin and controls an LED according to the input signal.

---

## Objectives

- Understand digital input pins
- Learn how to read HIGH and LOW signals
- Control an output based on an input
- Understand basic digital I/O programming

---

## Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Push Button / Digital Sensor | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## Pin Configuration

| Arduino Pin | Function |
|---|---|
| D2 | Digital Input |
| D13 | LED Output |
| GND | Ground |

---

## Working Principle

The Arduino continuously reads the signal present on Digital Pin 2.

- **HIGH** → LED turns ON
- **LOW** → LED turns OFF

The `digitalRead()` function is used to read the input state.

---

## Arduino Functions Used

- `setup()`
- `loop()`
- `pinMode()`
- `digitalRead()`
- `digitalWrite()`

---

## Expected Output

| Input | LED |
|---|---|
| HIGH | ON |
| LOW | OFF |

---

## Applications

- Digital sensors
- Switch-based control
- Robotics
- Automation systems
- Embedded systems

---

## Future Improvements

- Add multiple digital inputs
- Control multiple LEDs
- Add sensors
- Use the input to control a motor

---

## Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
