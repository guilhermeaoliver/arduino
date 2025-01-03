#include <Servo.h>
int lightPin = A4;
int servoPin = 9;
int delayTime = 250;
int lightVal;
int angle;
Servo Servo1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(servoPin, OUTPUT);
  Servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  angle = (-16./63.) * lightVal + (16.*780./63.);
  Servo1.write(angle);
  delay(delayTime);
}
