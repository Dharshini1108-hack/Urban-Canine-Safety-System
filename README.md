# Urban Canine Safety Belt and Monitoring System

## Project Overview
The Urban Canine Safety Belt is an IoT-based wearable device designed to reduce dog bite incidents in urban areas through a safe and humane approach. The system detects potentially aggressive situations using predefined physical triggers and automatically activates an ultrasonic sound to discourage aggressive behavior without harming the animal. By providing real-time intervention, the device enhances personal safety while promoting ethical animal management and peaceful coexistence between humans and street dogs.

## Problem Statement
Street dog attacks remain a significant public safety concern, particularly due to the increasing number of dog bite incidents and the risk of rabies transmission. Limited monitoring, delayed vaccination, and frequent human–street dog interactions contribute to this issue. Existing solutions often focus on post-incident treatment rather than prevention. The Urban Canine Safety Belt addresses this problem by using a humane ultrasonic mechanism to discourage aggressive dog behavior, helping reduce dog bite incidents while ensuring the safety of both humans and animals.

## Solution
The Urban Canine Safety Belt is a wearable IoT-based safety device that helps prevent dog bite incidents through a humane and non-lethal approach. The system uses motion and ultrasonic sensors to detect potentially aggressive dog behavior and automatically activates ultrasonic sound, vibration, and alert mechanisms to discourage the dog without causing harm. If the dog continues to behave aggressively, the device can additionally release a pheromone spray as a secondary deterrent to help calm or redirect the animal. The belt also includes GPS tracking to monitor movement in high-risk areas, health monitoring to identify possible signs of illness such as rabies, and Bluetooth connectivity for real-time sensor monitoring and alerts through a mobile application. This integrated solution improves human safety while supporting ethical treatment and welfare of street dogs.

## Features
-Behavior Detection: Motion and ultrasonic sensors detect potentially aggressive dog behavior in real time.
-Ultrasonic Deterrent: Emits a safe, non-lethal ultrasonic sound to discourage aggressive dogs.
-Pheromone Spray: Automatically releases a pheromone spray if the dog remains highly aggressive after the initial deterrents.
-GPS Tracking: Monitors location and helps identify movement in high-risk areas.
-Health Monitoring: Detects possible signs of illness or abnormal behavior, including symptoms associated with rabies.
-Bluetooth Integration: Connects to a mobile application for real-time monitoring, notifications, and sensor data.
-Portable Wearable Design: Lightweight, compact, and comfortable for everyday use in urban environments.

## Technology Stack
-Hardware: ESP32, Ultrasonic Sensor, PIR Motion Sensor, GPS Module, Bluetooth (BLE), Pheromone Spray Module, Rechargeable Battery
-Software: Arduino IDE, Embedded C/C++, Android Mobile Application
-Communication: Bluetooth Low Energy (BLE)
-Sensors: Ultrasonic Sensor, PIR Motion Sensor
-Platform: IoT (Internet of Things)
-Version Control: Git & GitHub

## Architecture
<img width="1250" height="702" alt="WhatsApp Image 2026-07-08 at 10 34 39 AM" src="https://github.com/user-attachments/assets/7e851411-a75d-4c69-ac24-2ce7ea4f5be3" />


## Installation
-Open the project in Arduino IDE.
-Install the required ESP32 board package and libraries.
-Connect the ESP32 board to your computer using a USB cable.
-Select the correct Board and COM Port in Arduino IDE.
-Upload the code to the ESP32.
-Connect the hardware components (Ultrasonic Sensor, PIR Motion Sensor, GPS Module, Bluetooth Module, and Pheromone Spray Module) according to the circuit diagram.
-Power on the device and pair it with the mobile application via Bluetooth.
-The system is now ready to monitor and respond to potential dog aggression.

## Usage
The Urban Canine Safety Belt is attached to the dog to monitor its behavior and movement. The system detects aggressive activities using sensors and activates an ultrasonic deterrent. If aggression continues, a pheromone spray is released as an additional non-lethal calming mechanism. GPS tracking and Bluetooth connectivity enable real-time monitoring through a mobile application.

## Team Members
- Gayathri Devi
- Dharshini
- Harini
- Anushree Prabha
