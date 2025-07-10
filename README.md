# Smart-Charging-Station
Arduino-based wireless EV charging system

🚗💡 A simple and cost-effective prototype for wireless EV charging using inductive coils and  powered by Arduino.

## 🔧 Features
- Wireless charging using copper coils.
- IR sensor detects car alignment above the charging pad.
- Relay-controlled power supply to initiate charging.
- LCD display showing "Charging: Yes/No" status.

## 🧰 Components Used
- Arduino Uno
- Copper coils (transmitter & receiver)
- IR Sensor
- Relay Module
- LCD 16x2 Display
- Charging Circuit
- 12V Power Supply
- Li-ion Battery

## ⚙️ How It Works
1. The bottom coil (transmitter) is powered when the IR sensor detects the car on top.
2. The top coil (in the car) receives the power and charges the battery.
3. The relay switches the coil on/off based on car alignment.
4. Charging status is shown on the LCD.

## 📸 Project Images
*Images of your setup here*

## 🧠 Code Explanation
The main Arduino sketch (`smart_charger.ino`) does the following:
- Reads IR sensor input from pin A0.
- Turns the relay ON (to allow wireless charging) when car is detected.
- Updates LCD to show charging status.

## 🔋 Note
This is a proof-of-concept. The wireless charging is done at low voltage for safety. For real-world applications, proper shielding, power management, and safety mechanisms must be used.

## 📝 License
MIT License
