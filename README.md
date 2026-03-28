# ❤️ IoT-Based Heart Rate & SpO2 Monitoring System using MAX30100

## 📌 Overview
This project is an IoT-based health monitoring system that measures **Heart Rate (BPM)** and **Blood Oxygen Levels (SpO2)** using the **MAX30100 sensor**.  
The collected data is sent to **Firebase Firestore** and visualized in real-time using graphs.

---

## 🚀 Features
- Real-time Heart Rate (BPM) monitoring  
- SpO2 (Blood Oxygen Level) measurement  
- Data upload to Firebase Firestore  
- Live graph visualization (BPM & SpO2)  
- Stores both current and historical health data  
- IoT-based remote monitoring system  

---

## 🛠️ Technologies Used
- ESP32  
- MAX30100 Sensor  
- Embedded C (Arduino IDE)  
- Firebase Firestore  
- HTML, CSS, JavaScript (for visualization)  

---

## 🔌 Hardware Components
- ESP32  
- MAX30100 Pulse Oximeter Sensor  
- Jumper Wires  
- Breadboard  

---

## 🌐 System Architecture
1. MAX30100 sensor reads BPM and SpO2 values  
2. ESP32 processes the sensor data  
3. Data is uploaded to Firebase Firestore  
4. Web dashboard fetches data and displays graphs  

---

## ▶️ Working Principle
The MAX30100 sensor uses infrared light to detect pulse rate and oxygen saturation levels.  
The ESP32 reads this data, processes it, and uploads it to Firebase.  
A web interface retrieves the data and displays it in graphical format for real-time monitoring.

---

## 📷 Project Images
(Add your hardware setup and output images here)

---

## 📊 Output
- Real-time BPM graph  
- Real-time SpO2 graph  
- Stored historical data in Firebase  

---

## 🧑‍💻 How to Run
1. Connect hardware as per circuit  
2. Install required libraries in Arduino IDE  
3. Add WiFi and Firebase credentials in code  
4. Upload code to ESP32  
5. Open Serial Monitor  
6. View data on web dashboard  

---

## 🔮 Future Improvements
- Mobile app integration  
- AI-based health prediction  
- Alert system for abnormal readings  
- Improved cloud dashboard  

---

## 📁 Project Structure
- ESP32 Code  
- Firebase Configuration  
- Web Dashboard (HTML/CSS/JS)  

---

## 📌 Conclusion
This project demonstrates the integration of IoT, sensors, and cloud platforms to build a real-time health monitoring system.

---

## 👨‍💻 Author
**Narasimha Swamy S**  
ECE Student  

---

## ⭐ If you like this project
Give it a ⭐ on GitHub and support!

---

## 📄 License
This project is open-source and available for educational use.
