# 🔘 Push Button

## Overview

The Push Button project demonstrates how to use a push button as a digital input with an Arduino Uno. When the button is pressed, the onboard LED connected to Digital Pin 13 turns ON. When the button is released, the LED turns OFF.

This project introduces digital input handling and is one of the fundamental examples in embedded systems programming.

---

## Objectives

- Learn digital input using a push button
- Read button states with Arduino
- Control an LED based on user input
- Understand the use of INPUT_PULLUP mode

---

## Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Push Button | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | 4 |
| USB Cable | 1 |

---

## Circuit Connections

| Arduino Pin | Component |
|--------------|-----------|
| D2 | Push Button |
| D13 | LED |
| GND | Button & LED Ground |

---

## Working Principle

The push button is connected to Digital Pin 2 using the internal pull-up resistor (`INPUT_PULLUP`).

- When the button is **not pressed**, the pin reads HIGH and the LED remains OFF.
- When the button is **pressed**, the pin is connected to GND, reads LOW, and the LED turns ON.

---

## Arduino Functions Used

- setup()
- loop()
- pinMode()
- digitalRead()
- digitalWrite()

---

## Expected Output

- Button Released → LED OFF
- Button Pressed → LED ON

---

## Applications

- Home automation switches
- Industrial control panels
- Menu navigation systems
- User input interfaces
- Robotics control buttons

---

## Future Improvements

- Button debouncing
- Toggle ON/OFF using one press
- Multiple button interface
- LCD menu navigation

---

## Folder Structure

```
Push_Button/
│
├── Push_Button.ino
├── README.md
└── button_demo.png
```

---

## Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
