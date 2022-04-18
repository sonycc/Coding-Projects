const int buttonPin_1 = 8;    //button 1
const int buttonPin_2 = 7;    //button 2
const int ledPin =  13;      //LED output

// variables will change:
int buttonState_1 = 0;         // variable for reading the button 1 status
int buttonState_2 = 0;         // reading button 2

void setup() {
  pinMode(ledPin, OUTPUT);    // initialize the LED pin as an output:
  pinMode(buttonPin_1, INPUT);  // initialize the button1 pin as an input:
  pinMode(buttonPin_2, INPUT);  // initialize the button2 pin as an input:
}

void loop() {
  // read the state of the pushbutton value:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState_1 == HIGH and buttonState_2 == HIGH) {
    // blink LED on:
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  else if(buttonState_1 == HIGH or buttonState_2 == HIGH) {
    // turn LED on
    digitalWrite(ledPin,HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
