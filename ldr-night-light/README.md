# LDR Automatic Night Light System

## Project Description
This project automatically controls an LED based on surrounding light intensity using an LDR sensor.

It simulates real-world systems like street lights and smart home lighting.

---

## Working Principle

The system uses a voltage divider circuit with an LDR:

- Light intensity increases → resistance decreases → analog value increases  
- Light intensity decreases → resistance increases → analog value decreases  

Arduino reads this value and controls LED accordingly.

---

## Components Used
- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- 220Ω resistor
- 10kΩ resistor
- Breadboard
- Jumper wires

---

## Circuit Connections

### LED
- Pin 9 → LED (+)
- LED (-) → 220Ω resistor → GND

### LDR (Voltage Divider)
- LDR → 5V
- LDR → A0
- A0 → 10kΩ resistor → GND

---

## Concepts Learned
- Analog input (analogRead)
- Sensor calibration
- Voltage divider circuit
- Basic automation logic

---

## Real-World Applications
- Street lighting systems
- Night lamps
- Energy-saving automation systems
- Smart home lighting

---

## Improvements (Future Upgrades)
- Add relay to control AC bulbs
- Add manual override switch
- Connect to IoT (ESP8266)
- Add brightness levels instead of ON/OFF
