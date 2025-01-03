#include <Servo.h>
int xPin = A0;
int yPin = A1;
int sPin = 2;
int servoPin = 10;
int ledPin = 11;
int xVal;
int yVal;
int sVal;
int xAngle;
int yAngle;
Servo xServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
  pinMode(servoPin, OUTPUT);
  xServo.attach(servoPin);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  xAngle = (180./1023.) * xVal;
  yVal = analogRead(yPin);
  yAngle = (180./1023.) * yVal;
  sVal = digitalRead(sPin);
  xServo.write(xAngle);
    if(sVal == 0){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
