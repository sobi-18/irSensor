#  IR Sensor Object Detection using Arduino


This project demonstrates object detection using an IR sensor with Arduino. When an object is detected, a buzzer is activated.

## Components Used
- Arduino UNO
- IR Sensor Module
- Buzzer(passive)
- Jumper Wires

 ## Working

The IR sensor detects nearby objects.
When an object is present, the buzzer turns ON
When no object is detected, the buzzer remains OFF

## Code
See ir_sensor.ino

## Connections

- IR Sensor OUT → Arduino Digital Pin (D2)
- Buzzer → Arduino Digital Pin (D8)
- VCC → 5V
- GND → GND

 ## Demo
 ![irSensor_hardware](https://github.com/user-attachments/assets/a629a13c-63c5-4d54-ba29-f02e69b2e902)

![ir_sensor serial op](https://github.com/user-attachments/assets/e2686a55-4e74-4076-aa7e-939dbd6db1e5)
