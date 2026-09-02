# 🔢 4×4 Keypad – Arduino

## Overview

This project demonstrates how to interface a 4×4 matrix keypad with an Arduino Uno.

A matrix keypad allows multiple buttons to be connected using fewer Arduino pins than individually connecting each button.

When a key is pressed, the Arduino detects the corresponding character and displays it on the Serial Monitor.

---

## 🎯 Objectives

- Interface a 4×4 matrix keypad with Arduino
- Understand matrix keypad operation
- Detect individual key presses
- Learn to use the Keypad library
- Display keypad input through Serial Monitor
- Understand row and column scanning

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| 4×4 Matrix Keypad | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Keypad Pin | Arduino Uno |
|---|---|
| R1 | Digital Pin 9 |
| R2 | Digital Pin 8 |
| R3 | Digital Pin 7 |
| R4 | Digital Pin 6 |
| C1 | Digital Pin 5 |
| C2 | Digital Pin 4 |
| C3 | Digital Pin 3 |
| C4 | Digital Pin 2 |

The exact physical pin order may vary depending on the keypad module.

---

## ⚙️ Working Principle

A 4×4 matrix keypad contains:

```text
4 Rows × 4 Columns = 16 Keys
```

The keys are arranged in a matrix of rows and columns.

Instead of connecting every key individually, the Arduino monitors the row and column connections to determine which key has been pressed.

The Keypad library handles the scanning process and returns the character corresponding to the pressed key.

The keypad contains:

```text
1  2  3  A
4  5  6  B
7  8  9  C
*  0  #  D
```

---

## 🔄 Working Process

```text
User Presses Key
       ↓
Keypad Matrix
       ↓
Row & Column Detection
       ↓
Arduino
       ↓
Keypad Library
       ↓
Identify Key
       ↓
Serial Monitor
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
4x4 Keypad
Press any key...

Key Pressed: 1
Key Pressed: 5
Key Pressed: A
Key Pressed: 9
Key Pressed: #
```

The displayed character depends on the key pressed.

---

## 💻 Arduino Functions Used

- `Keypad()`
- `getKey()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`

---

## 📚 Concepts Learned

- Matrix keypad interfacing
- Row and column scanning
- Digital input
- Arduino libraries
- User input systems
- Serial communication

---

## 🚀 Applications

Matrix keypads are commonly used in:

- Digital door locks
- Security systems
- Password systems
- ATM-style interfaces
- Calculator projects
- Access control systems
- Industrial control panels
- Robotics projects

---

## 🔮 Future Improvements

- Create a password-based door lock
- Add an LCD display
- Add a servo motor for door control
- Create a digital calculator
- Add a buzzer for key feedback
- Build an access-control system
- Combine keypad input with sensors

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
