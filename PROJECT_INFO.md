# Project: BmE280

## Description
This project is a starter template and implementation for the ESP32 S2 mini, specifically focused on interfacing with a BME280 sensor (Temperature, Humidity, Pressure). It serves as a foundation for future ESP32 projects.

**GitHub Repository:** [https://github.com/maxman12/BmE280](https://github.com/maxman12/BmE280)

## Tech Stack
- **Hardware:** ESP32 S2 Mini
- **Language:** C++ / Arduino Framework
- **Build System:** PlatformIO (Recommended)
- **Version Control:** Git

## Folder Structure
```text
BmE280/
├── .github/          # GitHub Actions and workflows
├── .pio/             # PlatformIO build files (ignored)
├── docs/             # Technical documentation and diagrams
├── include/          # Header files
├── lib/              # Project-specific libraries
├── src/              # Main source files
│   └── main.cpp
├── test/             # Unit and integration tests
├── .gitignore
├── platformio.ini    # PlatformIO configuration
├── PROJECT_INFO.md   # This file (AI/Human Briefing)
└── README.md         # General project overview
```

## Roadmap
- [ ] Initial project scaffold and git setup.
- [ ] Hardware verification (Blink test).
- [ ] BME280 library integration.
- [ ] Sensor data reading and Serial output.
- [ ] (Optional) Wi-Fi/MQTT integration for data logging.

## AI Briefing
- **Target Chip:** ESP32-S2 (S2 Mini variant)
- **Pinout:** Note that S2 Mini has a specific pinout (refer to `docs/pinout.md` when created).
- **Coding Style:** Clean, modular C++ with clear comments.
