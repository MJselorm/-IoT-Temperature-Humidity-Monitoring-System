# 🌡️ IoT Temperature & Humidity Monitoring System

A simple Internet of Things (IoT) project that uses an ESP32 and DHT11 sensor to monitor temperature and humidity in real time and send the data to a web server over Wi‑Fi.

---

## 🚀 Project Overview

This project demonstrates how to:

* Read environmental data using a DHT11 sensor
* Connect an ESP32 to Wi‑Fi
* Send sensor data to a web server using HTTP POST
* Build a basic end‑to‑end IoT monitoring system

It is designed for robotics clubs, beginners in IoT, and embedded systems learners.

---

## 🧰 Hardware Requirements

* ESP32 development board
* DHT11 temperature & humidity sensor
* Breadboard
* Jumper wires
* USB cable / power supply

---

## 💻 Software Requirements

* Arduino IDE
* ESP32 Board Package
* Required Libraries:

  * WiFi.h
  * HTTPClient.h
  * DHT.h
* Apache/PHP server (XAMPP recommended)
* MySQL (optional for storage)

---

## 🔌 Circuit Connections

| DHT11 Pin | ESP32 Pin          |
| --------- | ------------------ |
| VCC       | 3.3V               |
| GND       | GND                |
| DATA      | GPIO (e.g., GPIO4) |

> ⚠️ Note: Some DHT11 modules require a pull‑up resistor on the DATA line.

---

## 📡 How It Works

1. ESP32 connects to Wi‑Fi
2. DHT11 reads temperature and humidity
3. ESP32 sends data to server via HTTP POST
4. Server stores/logs the readings
5. Process repeats every 10 seconds

---

## 🗂️ Project Structure

```
project-folder/
│
├── dht_apache_server.ino   # ESP32 firmware
├── data.php                # Server endpoint
├── database.sql            # (optional) database schema
└── README.md
```

---

## ⚙️ Setup Instructions

### 1️⃣ Install Arduino Requirements

* Install Arduino IDE
* Add ESP32 board support
* Install required libraries

### 2️⃣ Configure Wi‑Fi

Open the `.ino` file and update:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```

### 3️⃣ Configure Server URL

Update the server endpoint in the code:

```cpp
http.begin("http://YOUR_SERVER_IP/data.php");
```

### 4️⃣ Upload Code

* Select ESP32 board
* Choose correct COM port
* Upload the sketch

### 5️⃣ Run the Server

* Start Apache in XAMPP
* Place `data.php` in `htdocs`
* (Optional) import database

---

## 🧪 Example Serial Output

```
Connecting to WiFi...
WiFi connected
Temperature: 26.4 °C
Humidity: 61 %
HTTP Response code: 200
```

---

## 📈 Future Improvements

* Live web dashboard
* Cloud integration (Firebase/AWS)
* MQTT support
* Mobile notifications
* Battery-powered node
* Multiple sensor support
* Alert system for thresholds

---

## 🤝 Contributing

Contributions are welcome! Feel free to:

* Fork the repo
* Create a feature branch
* Submit a pull request

---

## 📜 License

This project is open-source and available for educational and personal use.

---

## 👨‍💻 Authors

**Robotics Club Project Team**

---

⭐ If you found this helpful, consider giving the repo a star!
