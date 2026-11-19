# Control an LED from a Web Dashboard Using ESP8266 and KiwisIoT

## Project Overview

This project demonstrates wireless LED control using a NodeMCU ESP8266 and the KiwisIoT web dashboard. Users can remotely switch an LED ON or OFF through an internet-connected interface.

## Hardware Components

- NodeMCU ESP8266
- LED
- Current-limiting resistor
- Breadboard and jumper wires

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- KiwisIoT Web Dashboard

## Circuit Connections

Connect the LED to a GPIO pin on the NodeMCU through a current-limiting resistor. Connect the LED cathode to GND.

_Use the GPIO pin configured in your project._

## Working Principle

The ESP8266 connects to Wi-Fi and communicates with the KiwisIoT platform. When the user changes the LED control on the web dashboard, the command is received by the NodeMCU, which switches the LED ON or OFF.

## KiwisIoT Dashboard

- Control the LED remotely.
- Switch the LED ON or OFF.
- Send commands through the web dashboard.

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the project configuration.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

## Applications

- Smart home lighting
- Wireless device control
- IoT automation
- Remote electrical control demonstrations

## Project Reference

**Hackster.io Project:**  
[Control an LED from a Web Dashboard](https://www.hackster.io/harispidy07/control-an-led-from-a-web-dashboard-cd4f73)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Connecting everyday hardware with simple web-based IoT control._
