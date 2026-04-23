# PIR Motion Detection Alarm System

## Project Description
This project detects human movement using a PIR sensor and triggers a buzzer and LED alarm when motion is detected.

It simulates basic security systems used in homes and offices.



## Working Principle

The PIR sensor detects infrared radiation changes caused by human movement.

- No movement → LOW signal  
- Movement detected → HIGH signal  

Arduino reacts instantly and triggers alarm components.



## Components Used
- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- Buzzer
- LED
- 220Ω resistor



## Circuit Connections

### PIR Sensor
- VCC → 5V  
- GND → GND  
- OUT → Pin 2  

### Buzzer
- + → Pin 8  
- - → GND  

### LED
- Pin 13 → LED (+)  
- LED (-) → 220Ω resistor → GND  



## Concepts Learned
- Digital sensor input
- Real-time event detection
- Interrupt-like behavior
- Basic security system logic



## Real-World Applications
- Home security systems
- Automatic lighting systems
- Smart surveillance systems
- Motion-triggered alarms



## Future Upgrades
- Send alert to mobile (IoT)
- Add camera trigger system
- Integrate with smart home system
- Add delay-based alarm control
