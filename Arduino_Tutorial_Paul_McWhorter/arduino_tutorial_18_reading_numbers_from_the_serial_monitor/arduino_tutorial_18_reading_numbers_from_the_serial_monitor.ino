int numBlinks;
String msg = "How many blinks do you want: ";
String msg2 = "Your number is: ";
int j;
int blinkTime = 500;
int redPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
    
  }

  numBlinks = Serial.parseInt();

  for (j = 1; j <= numBlinks; j = j + 1) {
    digitalWrite(redPin, HIGH);
    delay(blinkTime);
    digitalWrite(redPin, LOW);
    delay(blinkTime);
  }
}