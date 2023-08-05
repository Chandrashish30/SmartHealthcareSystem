# IoT-Based Real-Time Body Vitals Monitoring System

## Description:
Heart disease is a significant health concern in India, with over 40% of Indian males over the age of 40 at risk of dying due to heart-related issues. A significant reduction in this risk can be achieved by adopting a proper diet, but early detection through timely diagnosis can help prevent casualties. However, the busy lifestyle makes it impractical for individuals to get regularly tested for pathologies. To address this challenge, we propose an innovative solution using Internet of Things (IoT) technology to build a real-time body vitals monitoring system.

Our project aims to develop a user-friendly and non-intrusive IoT device that can be worn by the user without hindrance, continuously monitoring essential body parameters. The system consists of a NodeMCU microcontroller board, a heartbeat sensor, and an AHT10 temperature and humidity sensor. The NodeMCU, equipped with a built-in WiFi module, enables seamless connectivity to a WiFi network, allowing us to push the collected data to the cloud.

The primary goal of our project is to gather valuable real-time data from the sensors and transmit it to the cloud. We have chosen Thingspeak, a free-to-use cloud service, as the database for this data. The cloud-based storage will serve as a valuable resource for corporations and researchers to develop advanced machine-learning algorithms and analyze the collected data to detect anomalies in body vitals.

## Installation:
To set up the IoT-based body vitals monitoring system, follow these steps:
Assemble the hardware components - NodeMCU, heartbeat sensor, and AHT10 temperature sensor.
Connect the sensors to the NodeMCU microcontroller board as per the provided circuit diagram.
Install the required libraries for the sensors in your Arduino IDE or preferred development environment.
Flash the provided firmware onto the NodeMCU board using the Arduino IDE.
Configure the system to connect to your WiFi network by providing the necessary credentials.
Power on the device and ensure that it establishes a connection with the WiFi network.

## Usage:
Once the IoT system is set up and connected to the cloud, it will continuously monitor the user's body vitals, including heartbeat, body temperature, and humidity. The collected data will be transmitted to the cloud in real time, creating a valuable database of vital signs over time. To access the collected data and utilize it for research or analysis, corporations or researchers can access the cloud platform (Thingspeak) and retrieve the data for their specific needs. The data can be used to develop predictive models, identify patterns, and detect anomalies in body vitals, ultimately contributing to the early detection and prevention of health issues.

## Contributing:
We welcome contributions to this project from the open-source community. If you are interested in enhancing the system, adding new features, or fixing issues, feel free to submit pull requests. Please follow the standard GitHub workflow and guidelines for contributing to this repository.

Thank you for your interest and support in our IoT-Based Real-Time Body Vitals Monitoring System. Together, we can significantly impact the early detection and prevention of health issues using cutting-edge technology and data analysis.
