// stepper motor pins and initialization through library
#include <AccelStepper.h>
const int stepPin = 8; 
const int dirPin = 9; 
AccelStepper stepper(AccelStepper::DRIVER, 8, 9);

// emergency buzzer pin
int buzzer = 13;

// bubble sensor pin
int bubbleSensor = 3;

// input Flow Rate (ml/hr) and dose volume (ml)
int flowRate = 20;
int doseVol = 10;

void setup() {
  
  pinMode(bubbleSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  Serial.begin(9600);
  
  stepper.setMaxSpeed(10000); //Stepper Speed under no conditions should go beyond this valu
  Serial.print(flowToSpeed(flowRate));
  Serial.print(" ");
  Serial.println(doseToSteps(flowRate, doseVol));
  stepper.setSpeed(flowToSpeed(flowRate));
//  stepper.setCurrentPosition(0);
//  stepper.moveTo(16000);
}

void loop() {


// If bubble detected --> beeping noise through buzzer
if (digitalRead(bubbleSensor) == HIGH){
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);    
}

// millis() gives no. of miliseconds passed since the arduino was switched on
// while that is less than the total time of dosage, keep the motor running 
else {
  while (millis()<doseToTime(flowRate, doseVol)){
  stepper.runSpeed();
}
}}

// converts the input flow rate (ml/hr) to what speed the motor should run at (steps/seconds)
// equation derived from the linear relation found during experimentation (running at different speeds and measuring)
// ml/hr to steps/sec
float flowToSpeed(float flowRate){
  float motorSpeed = (flowRate-0.222)/0.144;
  return motorSpeed;
}

// converts the input dose volume (ml) to number of steps the motor should take (steps)
// can be used in case running the motor using specific no. of steps insteaf of how long (time)
// ml to steps
float doseToSteps(float flowRate, float doseVol){
  float runTime = (doseVol/flowRate)*3600;
  float steps = flowToSpeed(flowRate)*runTime;
  return steps;
}

// converts the input dose volume (ml) to amount of tim the motor should run for (milliseconds)
// ml to ms
float doseToTime(float flowRate, float doseVol){
  float runTime = (doseVol/flowRate)*3600000;
  return runTime;
}
