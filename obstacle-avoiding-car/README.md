# Smart Obstacle Avoiding Robot Car

## Project Description
This project is an autonomous robot that detects obstacles using an ultrasonic sensor and navigates by itself.

It is a foundational robotics system used in AI, automation, and self-driving prototypes.

---

## Working Principle

The robot continuously measures distance using HC-SR04 sensor:

- Distance > 20 cm → Move forward  
- Distance < 20 cm → Stop and turn  

The system makes real-time decisions without human control.

---

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- L298N Motor Driver
- DC Motors (2x)
- Robot chassis
- Battery pack

---

## Circuit Overview

### Ultrasonic Sensor
- TRIG → Pin 9  
- ECHO → Pin 10  

### Motors (L298N)
- IN1 → 2  
- IN2 → 3  
- IN3 → 4  
- IN4 → 5  

---

## Concepts Learned
- Sensor-based decision making
- Motor driver control
- Real-time embedded logic
- Robotics navigation basics

---

## Real-World Applications
- Self-driving robots
- Industrial automation bots
- Delivery robots
- Smart vacuum cleaners

---

## Future Upgrades
- Add line following capability  
- Add Bluetooth control override  
- Add AI path planning  
- Upgrade to ESP32 for IoT control  
