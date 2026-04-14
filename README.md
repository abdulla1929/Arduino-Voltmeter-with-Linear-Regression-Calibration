# Arduino-Voltmeter-with-Linear-Regression-Calibration

An Arduino-based voltmeter capable of measuring 0–25V DC using a voltage divider and calibrated ADC conversion through linear regression for improved accuracy.

The voltage measurement is calibrated using **linear regression** based on real measurements from a professional power supply to improve ADC conversion accuracy.

---

## Features

* Measures **0–25V DC**
* Uses **voltage divider** for ADC protection and scaling
* Applies **linear regression calibration** for accurate voltage readings
* Displays voltage on LCD in real time
* Displays soil moisture percentage
* Updates reading every second

---

## Components Used

* Arduino Board
* 16x2 I2C LCD Display
* Analog Soil Moisture Sensor
* Voltage Divider Circuit
* Resistors for Voltage Divider
* External DC Voltage Source (0–25V)

---

## Wiring

| Component              | Arduino Pin |
| ---------------------- | ----------- |
| Voltage Divider Output | A1          |
| LCD SDA                | A4          |
| LCD SCL                | A5          |
| LCD VCC                | 5V          |
| LCD GND                | GND         |
| Voltage Divider GND    | GND         |

---

## Calibration Method

To improve voltage accuracy beyond standard ADC scaling:

1. Multiple known voltages were supplied using a professional power supply
2. Corresponding ADC readings were recorded
3. Linear regression was performed on the dataset
4. The resulting equation was implemented in code for calibrated voltage conversion

---

## Calibration Formula

```cpp
voltage = (-0.00981874658457826 + 0.01) + 0.0246398932559307 * VADC;  
```

---

## How It Works

* Reads analog voltage from the voltage divider
* Converts ADC value to calibrated voltage using regression formula
* Displays the value on the LCD

---

## Purpose

Built for practicing:

* Analog signal processing
* Sensor calibration
* Linear regression in embedded systems
* Voltage measurement using voltage dividers
  
---

