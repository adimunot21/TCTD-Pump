![image](https://user-images.githubusercontent.com/24414678/189598110-9c179740-400b-47fe-bb9c-21e436191397.png)


The system is run using a microcontroller (Arduino UNO) connected to a stepper motor via a driver (A4988). A bubble sensor and buzzer are connected to the board as well.

The motor driver allows to easily control the steppper motor. it requires a 12V supply from a battery Connect a 47 uF capacitor between the two battery pins:
12V --> VMOT

Gnd --> GND

Connect the 12V battery to Vin on arduino as well to power it.
12V --> Vin

The 4 wires from the stepper motor go into 1A 1B 2A 2B according to thei coil configurations. To figure out the pairs, use try and error.

Coil 1 --> 1A

Coil 1 --> 1B

Coil 2 --> 2A

Coil 2 --> 2B

The driver also connects to the power pins in the arduino.

5V --> VDD

GND --> GND

A stepper motor is instructed in two ways, how many steps to take and in what direction. Thus 2 pins are connected to digital pins in the arduino, STEP and DIR

Digital Pin 8 --> STEP

Digital Pin 9 --> DIR

The sleep and reset pins on the driver are connected to each other

SLEEP --> RESET

To reduce the vibrations and increase the accuracy, A4988 allows a 1/16th microstepping, thus a 200 step rotation becomes a 3200 step rotation. This allows more precise measurements.

5V --> MS1

5V --> MS2

5V --> MS3

A bubble sensor is used to detect air gaps. It has 3 pins, a 5V, GND and an Output pin. (Their are 2 output pins, but only one is needed for detection)

5V --> 5V on arduino

GND --> GND on arduino

OUTPUT --> Digital pin 3 

Connect a load resistor of 1k between the 5V and output pins of the sensor.

Laslty, a buzzer is connected to act as an alarm.

+VE --> Digital pin 13

-VE --> GND on arduino
