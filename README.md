# NodeMCU v1.0 clock

A simple and usefull RTC based on ESP12e SoC.

![alt text](images/nodemcu_rtc.png)

# How it works?
The time is picked from a NTP server and stored in the DS3231 RTC chip then it's displayed on the MAX7219 led matrix display.

# What do you need?

1. NodeMCU v1.0 (also called ESP8266 v2.0 or even 3.0)
2. A DS3231 RTC and a LIR2032 battery (if you want to use a CR2032 battery remove the 200Ω resistor)
3. A MAX7219 controlled matrix display (the one I used has 4 devices)
4. A power supply

# Connections

### For the DS3231 the connections are:
  
| DS3231 | NodeMCU |
| ----------- | ----------- |
| VCC | 3.3V |
| GND | GND |
| SCL | D1 |
| SDA | D2 |

### For the MAX7219 the connections are:

| MAX7219 | NodeMCU |
| ----------- | ----------- |
| VCC | 3.3V |
| GND | GND |
| CLK | D5 |
| DIN | D7 |
| CS | D8 |
    
### For the power supply:

| PS | NodeMCU |
| ----------- | ----------- |
| +5V | VIN |
| -5V | GND |

# Requirements

- Platform.io (or the VScode extension)
- Python3

# Setting up

Before building the firmware and upload it you need to:
- change the `config.h.dist` file in `config.h`
- change the `SSID` and the `PASSWORD` variables with your network ones
- change the `NTPserver` variable with the ones you prefer, choose one from `ntpservers.h` or add a new one in it
- change the `MyTMZ` variable with the correct timezone of your country, choose one from `timezones.h` or add a new one in it
  
You can also change the MAX7219 pins if needed.

# Credits

[Leonardo Mirabella](https://github.com/infra-blue)
