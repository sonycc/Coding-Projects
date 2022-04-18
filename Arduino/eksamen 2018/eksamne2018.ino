/* Analog Read to LED
 * ------------------ 
 *
 * turns on and off a light emitting diode(LED) connected to digital  
 * pin 13. The amount of time the LED will be on and off depends on
 * the value obtained by analogRead(). In the easiest case we connect
 * a potentiometer to analog pin 2.
 *
 * Created 1 December 2005
 * copyleft 2005 DojoDave <http://www.0j0.org>
 * http://arduino.berlios.de
 *
 */

#include <Scheduler.h>


int potPin = A2;    // select the input pin for the potentiometer
int ledPin = 7;   // select the pin for the LED
int blinkPin = 5;
int val = 0;       // variable to store the value coming from the sensor

void setup() {
  pinMode(blinkPin, OUTPUT);
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT

  Scheduler.startLoop(loop2);
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  if (val < 100){
    val = 100;
  }
  else if ( val > 1000){
    val = 1000;
  }
  digitalWrite(blinkPin, HIGH);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(blinkPin, LOW);   // turn the ledPin off
  delay(val);                  // stop the program for some time
}

void loop2() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
