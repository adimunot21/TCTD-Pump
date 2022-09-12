const int stepPin = 8; 
const int dirPin = 9; 
int buzzer = 13;
int bubbleSensor = 3;

#include <AccelStepper.h>
AccelStepper stepper(AccelStepper::DRIVER, 8, 9);

void setup() {
  pinMode(bubbleSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  Serial.begin(9600);
  stepper.setMaxSpeed(10000);
  stepper.setSpeed(200);
  
}

void loop() {


if (digitalRead(bubbleSensor) == HIGH){
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);    
}

else {
  stepper.runSpeed(); 
}}
