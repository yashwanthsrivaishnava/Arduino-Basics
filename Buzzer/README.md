# 🔊 Buzzer

## Overview

This project demonstrates how to control a buzzer using an Arduino Uno.

The Arduino generates a 1 kHz tone for one second and then turns the buzzer OFF for one second. This process repeats continuously.

---

## 🎯 Objectives

- Learn how to control a buzzer using Arduino
- Understand digital output
- Generate an audio tone
- Learn to use `tone()` and `noTone()`

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Buzzer | 1 |
| Jumper Wires | 2 |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Buzzer | Arduino Uno |
|---|---|
| Positive (+) | Digital Pin 8 |
| Negative (-) | GND |

---

## ⚙️ Working Principle

The Arduino uses the `tone()` function to generate a sound signal on Digital Pin 8.

The sequence is:

```text
Buzzer ON
    ↓
1 second
    ↓
Buzzer OFF
    ↓
1 second
    ↓
Repeat
```

The frequency used in this project is **1000 Hz**.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `tone()`
- `noTone()`
- `delay()`
- `setup()`
- `loop()`

---

## ▶️ How to Run

1. Connect the buzzer to Digital Pin 8 and GND.
2. Open `Buzzer.ino` in Arduino IDE.
3. Select your Arduino Uno and correct COM port.
4. Upload the program.
5. The buzzer will produce a tone.
6. The tone will repeat every two seconds.

---

## 📊 Expected Output

```text
Buzzer ON  → 1 second
Buzzer OFF → 1 second
Buzzer ON  → 1 second
Buzzer OFF → 1 second
```

---

## 🚀 Applications

Buzzers are commonly used for:

- Alarm systems
- Warning indicators
- Robot alerts
- Electronic doorbells
- Industrial warning systems
- User notifications
- Embedded systems

---

## 🔮 Future Improvements

- Create different tones
- Play simple melodies
- Add a push button
- Create an alarm system
- Use a sensor to trigger the buzzer

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
