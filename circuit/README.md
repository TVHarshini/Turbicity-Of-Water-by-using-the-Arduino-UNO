
# Circuit Diagram and Connections

## 1. Overview

This section explains the hardware circuit connections of the IoT-Based Water Turbidity Monitoring System using Arduino UNO.

The system uses an analog turbidity sensor to measure the clarity of water. The Arduino UNO processes the sensor readings and displays the estimated turbidity value on a 16x2 I2C LCD.

## 2. Circuit Diagram

![Water Turbidity Monitoring Circuit Diagram](circuit_diagram.png)

## 3. Components Required

- Arduino UNO
- Analog Turbidity Sensor
- 16x2 I2C LCD Display
- Breadboard
- Jumper Wires
- USB Cable
- Water Sample

## 4. Hardware Connections

### Turbidity Sensor Connections

| Turbidity Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| Analog Output (AO) | A0 |

### LCD Display Connections

| I2C LCD | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

## 5. Working Principle

1. The turbidity sensor is placed in the water sample.
2. The sensor detects suspended particles in the water.
3. It generates an analog output signal.
4. Arduino UNO reads the signal through analog pin A0.
5. The analog value is converted into voltage.
6. The program estimates the turbidity value in NTU.
7. The estimated reading is displayed on the 16x2 I2C LCD.
8. The readings are also displayed in the Arduino Serial Monitor.

## 6. Communication

- The turbidity sensor communicates with Arduino through an analog signal.
- The LCD communicates with Arduino using the I2C protocol.
- The I2C LCD address used in this project is 0x27.
- Serial Monitor communication is configured at 9600 baud.

## 7. Important Note

The NTU value is an estimate based on the calibration equation used in the prototype. Sensor-specific calibration is required to improve measurement accuracy.

The configured 50 NTU threshold is used only for the prototype's display classification. Turbidity measurement alone cannot determine whether water is safe to drink.

## 8. Project

**Project Title:** IoT-Based Water Turbidity Monitoring System Using Arduino UNO

**Controller:** Arduino UNO

**Domain:** Embedded Systems and IoT
