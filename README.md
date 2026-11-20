# Advanced Climate & Irrigation Hub
### Arduino-Based Automated Greenhouse Control System

## 1. Project Overview

The Advanced Climate & Irrigation Hub is an Arduino-based automated greenhouse management system designed to monitor and regulate environmental conditions through integrated sensors, actuators, and visual indicators.

The system combines temperature monitoring, light detection, and soil moisture measurement to automate ventilation and irrigation processes. It uses an external power supply and relay-based switching to control high-current DC motors independently of the Arduino's control circuitry.

The project demonstrates practical applications of industrial automation, embedded systems, sensor integration, and automated environmental control.

## 2. Main Objectives

- Monitor greenhouse temperature, light intensity, and soil moisture.
- Automatically activate ventilation when the temperature exceeds 32°C.
- Activate the irrigation pump when soil moisture drops below 30%.
- Implement a three-color LED status indication system.
- Display real-time sensor readings and system status on a 16x2 LCD.
- Separate low-voltage control logic from high-current motor power circuits.

## 3. Hardware Components

| Component | Function |
|---|---|
| Arduino | Main control unit |
| Temperature Sensor | Measures environmental temperature |
| Photoresistor (LDR) | Detects light intensity |
| Soil Moisture Sensor | Measures soil moisture |
| Relay Module | Controls external power to the pump |
| DC Motor (Fan) | Provides ventilation |
| DC Motor (Pump) | Simulates the irrigation system |
| Red LED | Critical alert indicator |
| Yellow LED | Observation mode indicator |
| Green LED | Optimal conditions indicator |
| LCD 16x2 | Displays system information |
| External 9V/12V Power Supply | Supplies power to DC motors |

## 4. System Operating Logic

### 4.1 Automatic Ventilation

The temperature sensor continuously monitors the greenhouse temperature.

- Temperature above 32°C: The ventilation fan is activated.
- Temperature at or below 32°C: The ventilation fan is deactivated.

### 4.2 Automatic Irrigation

The soil moisture sensor monitors the moisture level of the soil.

- Soil moisture below 30%: The relay activates the irrigation pump.
- Soil moisture at or above 30%: The irrigation pump is deactivated.

### 4.3 Three-LED Status Monitoring

The system uses three LEDs to communicate environmental conditions.

| LED Indicator | Operating Condition |
|---|---|
| Green LED | Optimal conditions: Light above 500 and moisture above 50% |
| Yellow LED | Observation Mode: Either light or moisture is below optimal levels |
| Red LED | Critical Alert: Moisture below 30% and pump activated |

## 5. LCD Monitoring Interface

The 16x2 LCD provides real-time information about the greenhouse environment.

**First Row:**
- Temperature (T)
- Light intensity (L)

**Second Row:**
- Soil moisture (MOIST)
- Pump status (P: ON/OFF)

This interface allows users to monitor the system without connecting to a computer.

## 6. Power Management and Circuit Design

An important feature of this project is the use of multiple power sources.

The Arduino handles sensor readings, control logic, and status indicators, while an external 9V/12V power supply provides the required power for the DC motors.

A relay is used to switch external power to the irrigation pump.

This design demonstrates the importance of separating control electronics from high-current loads in automated systems.

## 7. Technologies and Engineering Concepts

- Arduino Microcontroller Programming
- Embedded Systems
- Industrial Automation
- Environmental Monitoring
- Sensor Integration
- Relay-Based Switching
- DC Motor Control
- Conditional Logic (if-else)
- LCD Display Communication
- Power Management

## 8. Project Applications

The concepts demonstrated in this project can be applied to:

- Smart greenhouse management.
- Automated agricultural irrigation.
- Environmental monitoring systems.
- Industrial climate control.
- Automated ventilation systems.
- Smart farming technologies.

## 9. Project Files

```text
Advanced-Climate-Irrigation-Hub/
├── circuit.png
├── code.ino
└── README.md
```

- `circuit.png` – Circuit design and hardware connections.
- `code.ino` – Arduino source code.
- `README.md` – Project documentation.

## 10. Conclusion

The Advanced Climate & Irrigation Hub demonstrates how microcontrollers, sensors, actuators, and relay-based power management can be integrated into an automated environmental control system.

Through the combination of ventilation, irrigation, and real-time monitoring, the project illustrates fundamental engineering principles used in modern industrial automation and smart agriculture.

**Project Category:** Industrial Automation / Embedded Systems

**Development Platform:** Arduino and Tinkercad Circuits
