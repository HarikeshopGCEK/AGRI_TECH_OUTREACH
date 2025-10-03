# 🌱 AGRI_TECH_OUTREACH
**Smart Agriculture Monitoring System with IoT Integration**

A comprehensive agricultural technology solution using ESP32/NodeMCU with Blynk IoT platform for real-time monitoring and automation.

---

## 🎯 Project Overview

This project creates a smart agricultural monitoring system that:
- **Monitors soil moisture** using capacitive sensors
- **Tracks temperature & humidity** with DHT11 sensors
- **Provides real-time data** via Blynk mobile app
- **Enables remote automation** for irrigation systems
- **Connects to WiFi** for internet connectivity

---

## 🚀 Quick Start Guide

### Step 1: Create Blynk Template
1. **Sign up** at [Blynk Cloud](https://blynk.cloud/)
2. **Create new template**:
   - Name: "AgriTech Monitor"
   - Hardware: ESP32 or ESP8266
   - Connection: WiFi
3. **Copy Template ID** and **Template Name** (save these!)

### Step 2: Setup Blynk Dashboard
1. **Add Widgets**:
   - **Value Display** for soil moisture
   - **Value Display** for temperature
   - **Value Display** for humidity
   - **Button** for manual irrigation control
   - **Chart** for data visualization
2. **Configure Data Streams**:
   - `V0` - Soil Moisture (0-100%)
   - `V1` - Temperature (°C)
   - `V2` - Humidity (%)
   - `V3` - Irrigation Control (0/1)

### Step 3: Hardware Setup

#### ESP32/NodeMCU Pin Configuration:
```
Soil Moisture Sensor → GPIO 34 (ADC1_CH6)
DHT11 Data Pin      → GPIO 4
DHT11 VCC           → 3.3V
DHT11 GND           → GND
Relay Module        → GPIO 2 (for irrigation control)
```

### Step 4: Upload Code
1. **Install PlatformIO** or Arduino IDE
2. **Clone this repository**
3. **Update credentials** in `main.cpp`:
   ```cpp
   char auth[] = "YOUR_BLYNK_TEMPLATE_ID";
   char ssid[] = "YOUR_WIFI_SSID";
   char pass[] = "YOUR_WIFI_PASSWORD";
   ```
4. **Upload to ESP32/NodeMCU**

### Step 5: Connect & Test
1. **Power on device**
2. **Check serial monitor** for connection status
3. **Open Blynk app** and scan QR code
4. **Verify data streaming** in real-time

---

## 📁 Project Structure

```
AGRI_TECH_OUTREACH/
├── data_from_soil_moisture/     # Soil moisture monitoring
│   ├── src/main.cpp            # Main code with Blynk integration
│   └── platformio.ini          # PlatformIO configuration
├── data_from_dht11/            # Temperature & humidity monitoring
│   ├── src/main.cpp            # DHT11 sensor code
│   └── platformio.ini          # PlatformIO configuration
└── README.md                   # This file
```

---

## 🔧 Features

### 📊 Real-time Monitoring
- **Soil Moisture**: Capacitive sensor readings (0-100%)
- **Temperature**: DHT11 sensor (°C)
- **Humidity**: DHT11 sensor (%)
- **Data Logging**: Historical data in Blynk charts

### 🌐 IoT Integration
- **Blynk Cloud**: Secure cloud connectivity
- **Mobile App**: Real-time monitoring on smartphone
- **Web Dashboard**: Access from any device
- **Push Notifications**: Alerts for critical conditions

### 🤖 Automation
- **Smart Irrigation**: Automatic watering based on soil moisture
- **Threshold Control**: Customizable moisture levels
- **Manual Override**: Remote control via Blynk app
- **Scheduling**: Time-based automation

---

## 📱 Blynk Mobile App Setup

1. **Download Blynk IoT** from App Store/Google Play
2. **Create account** or login
3. **Scan QR code** from Blynk Cloud template
4. **Configure widgets**:
   - Set data ranges (0-100 for moisture, -40 to 80 for temperature)
   - Enable notifications
   - Customize display colors

---

## 🔌 Hardware Requirements

### Essential Components:
- **ESP32 DevKit** or **NodeMCU ESP8266**
- **Capacitive Soil Moisture Sensor**
- **DHT11 Temperature & Humidity Sensor**
- **Relay Module** (for irrigation control)
- **Jumper Wires**
- **Breadboard** (optional)

### Optional Components:
- **Water Pump** (for automated irrigation)
- **Solenoid Valve** (for precise water control)
- **Power Supply** (12V for pump, 5V for ESP32)
- **Enclosure** (weatherproof housing)

---

## ⚙️ Configuration

### WiFi Setup:
```cpp
char ssid[] = "YourWiFiName";
char pass[] = "YourWiFiPassword";
```

### Blynk Authentication:
```cpp
char auth[] = "YourBlynkTemplateID";
```

### Sensor Calibration:
```cpp
// Soil moisture calibration
int dryValue = 4095;    // Sensor in air
int wetValue = 1500;    // Sensor in water
```

---

## 🚨 Troubleshooting

### Common Issues:
1. **WiFi Connection Failed**:
   - Check SSID and password
   - Ensure 2.4GHz network (ESP32 doesn't support 5GHz)
   - Check signal strength

2. **Blynk Not Connecting**:
   - Verify Template ID
   - Check internet connection
   - Ensure Blynk server is accessible

3. **Sensor Readings Unstable**:
   - Check wiring connections
   - Verify power supply (3.3V)
   - Calibrate sensor values

4. **Upload Failed**:
   - Check USB cable (data cable, not just power)
   - Press and hold BOOT button during upload
   - Select correct COM port

---

## 📈 Future Enhancements

- **Multiple Sensor Zones**: Monitor different field areas
- **Weather Integration**: Connect to weather APIs
- **Machine Learning**: Predictive irrigation algorithms
- **Solar Power**: Off-grid operation capability
- **LoRa Integration**: Long-range communication
- **Database Storage**: Local data logging

---

## 🤝 Contributing

1. Fork the repository
2. Create feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit changes (`git commit -m 'Add AmazingFeature'`)
4. Push to branch (`git push origin feature/AmazingFeature`)
5. Open Pull Request

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 📞 Support

For support and questions:
- **Email**: [your-email@domain.com]
- **Issues**: [GitHub Issues](https://github.com/yourusername/AGRI_TECH_OUTREACH/issues)
- **Documentation**: [Wiki](https://github.com/yourusername/AGRI_TECH_OUTREACH/wiki)

---

**🌱 Empowering Agriculture with Technology! 🌱**
