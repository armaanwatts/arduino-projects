# Water Level Indicator System

## Project Description
This project monitors water levels in a tank and displays status using LEDs and a buzzer.

It is commonly used in smart water management systems.

---

## Working Principle

Water acts as a conductor. When it touches different probe levels:

- LOW level → Green LED ON  
- MID level → Green + Yellow LED ON  
- HIGH level → All LEDs ON + Buzzer ON  

---

## Components Used
- Arduino Uno  
- 3 × LEDs (Green, Yellow, Red)  
- 3 × 220Ω resistors  
- Buzzer  
- Water level probes / sensor wires  

---

## Circuit Connections

### LEDs
- Pin 2 → Green LED  
- Pin 3 → Yellow LED  
- Pin 4 → Red LED  

### Water Level Probes
- Pin 5 → Low level  
- Pin 6 → Mid level  
- Pin 7 → High level  

### Buzzer
- Pin 8 → Buzzer +  
- GND → Buzzer -  

---

## Concepts Learned
- Digital input logic
- Multi-sensor system handling
- Real-world automation logic
- Conditional state systems

---

## Real-World Applications
- Water tank monitoring systems
- Industrial liquid level systems
- Smart irrigation systems
- Overflow protection systems

---

## Future Upgrades
- Add IoT water level monitoring
- Send alerts to mobile
- Auto motor pump control
- Cloud dashboard integration
