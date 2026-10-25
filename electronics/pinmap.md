# Proposed ESP32-VROOM-32D pin map
| Signal | GPIO |
|---|---|
| Servos 1-5 (PWM) | 13, 14, 25, 26, 27 |
| MQ analog out | 34 (ADC1) via 20k/30k divider (5 V to 3.0 V) |
| DS18B20 | 4 + 4.7k pull-up |
| IMU I2C | SDA 21, SCL 22 |
| LoRa SX1278 SPI | SCK 18, MISO 19, MOSI 23, CS 5, RST 16, DIO0 17 |
Servo rail (6 V, >=5 A) is separate from the 5 V logic rail; common ground; bulk capacitor on the servo rail.
