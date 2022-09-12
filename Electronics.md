![image](https://user-images.githubusercontent.com/24414678/189598110-9c179740-400b-47fe-bb9c-21e436191397.png)


The system is run using a microcontroller (Arduino UNO) connected to a stepper motor via a driver (A4988). A bubble sensor and buzzer are connected to the board as well.

The motor driver allows to easily control the steppper motor. it requires a 12V supply from a battery:
12V --> VMOT
Gnd --> GND

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
