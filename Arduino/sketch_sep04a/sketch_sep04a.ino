// constants won't change. They're used here to set pin numbers:
const int buttonPin_1 = 5;     // the number of the pushbutton pin
const int buttonPin_2 = 2;
const int ledPin =  10;      // the number of the LED pin

// variables will change:
int buttonState_1 = 0;         // variable for reading the pushbutton status
int buttonState_2 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if (buttonState_1 == HIGH  && buttonState_2 == HIGH) {
      // turn LED on:
      digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    }
    else if (buttonState_1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    }
    else if (buttonState_2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    }
    else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    }
}
