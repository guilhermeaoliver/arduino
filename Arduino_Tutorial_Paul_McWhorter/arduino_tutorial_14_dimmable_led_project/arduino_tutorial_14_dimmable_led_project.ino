int potPin = A0;
int ledPin = 10;
int potVal;
int ledVal;
int waitTime(500);

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  ledVal = (255./1023.) * potVal;
  analogWrite(ledPin, ledVal);
  Serial.println(ledVal);
  delay(waitTime);
}
