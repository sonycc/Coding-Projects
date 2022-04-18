#include "BYJ48Stepper.h"

// 4096 steps per rotation on the BYJ
const unsigned int stepCount = 4096;
const double speed = 5;

const int xPin = 9;
const int yPin = 8;


int xPos = 0;
int yPos = 0;

Stepper sOptimal1(Stepper::PinGroup::MEGA2560_10_13);


void setup() {
  sOptimal1.setSpeed(speed);
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {

  xPos = digitalRead(xPin);
  yPos = digitalRead(yPin);





  if (xPos == 1) {
      xPos = 0;
  sOptimal1.step(1);
  }

   else if (yPos == 1) {
      yPos = 0;
    sOptimal1.step(-1);              // tell servo to go to position in variable 'pos'
  }


}
