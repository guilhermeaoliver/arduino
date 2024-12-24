int voltagePin = A0;
int greenLED = 10;
int yellowLED = 11;
int redLED = 12;
int readVal;
float V2;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltagePin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(voltagePin);
  V2 = (5./1023.) * readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);

  if(V2 <= 3.0){
    digitalWrite(greenLED,HIGH);
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,LOW);
  }

  if(V2 > 3.0 && V2 <= 4.0){
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED,HIGH);
    digitalWrite(redLED,LOW);
  }
  
  if(V2 > 4.0){
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,HIGH);
  }
  
  delay(dt);
}
