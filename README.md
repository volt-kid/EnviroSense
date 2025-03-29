# EnviroSense 🌱

**EnviroSense** is a smart environmental monitoring system that tracks temperature 🌡️ and humidity 💧 levels in real-time. Using an Arduino and the DHT11 sensor, this project provides visual and auditory alerts to help maintain a comfortable indoor environment.

## Features ✨

- Real-time temperature and humidity monitoring
- LED indicators for temperature levels:
  - 🔴 Red: High temperature (>30°C)
  - 🟡 Yellow: Moderate temperature (25°C - 30°C)
  - 🟢 Green: Comfortable temperature (<25°C)
- 🔔 Buzzer alert for high humidity (>70%)
- Easy-to-read Serial Monitor output for debugging and monitoring

## Components Needed 🛠️

To build your own EnviroSense system, you will need the following components:

- **Arduino board** (e.g., Arduino Uno)
- **DHT11 Temperature and Humidity Sensor**
- **3 LEDs** (Red, Yellow, Green)
- **3 220Ω resistors** (for LEDs)
- **Buzzer**
- **Breadboard** and **jumper wires**
- **USB cable** for programming the Arduino
- Optional: **Power supply** for standalone operation

## Wiring Diagram 🔌

1. **DHT11 Sensor**:
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - Data pin to Digital Pin 2 on Arduino

2. **LEDs**:
   - 🔴 Red LED: Anode to Digital Pin 13, Cathode to GND (via 220Ω resistor)
   - 🟡 Yellow LED: Anode to Digital Pin 11, Cathode to GND (via 220Ω resistor)
   - 🟢 Green LED: Anode to Digital Pin 9, Cathode to GND (via 220Ω resistor)

3. **Buzzer**:
   - Positive terminal to Digital Pin 7
   - Negative terminal to GND

## Installation 📦

1. **Install the DHT Library**:
   - Open the Arduino IDE.
   - Go to **Sketch** > **Include Library** > **Manage Libraries**.
   - Search for "DHT" and install the DHT sensor library.

2. **Upload the Code**:
   - Copy the code provided in this repository.
   - Open the Arduino IDE and paste the code into a new sketch.
   - Connect your Arduino to your computer via USB.
   - Select the correct board and port from the **Tools** menu.
   - Click the upload button to upload the code to your Arduino.

## Code Overview 📜

The code initializes the DHT11 sensor and sets up the LED pins and buzzer. In the `loop()` function, it reads the temperature and humidity every 2 seconds. Based on the temperature, it lights up the corresponding LED. If the humidity exceeds 70%, the buzzer will sound for 3 seconds, alerting you to take action.

### Key Functions:
- `dht.readHumidity()`: Reads the current humidity level.
- `dht.readTemperature()`: Reads the current temperature.
- `digitalWrite(pin, value)`: Controls the state of the LEDs.
- `tone(pin, frequency)`: Activates the buzzer at a specified frequency.
- `noTone(pin)`: Stops the buzzer sound.

## Usage 🖥️

Once the code is uploaded and the hardware is set up, open the Serial Monitor in the Arduino IDE to view the temperature and humidity readings. The LEDs will indicate the current temperature status, and the buzzer will alert you if humidity levels are too high. 

### Tips for Use:
- Place the DHT11 sensor in a location that accurately reflects the environment you want to monitor.
- Experiment with different temperature and humidity thresholds in the code to suit your needs.
- Use the Serial Monitor to troubleshoot any issues or to observe real-time data.

## Conclusion 🎉

EnviroSense is a fun and educational project that helps you understand environmental monitoring. Whether you're a beginner or an experienced maker, this project is a great way to learn about sensors and Arduino programming. Enjoy building your own EnviroSense system and take control of your indoor environment!
