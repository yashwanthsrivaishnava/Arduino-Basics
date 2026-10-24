# 🚦 Traffic Light System – Arduino

## Overview

This project demonstrates a basic traffic light system using an Arduino Uno and three LEDs.

The Arduino controls the Red, Yellow, and Green LEDs in a timed sequence to simulate traffic signals at a road intersection.

The system repeats the sequence continuously and displays each traffic light status through the Serial Monitor.

---

## 🎯 Objectives

- Interface multiple LEDs with Arduino Uno
- Understand digital output control
- Implement timed sequences
- Learn to use `digitalWrite()` and `delay()`
- Simulate a basic traffic signal
- Display system status through the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| LED | Arduino Uno |
|---|---|
| Red LED anode (+) | Digital Pin 10 through 220Ω resistor |
| Yellow LED anode (+) | Digital Pin 9 through 220Ω resistor |
| Green LED anode (+) | Digital Pin 8 through 220Ω resistor |
| All LED cathodes (−) | GND |

Each LED must have a separate current-limiting resistor.

---

## ⚙️ Working Principle

The Arduino controls three LEDs to simulate traffic signals.

The sequence is:

1. **Red light:** Vehicles stop for 5 seconds.
2. **Green light:** Vehicles may proceed for 5 seconds.
3. **Yellow light:** Vehicles prepare to stop for 2 seconds.

After the yellow light phase, the cycle returns to red and repeats.

The `delay()` function controls how long each light remains active.

---

## 🔄 Working Process

```text
Start
  ↓
Red LED ON
  ↓
Wait 5 Seconds
  ↓
Green LED ON
  ↓
Wait 5 Seconds
  ↓
Yellow LED ON
  ↓
Wait 2 Seconds
  ↓
Repeat
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
RED - STOP
GREEN - GO
YELLOW - WAIT
RED - STOP
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `Serial.begin()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Digital output control
- LED interfacing
- Multiple output sequencing
- Timing and delays
- Basic automation logic
- Serial communication

---

## 🚀 Applications

Traffic light simulations are useful for learning about:

- Traffic signal control
- Embedded systems
- Automation systems
- Microcontroller programming
- Smart city concepts
- Sequential control systems

---

## 🔮 Future Improvements

- Add a pedestrian crossing button.
- Add a countdown display using an LCD.
- Use a buzzer for pedestrian alerts.
- Add a vehicle detection sensor.
- Build a two-road intersection simulation.
- Implement non-blocking timing using `millis()`.

---

## ⚠️ Safety Note

This is an educational model only. It must not be used to control real road traffic signals.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
