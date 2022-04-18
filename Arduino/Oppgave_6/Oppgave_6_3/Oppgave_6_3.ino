const byte ledPin = 13;
const byte interruptPin_1 = 2;
const byte interruptPin_2 = 3;

unsigned int interval = 1000;
void setup() {
  pinMode(ledPin, OUTPUT);
  
  pinMode(interruptPin_1, INPUT_PULLUP);
  pinMode(interruptPin_2, INPUT_PULLUP);
  
  attachInterrupt(digitalPinToInterrupt(interruptPin_1), blinkTimeAdd, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptPin_2), blinkTimeDec, RISING);

}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(interval);
  digitalWrite(ledPin, LOW);
  delay(interval);
}

void blinkTimeDec() {
  if (interval != 100){
      interval -= 100;
      delay(50);
  }
}

void blinkTimeAdd() {
  interval += 100;
  delay(50);
}
