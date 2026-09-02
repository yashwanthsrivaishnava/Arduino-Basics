# ⚙️ DC Motor Control – Arduino

## Overview

This project demonstrates how to control the direction and speed of a DC motor using an Arduino Uno and an L298N motor driver.

The Arduino sends control signals to the L298N driver, which provides the required current to drive the motor.

The motor is programmed to rotate forward, stop, rotate in reverse, and stop again.

---

## 🎯 Objectives

- Interface a DC motor with Arduino Uno
- Understand motor driver operation
- Control motor direction
- Control motor speed using PWM
- Learn basic motor control
- Understand the importance of external motor power

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| DC Motor | 1 |
| L298N Motor Driver | 1 |
| External Power Supply | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### L298N to Arduino Uno

| L298N | Arduino Uno |
|---|---|
| ENA | Digital Pin 9 |
| IN1 | Digital Pin 8 |
| IN2 | Digital Pin 7 |
| GND | GND |

### Motor to L298N

| DC Motor | L298N |
|---|---|
| Terminal 1 | OUT1 |
| Terminal 2 | OUT2 |

### Power Supply

| L298N | Connection |
|---|---|
| Motor VCC | External Motor Power |
| GND | Power Supply GND |

The Arduino GND and motor driver GND must share a common ground.

---

## ⚙️ Working Principle

A DC motor requires more current than an Arduino GPIO pin should provide directly.

Therefore, an L298N motor driver is used between the Arduino and the motor.

The Arduino controls the motor driver using:

```text
ENA
IN1
IN2
```

`IN1` and `IN2` determine the direction of rotation.

`ENA` controls the motor speed using PWM.

---

## 🔄 Motor Direction

The motor direction is controlled using the following combinations:

| IN1 | IN2 | Motor |
|---:|---:|---|
| HIGH | LOW | Forward |
| LOW | HIGH | Reverse |
| LOW | LOW | Stop |

---

## 🎚️ Speed Control

The `analogWrite()` function is used to control the PWM signal on ENA.

The code uses:

```cpp
analogWrite(ENA, 200);
```

Arduino PWM values range from:

```text
0 – 255
```

Therefore:

```text
0   → Motor stopped
128 → Approximately 50% PWM duty cycle
255 → 100% PWM duty cycle
```

The actual motor speed also depends on the motor, driver, load, and power supply.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Control Signals
     ↓
L298N Motor Driver
     ↓
DC Motor
     ↓
Forward / Reverse Rotation
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
DC Motor Control
Motor Forward
Motor Stop
Motor Reverse
Motor Stop
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `analogWrite()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- DC motor control
- Motor drivers
- Motor direction control
- PWM speed control
- External motor power
- Common ground
- Embedded system output control

---

## 🚀 Applications

DC motor control is commonly used in:

- Mobile robots
- Robotic vehicles
- Conveyor systems
- Automated machines
- Robotic arms
- Motorized mechanisms
- Industrial automation
- Embedded control systems

---

## 🔮 Future Improvements

- Control the motor using push buttons
- Add a potentiometer for speed control
- Control two motors independently
- Build a 2-wheel robot
- Add Bluetooth control
- Add ESP32 Wi-Fi control
- Add encoder feedback for closed-loop control

---

## ⚠️ Safety Note

Do not connect the DC motor directly to an Arduino GPIO pin.

Use an appropriate motor driver and external power supply.

Make sure the motor power supply voltage is suitable for the motor and driver.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
