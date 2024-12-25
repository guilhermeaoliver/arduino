int lightPin = A0;
int greenPin = 10;
int redPin = 11;
int lightValue;
int delayValue = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightValue = analogRead(lightPin);
  Serial.println(lightValue);
  if (lightValue > 550) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if (lightValue <= 550) {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
  delay(delayValue);
}
