# SmartHomeAutomationSimulator
Smart Home Automation Simulator – A C++ and Python based project that simulates smart home devices (Light, Fan, AC, Door Lock) with automation rules, logging, and a Python dashboard. Designed to showcase system design, OOP, file handling, and multi‑language integration. Future expansion includes IoT hardware (Arduino/Micro:bit) and database support

🏠 Smart Home Automation Simulator

 📌 Overview
The **Smart Home Automation Simulator** is a project built using **C++ (backend logic)** and **Python (dashboard control)**.  
It simulates smart home devices such as **Lights, Fans, AC, and Door Locks**, allowing users to control them via a Python GUI while the backend handles device states, logging, and automation rules.  

This project demonstrates **OOP design, file handling, multi‑language integration, and system scalability**, making it ideal for showcasing programming skills in scholarship applications.

---

 🚀 Features
- ✅ **Device Simulation**: Light, Fan, AC, Door Lock  
- ✅ **Control Dashboard**: Python Tkinter GUI for user interaction  
- ✅ **Logging System**: Device actions stored in log files  
- ✅ **Automation Rules**: Example – auto turn off lights at night, auto turn on fan if temperature > 30°C  
- ✅ **Multi‑Language Integration**: C++ backend + Python frontend  
- ✅ **Scalability**: Future expansion with IoT hardware (Arduino/Micro:bit) and databases  

---

 🛠 Tech Stack
- **C++** → OOP, File Handling, Automation Rules  
- **Python** → Tkinter GUI, SQLite (future), subprocess integration  
- **SQLite (Future)** → Store device logs and automation rules  
- **GitHub** → Version control, documentation, collaboration  

---

 📂 Project Structure
SmartHomeAutomationSimulator/
├── cpp/          # C++ device classes + automation rules
│   ├── device.h
│   ├── main.cpp
├── python/       # Python dashboard + DB integration
│   ├── dashboard.py
├── logs/         # Device logs
│   └── devices.log
├── docs/         # Screenshots, diagrams, flowcharts
└── README.md


---

## ▶️ How to Run
### Step 1: Compile C++ Backend
```bash
g++ cpp/main.cpp -o cpp/main
