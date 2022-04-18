const int buttonPin = 2;
const int buttonPin2 = 3;
const int NoodbuttonPin = 18;
const int ledPin = 8;
const int NoodPin = 12;

enum possibleStates {off, blink, on};

volatile possibleStates state = off;
volatile unsigned long lastStateChange = 0;
const int debounceTime = 50;

int ledState = LOW;
unsigned long lastLedStateChange = 0;
const int blinkInterval = 200;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(NoodbuttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(NoodPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(NoodbuttonPin), STOP, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin), changeState, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), changeState2, RISING);
  Serial.begin(9600);
}

void loop() {
  //Serial.println(state);
  switch (state) {
    case off:
      ledState = LOW;
      break;
    case blink:
      if (millis() - lastLedStateChange > blinkInterval) {
        ledState = !ledState;
        lastLedStateChange = millis();
      }
      break;
    case on:
      ledState = HIGH;
      break;
    default:
      Serial.println("Invalid state!");
      break;
  }
  digitalWrite(ledPin, ledState);
}


void changeState() {
  if (millis() - lastStateChange > debounceTime) {
    state = (state + 1) % 3;
    lastStateChange = millis();
  }
}

void changeState2() {
  if (millis() - lastStateChange > debounceTime) {
    lastStateChange = millis();
    state = state - 1;
    if(state == -1){
    state = 2;
    }
  }
}

void STOP(){
  digitalWrite(ledPin,LOW);
  while( HIGH==HIGH){
      digitalWrite(NoodPin,HIGH);
      delay(250);
      digitalWrite(NoodPin,LOW);
      delay(250);

  }
}
