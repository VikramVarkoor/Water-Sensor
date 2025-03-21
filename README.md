# Water Sensor Soil Moisture Reader – Arduino

This project implements a **soil moisture sensing system** using an **Arduino Uno**, which **monitors moisture levels** and displays them as a percentage in the Serial Monitor.

- Converts **analog sensor readings to humidity percentage**.
- Uses `map()` and `constrain()` to accurately reflect moisture levels.
- **Live readings** update every second via Serial Monitor.
- Works with **Arduino IDE**.

---

## Components Used
- **Arduino Uno**
- **Soil Moisture Sensor (Analog Output)**
- **Jumper Wires**
- **Breadboard** (optional)

---

## How It Works
1. The moisture sensor sends an **analog signal** to Arduino.
2. The system uses calibration values for **wet and dry conditions**.
3. It then **maps the sensor value** to a **0–100% humidity range**.
4. The **result is printed to the Serial Monitor** every second.

---

## Demo Video
- **Watch the demo**: [Water Sensor Moisture Monitor](https://www.dropbox.com/scl/fi/ozem6aum1aky74zhlgkqv/Water_sensor.mp4?rlkey=vnpbj2edqxk4srph7bsnvkw07&st=tyjhpbdy&raw=1)

---
