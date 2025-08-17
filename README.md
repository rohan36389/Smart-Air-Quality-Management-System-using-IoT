Smart Air Quality Management System Using IoT
Project Overview

The Smart Air Quality Management System is an IoT-based solution designed to monitor harmful gases such as LPG and Carbon Monoxide (CO) in the environment. The system ensures safety by detecting dangerous levels of these gases and instantly triggering alerts through a buzzer and Blynk mobile application.

Due to cost constraints, instead of controlling an air purifier, this project currently uses a buzzer for local alerts, while still maintaining real-time remote monitoring via IoT.

Features

Real-time gas monitoring using MQ-series sensors.

Instant local alerts via buzzer when gas levels exceed safe limits.

Remote monitoring through the Blynk app on smartphones.

IoT-enabled ESP8266 (NodeMCU) for cloud connectivity.

Data visualization in mobile app for user awareness.

Components Used

ESP8266 NodeMCU – Wi-Fi microcontroller for IoT.

MQ Gas Sensors (MQ-2/MQ-135) – Detect harmful gases like LPG & CO.

Buzzer – Local alarm system.

Blynk IoT Platform – For cloud connectivity & notifications.

Jumper Wires, Breadboard, Power Supply.

Working Principle

Sensors continuously monitor air quality and detect harmful gases.

If the concentration crosses the threshold:

The buzzer is activated to warn people nearby.

A notification is sent to the user’s smartphone via the Blynk app.

The user can view the gas levels in real-time on the app and take necessary action.

Applications

Smart Homes – Gas leak detection (LPG, CO).

Industries – Monitor harmful gases in factories.

Offices & Public Places – Safety monitoring in enclosed areas.

Automobiles – Detect harmful gases inside tunnels or closed parking spaces.

Circuit & App Screenshots

(Add images here once you upload your circuit diagram or Blynk screenshots.)

Future Enhancements

Integration with automatic air purifiers.

Adding SMS/Email alerts for emergencies.

Expanding to temperature, humidity, and dust level monitoring.

Machine Learning for predictive air quality analysis.

License

This project is open-source under the MIT License.