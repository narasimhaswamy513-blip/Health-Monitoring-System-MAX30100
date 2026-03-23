# ❤️ IoT-Based Heart Rate & SpO2 Monitoring System using MAX30100

## 📌 Overview
This project is an IoT-based health monitoring system that measures heart rate (BPM) and blood oxygen levels (SpO2) using the MAX30100 sensor. The collected data is sent to Firebase Firestore and visualized in real-time using graphs.

## 🚀 Features
- Real-time Heart Rate (BPM) monitoring
- SpO2 (Blood Oxygen Level) measurement
- Data upload to Firebase Firestore
- Live graph visualization (BPM & SpO2)
- Stores current and previous health data
- IoT-enabled remote monitoring

## 🛠️ Technologies Used
- ESP32
- MAX30100 Sensor
- Embedded C
- Firebase Firestore
- HTML / JavaScript (for graph visualization)

## 🔌 Hardware Components
- ESP32
- MAX30100 Pulse Oximeter Sensor
- Jumper Wires
- Breadboard

## 🌐 System Architecture
1. MAX30100 sensor reads BPM and SpO2 values  
2. ESP32 processes the data  
3. Data is sent to Firebase Firestore  
4. Web page fetches data and displays graphs  

## ▶️ Working Principle
The MAX30100 sensor detects pulse and oxygen saturation using infrared light. The ESP32 reads this data and uploads it to Firebase. A web interface retrieves the data and displays it in graphical format, allowing real-time and historical monitoring.

## 📷 Project Images
(Add your hardware images here)

## 📊 Output
- Real-time BPM graph  
- Real-time SpO2 graph  
- Stored historical data  

## 🔮 Future Improvements
- Mobile app integration  
- AI-based health prediction  
- Alert system for abnormal readings  
- Cloud dashboard improvements  

## 📁 Project Structure
- ESP32 Code
- Firebase Configuration
- Web Dashboard (HTML/JS)

## 📌 Conclusion
This project demonstrates the integration of IoT, sensors, and cloud platforms to create a real-time health monitoring system.
