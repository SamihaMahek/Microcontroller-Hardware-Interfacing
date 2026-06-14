# Microcontroller Hardware Interfacing
A comparative implementation mapping the execution of automated spatial sensing scripts across different hardware microcontrollers.

---

## 🚀 Project Overview
This repository showcases the implementation of embedded C firmware designed to capture environmental distance parameters. It contrasts standard 8-bit hardware architectures with high-performance 32-bit Wi-Fi-enabled system-on-chip platforms.

### Hardware Architectural Analysis
* **📟 Arduino Uno Script (`arduino_ultrasonic.ino`):** Written for standard AVR boards operating at 5V, running metrics logging routines over a high-speed $115200$ baud serial telemetry channel.
* **⚡ ESP32 Core Script (`esp32_ultrasonic.ino`):** Re-mapped for the 32-bit Tensilica platform operating at 3.3V logic levels. It features refined `float` floating-point processing algorithms to extract spatial readings.

---

## 🛠️ Technical Profile
* **Programming Syntax:** Embedded C
* **Target Hardware Platforms:** Arduino Uno / ESP32 DevKit
* **Sensor Profile:** HC-SR04 Non-Contact Ultrasonic Ranging Module
