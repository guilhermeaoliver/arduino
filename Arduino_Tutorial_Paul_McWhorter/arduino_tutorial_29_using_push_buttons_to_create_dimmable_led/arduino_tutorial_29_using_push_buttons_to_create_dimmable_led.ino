int buttonIncreasePin = 7;
int buttonIncreaseValue;
int buttonDecreasePin = 8;
int buttonDecreaseValue;
int ledPin = 9;
int ledDim = 0;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonIncreasePin, INPUT);
  pinMode(buttonDecreasePin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonIncreaseValue = digitalRead(buttonIncreasePin);
  buttonDecreaseValue = digitalRead(buttonDecreasePin);
  if(buttonIncreaseValue == 0 && buttonDecreaseValue == 1){
    ledDim = ledDim + 10;
  }
  if(buttonDecreaseValue == 0 && buttonIncreaseValue == 1){
    ledDim = ledDim - 10;
  }
  if(ledDim > 255) {
    ledDim = 255;
  }
  if(ledDim < 0) {
    ledDim = 0;
  }
  analogWrite(ledPin, ledDim);
  delay(delayTime);
}
