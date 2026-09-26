# ⚡ Cyber Power Monitor

> A lightweight C-based power anomaly detection simulator for security and IoT devices.

**Cyber Power Monitor (CPM)** is a beginner cybersecurity project developed in **C** as part of my first-year engineering studies at **EIDIA – Université Euromed de Fès**.

The project applies fundamental **electrocinétique concepts** to a cybersecurity-oriented monitoring scenario.

---

## 🎯 Objective

The goal is to simulate a simple monitoring system capable of:

* Calculating electrical charge
* Calculating electrical energy
* Calculating electrical power
* Comparing measured power against a normal operating range
* Detecting low/high power anomalies
* Flagging potentially suspicious activity

The project demonstrates how fundamental physics and programming concepts can be combined to create a simple security-oriented application.

---

## 🧠 Concepts Used

### Electrocinétique

The program uses the following formulas:

| Quantity | Formula     | Unit        |
| -------- | ----------- | ----------- |
| Charge   | `Q = I × t` | Coulomb (C) |
| Energy   | `W = U × Q` | Joule (J)   |
| Power    | `P = U × I` | Watt (W)    |

Where:

* `U` = Voltage (V)
* `I` = Current (A)
* `t` = Time (s)
* `Q` = Electrical charge (C)
* `W` = Electrical energy (J)
* `P` = Electrical power (W)

---

## 🔐 Cybersecurity Concept

The program uses a simple **power anomaly detection model**.

Each device has a predefined normal power range:

| Device              | Normal Power Range |
| ------------------- | -----------------: |
| Security Camera     |             5–15 W |
| Wi-Fi Access Point  |             5–20 W |
| RFID Reader         |              1–5 W |
| Alarm System        |             5–30 W |
| IoT Security Sensor |            0.5–3 W |
| Custom Device       |       User-defined |

The measured power is compared with the expected range.

```text
P < P_min
    ↓
Low Power Anomaly

P_min ≤ P ≤ P_max
    ↓
Normal

P > P_max
    ↓
High Power Anomaly
```

> **Note:** The anomaly detection is a simulation. High or low power consumption alone does not prove that a cyberattack occurred. It indicates that further investigation may be appropriate.

---

## 🖥️ Example

Example input:

```text
Device: Custom Device

Voltage: 12 V
Current: 2 A
Duration: 12 s

Normal Power Range:
2 W – 3 W
```

The program calculates:

```text
Charge    : 24 C
Power     : 24 W
Energy    : 288 J
```

Since:

```text
24 W > 3 W
```

the program reports:

```text
Anomalie de haute puissance !!!
Activite potentiellement suspecte !!!
```

---

## 🛠️ Technologies

* **C**
* **GCC**
* **PowerShell**
* **Git / GitHub**

### C concepts practiced

* Variables
* Data types
* `printf()` / `scanf()`
* Conditional statements
* `switch`
* Functions / procedures
* Strings
* Arrays
* Input validation
* Mathematical calculations
* Function parameters

---

## 📂 Project Structure

```text
Cyber-Power-Monitor/
│
├── algorithm/
│   └── Cyber_Power_Monitor.algo
│
├── src/
│   └── main.c
│
├── README.md
└── .gitignore
```

### `algorithm/`

Contains the original algorithm written before implementing the project in C.

### `src/`

Contains the C implementation.

---

## 🚀 Compilation & Execution

### 1. Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/Cyber-Power-Monitor.git
cd Cyber-Power-Monitor
```

### 2. Compile

Using GCC:

```bash
gcc src/main.c -o cyber_power_monitor
```

### 3. Run

Windows:

```powershell
.\cyber_power_monitor.exe
```

Linux:

```bash
./cyber_power_monitor
```

---

## 🔎 Example Workflow

```text
              DEVICE SELECTION
                     │
                     ▼
             ENTER U, I AND t
                     │
                     ▼
               INPUT VALIDATION
                     │
                     ▼
             ELECTRICAL ANALYSIS
                     │
             ┌───────┼────────┐
             ▼       ▼        ▼
           Q=I×t   P=U×I    W=U×Q
             │       │        │
             └───────┼────────┘
                     ▼
             POWER ANOMALY CHECK
                     │
           ┌─────────┼─────────┐
           ▼         ▼         ▼
        LOW       NORMAL      HIGH
       POWER       POWER      POWER
       ANOMALY                 ANOMALY
                                  │
                                  ▼
                       POTENTIALLY SUSPICIOUS
                              ACTIVITY
```

---

## 📚 Academic Connection

This project was created to apply concepts from:

**Electrocinétique**

→ Charge
→ Current
→ Voltage
→ Energy
→ Power

and:

**Algorithmique & Programmation C**

→ Variables
→ Conditions
→ `switch`
→ Procedures/functions
→ Input validation
→ Calculations

The cybersecurity context provides a practical application for these fundamental concepts.

---

## 👨‍💻 Author

**Aymane Ougunir**

Engineering Student — **EIDIA, Université Euromed de Fès**

Interested in:

* Cybersecurity
* Computer Science
* Systems
* Algorithms
* Low-level programming

---

## 📜 License

This project is available for educational and personal use.
