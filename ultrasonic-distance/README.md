# Ultrasonic Distance Measurement System

## Project Description
This project measures the distance of objects using an ultrasonic sensor and displays it in real-time on the Serial Monitor.

It is widely used in robotics and automation systems.

---

## Working Principle

The HC-SR04 sensor sends ultrasonic sound waves:

1. Arduino sends a trigger pulse  
2. Sensor emits sound waves  
3. Waves reflect from object  
4. Echo pin receives reflected waves  
5. Arduino calculates time difference  
6. Distance is computed using formula:

Distance = (Time × Speed of Sound) / 2

---

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Jumper wires

---

## Circuit Connections

- VCC → 5V  
- GND → GND  
- TRIG → Pin 9  
- ECHO → Pin 10  

---

## Concepts Learned
- Time-based distance calculation
- Sensor interfacing
- Pulse generation and reading
- Real-time data processing

---

## Real-World Applications
- Obstacle avoiding robots
- Parking sensors in cars
- Liquid level detection
- Security systems

---

## Future Upgrades
- Add LCD display for distance
- Integrate with buzzer alarm
- Use in obstacle avoiding robot
- Connect to IoT dashboard
