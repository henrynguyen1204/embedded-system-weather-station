# ESP8266 Weather Station

## Overview

The ESP8266 Weather Station is a project that allows you to create a real-time weather monitoring system using the ESP8266 NodeMCU and the OpenWeatherMap API. The system fetches weather data for a specified location and displays it on an ST7735 TFT Display.

## Features

- Real-time weather updates.
- User-friendly graphical interface on the TFT Display.
- Integration with OpenWeatherMap API for accurate weather information.

## Hardware Requirements

- ESP8266 NodeMCU Lua CP2102
- TFT ST7735 Display
![diagram](https://github.com/henrynguyen1204/embedded-system-weather-station/assets/151434273/e1b8a077-3d13-45ae-a90e-c3687a086cbc)

## Software Requirements


- Arduino IDE
- ESP8266 Board Package
- Adafruit-ST7735-Library
- OpenWeatherMap API Key

## Installation

1. Clone this repository: `git clone https://github.com/henrynguyen1204/embedded-system-weather-station`
2. Open the Arduino IDE.
3. Install the necessary libraries mentioned in the "Software Requirements" section.
4. Configure your hardware connections (see Hardware Setup in the documentation).
5. Obtain an API key from OpenWeatherMap and update it in the Arduino sketch.
6. Upload the sketch to your ESP8266 NodeMCU.

## Usage

- Power up the ESP8266 Weather Station.
- The TFT Display will show real-time weather information for the specified location.


## Contributing

1. Fork the repository.
2. Create a new branch: `git checkout -b feature/new-feature`
3. Make your changes and commit them: `git commit -m 'Add new feature'`
4. Push to the branch: `git push origin feature/new-feature`
5. Submit a pull request.


## Acknowledgments
<p>-Inspired by https://github.com/shveytank/ESP8266-Weather-Station-V3</p>
<p>-Adafruit-ST7735-Library https://github.com/adafruit/Adafruit-ST7735-Library</p>
<p>-ThingPulse ESP8266 Weather Station Library https://github.com/ThingPulse/esp8266-weather-station</p>
<p>-NTPClient Library: https://github.com/arduino-libraries/NTPClient</p>

## Contact

Henry Nguyen - sinhhoc2002@gmail.com

