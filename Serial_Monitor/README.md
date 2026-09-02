# 🖥️ Serial Monitor

## Overview

This project demonstrates serial communication between an Arduino Uno and a computer using the Arduino IDE Serial Monitor.

The Arduino sends messages through the USB connection, and the messages can be viewed in the Serial Monitor.

---

## 🎯 Objectives

- Understand serial communication
- Learn how to initialize the Serial interface
- Send text from Arduino to a computer
- Display information using the Serial Monitor
- Understand baud rate

---

## 🛠️ Hardware Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| USB Cable | 1 |

No external components are required.

---

## 💻 Software

- Arduino IDE
- Arduino Uno Board

---

## ⚙️ Working Principle

The Arduino communicates with the computer through its USB connection.

The following command starts serial communication:

```cpp
Serial.begin(9600);
```

The value `9600` represents the baud rate.

Messages are sent using:

```cpp
Serial.println();
```

---

## ▶️ How to Run

1. Connect the Arduino Uno to the computer using a USB cable.
2. Open `Serial_Monitor.ino` in Arduino IDE.
3. Select the correct Arduino board and COM port.
4. Upload the program.
5. Open the Serial Monitor.
6. Set the baud rate to **9600**.
7. Observe the messages.

---

## 📊 Expected Output

```text
Arduino Serial Monitor Started
Hello from Arduino!
Hello from Arduino!
Hello from Arduino!
Hello from Arduino!
```

A new message is displayed every second.

---

## 💡 Arduino Functions Used

- `Serial.begin()`
- `Serial.println()`
- `delay()`
- `setup()`
- `loop()`

---

## 📚 Concepts Learned

- Serial communication
- Baud rate
- USB communication
- Serial Monitor
- Sending data from a microcontroller

---

## 🚀 Applications

Serial communication is commonly used for:

- Debugging Arduino programs
- Sensor data monitoring
- Robot debugging
- Motor control
- Sending commands to robots
- Communication between microcontrollers
- Monitoring embedded systems

---

## 🔮 Future Improvements

- Read user input from Serial Monitor
- Control LEDs using serial commands
- Control servo motors through serial commands
- Display sensor values
- Build a serial-controlled robotic system

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
