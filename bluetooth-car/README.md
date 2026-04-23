# Bluetooth RC Robot Car (App Controlled)

## Project Description
This project is a smartphone-controlled robot car using Bluetooth communication.

It acts like a real RC car and is a foundation for IoT robotics systems.

---

## Working Principle

1. Mobile app sends command via Bluetooth (HC-05)
2. Arduino receives command via Serial communication
3. Arduino controls motor driver (L298N)
4. Robot moves accordingly in real-time

---

## Mobile App Setup (IMPORTANT)

Use app: **Bluetooth RC Controller**

Set commands:
- Forward → F  
- Backward → B  
- Left → L  
- Right → R  
- Stop → S  

---

## 🔧 Components Used
- Arduino Uno  
- HC-05 Bluetooth Module  
- L298N Motor Driver  
- DC Motors (2x)  
- Robot chassis  
- Battery pack  

---

## 🔌 Circuit Connections

### Bluetooth Module
- TX → Arduino RX (Pin 0)  
- RX → Arduino TX (Pin 1)  
- VCC → 5V  
- GND → GND  

### Motor Driver
- IN1 → Pin 2  
- IN2 → Pin 3  
- IN3 → Pin 4  
- IN4 → Pin 5  

---

## Concepts Learned
- Bluetooth communication (HC-05)
- Serial data handling
- Motor driver control
- Real-time robotics control

---

## Real-World Applications
- RC cars
- Smart robots
- Industrial remote control systems
- Delivery robots (basic version)

---

## Future Upgrades
- Add obstacle avoidance system
- Add voice control via mobile
- Upgrade to ESP32 WiFi control
- Add camera streaming module
