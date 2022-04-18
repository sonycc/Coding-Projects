#include <Servo.h>


const int xPin = 11;     // the number of the pushbutton pin
const int yPin = 10;     // the number of the pushbutton pin



Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position


// variables will change:
int xPos = 0;
int yPos = 0;

void setup() {
    myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  xPos = digitalRead(xPin);
  yPos = digitalRead(yPin);

    if (xPos == 1 && pos != 180) {
      pos += 1;
      xPos = 0;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

    if (yPos == 1 && pos != 0) {
      pos -= 1;
      yPos = 0;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
