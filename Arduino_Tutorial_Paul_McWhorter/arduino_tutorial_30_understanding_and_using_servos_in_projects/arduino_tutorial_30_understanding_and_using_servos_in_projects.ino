#include <Servo.h>

int servoPin = 9;
int servoPosition;
Servo Servo1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle for the servo? ");
  while(Serial.available() == 0){

  }
  servoPosition=Serial.parseInt();
  Servo1.write(servoPosition);
}
