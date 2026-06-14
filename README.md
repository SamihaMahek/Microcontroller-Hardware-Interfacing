# Microcontroller Hardware Interfacing
A comparative implementation mapping the execution of automated spatial sensing scripts across different hardware microcontrollers.

---

## 🚀 Project Overview
This repository showcases the implementation of embedded C firmware designed to capture environmental distance and climate parameters. It contrasts standard 8-bit hardware architectures with high-performance 32-bit system-on-chip platforms.

### Hardware Architectural Analysis
* **📟 Ultrasonic Sensing (`arduino_ultrasonic.ino` / `esp32_ultrasonic.ino`):** Captures real-time object tracking data using an HC-SR04 sensor, comparing standard 8-bit AVR logic operating at 5V against high-performance 32-bit float math on the ESP32 platform at 3.3V logic levels.
* **🌡️ Climate Monitoring (`arduino_dht11.ino` / `esp32_dht11.ino`):** Interfaces with a DHT11 temperature and humidity sensor module, utilizing external library abstractions to extract and display real-time environmental metrics over a serial tracking pipeline.

---

## 🛠️ Technical Profile
* **Programming Syntax:** Embedded C
* **Target Hardware Platforms:** Arduino Uno / ESP32 DevKit
* **Sensor Profile:** HC-SR04 Non-Contact Ultrasonic Module & DHT11 Climate Matrix Sensor

