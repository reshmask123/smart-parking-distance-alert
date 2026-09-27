# Smart Parking Distance Alert

A simple Arduino-based parking assistance system that detects the distance of an object using a PING))) ultrasonic distance sensor and provides visual and audio alerts.

##  Features

-  Measures object distance using an ultrasonic sensor
-  Green LED indicates a safe distance
-  Yellow LED indicates caution
-  Red LED indicates a very close object
-  Buzzer provides an audio warning
-  Designed and simulated using Tinkercad

## Components Used

- Arduino Uno R3
- PING))) Ultrasonic Distance Sensor
- Green LED
- Yellow LED
- Red LED
- 220Ω Resistors
- Piezo Buzzer
- Breadboard
- Jumper Wires

##  Working

The ultrasonic sensor measures the distance between the sensor and an object.

- **More than 50 cm** →  Safe
- **21–50 cm** → Caution + Slow Beep
- **20 cm or less** →  Danger + Fast Beep

## 🔌 Pin Connections

| Component | Arduino Pin |
|---|---|
| Green LED | D2 |
| Yellow LED | D3 |
| Red LED | D4 |
| Buzzer | D5 |
| PING))) SIG | D7 |

##  Tools Used

- Arduino
- Tinkercad Circuits
- Arduino C/C++

##  Project Goal

The goal of this project is to create a simple parking assistance system that helps indicate how close an object is to a vehicle using visual and audio alerts.

##  Author

**Reshma SK**

---

 This project was created as a beginner-friendly Arduino and Tinkercad electronics project.
