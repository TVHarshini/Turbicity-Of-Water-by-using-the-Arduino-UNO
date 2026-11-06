# 💧 IoT-Based Water Turbidity Monitoring System Using Arduino UNO

## 1. Project Overview

Water quality monitoring plays an important role in environmental protection and public health. Turbidity is one of the important parameters used to understand the clarity of water.

This project implements an IoT-based water turbidity monitoring system using Arduino UNO and an analog turbidity sensor.

The system detects suspended particles in water, processes sensor readings, estimates turbidity values and displays the readings through a 16×2 I2C LCD and Arduino Serial Monitor.

The project demonstrates a low-cost embedded system prototype for real-time water turbidity monitoring.

## 2. Objectives

- Develop a low-cost water turbidity monitoring system.
- Detect suspended particles using an analog turbidity sensor.
- Interface the turbidity sensor with Arduino UNO.
- Process analog sensor readings.
- Estimate turbidity values in NTU using a calibration formula.
- Display sensor readings on an LCD.
- Understand hardware and software integration in embedded systems.

## 3. Hardware Components Required

| Component | Purpose |
|---|---|
| Arduino UNO | Main microcontroller |
| Analog Turbidity Sensor | Detects water cloudiness |
| 16×2 I2C LCD | Displays sensor readings |
| Jumper Wires | Circuit connections |
| USB Cable | Power supply and programming |

## 4. Technologies Used

- Arduino UNO
- Embedded C
- Arduino IDE
- Analog Sensor Interfacing
- I2C Communication
- Serial Monitor

## 5. Working Principle

1. The turbidity sensor is placed in the water sample.
2. The sensor detects suspended particles using an optical sensing mechanism.
3. The sensor generates an analog voltage.
4. Arduino UNO reads the analog signal through pin A0.
5. The analog reading is converted into voltage.
6. The program estimates turbidity using a calibration equation.
7. The estimated reading is displayed on the LCD.
8. The readings are also monitored through the Arduino Serial Monitor.

## 6. Circuit Connections

| Component | Arduino UNO Pin |
|---|---|
| Turbidity Sensor VCC | 5V |
| Turbidity Sensor GND | GND |
| Turbidity Sensor OUT | A0 |
| LCD VCC | 5V |
| LCD GND | GND |
| LCD SDA | A4 |
| LCD SCL | A5 |

## 7. System Architecture

```text
        WATER SAMPLE
              |
              v
       TURBIDITY SENSOR
              |
        ANALOG SIGNAL
              |
              v
          ARDUINO UNO
              |
        DATA PROCESSING
              |
        NTU ESTIMATION
              |
         +----+----+
         |         |
         v         v
     LCD DISPLAY  SERIAL MONITOR
```

## 8. Key Features

- Real-time turbidity monitoring.
- Analog sensor data acquisition.
- Arduino-based data processing.
- Estimated NTU calculation.
- LCD-based output display.
- Serial Monitor visualization.
- Low-cost hardware implementation.

## 9. Hardware Implementation

The hardware prototype is developed by interfacing the analog turbidity sensor and 16×2 I2C LCD with Arduino UNO.

The sensor collects information about the water sample and sends analog signals to the microcontroller. Arduino processes the readings and displays the output through the LCD and Serial Monitor.

## 10. Results and Observations

The prototype was tested using different water samples to observe sensor voltage and estimated turbidity values.

The sensor output varied depending on the water sample.

The initial calibration formula produced unusually high estimated NTU values for clean tap water. Therefore, sensor-specific calibration is required to improve measurement accuracy.

## 11. Applications

- Experimental water turbidity monitoring.
- Environmental monitoring projects.
- Educational embedded system demonstrations.
- Basic water quality observation.
- IoT-based water monitoring research prototypes.

## 12. Limitations

- Requires sensor-specific calibration for accurate NTU estimation.
- Measures turbidity only, not complete water quality.
- Does not include wireless monitoring in the current implementation.
- Does not include cloud-based data storage.
- Turbidity readings alone cannot determine whether water is safe to drink.

## 13. Future Enhancements

- ESP8266 or ESP32 integration for wireless connectivity.
- IoT-based remote monitoring.
- Cloud-based data storage and visualization.
- Integration of pH and TDS sensors.
- Temperature monitoring.
- Historical data logging.
- Mobile application for remote monitoring.
- Automatic alerts based on calibrated turbidity thresholds.

## 14. Project Demonstration

The repository includes demonstration videos showing the hardware implementation, real-time working and simulation output.

## 15. Project Team

- Harshini T V
- Harini R

## 16. Institution

**Chennai Institute of Technology**

Department of Computer Science and Engineering

## 17. Project Domain

Embedded Systems | Internet of Things (IoT) | Environmental Monitoring | Arduino Programming

---

**Developed as an Embedded Programming Project**

*Monitoring Water Turbidity Through Embedded Technology.*

<img width="1527" height="860" alt="image" src="https://github.com/user-attachments/assets/cd27d657-0884-4508-ab6b-cf33cb78bce0" />
