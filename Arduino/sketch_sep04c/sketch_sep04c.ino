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

int potPin = A10;    // select the input pin for the potentiometer
int buzzerPin = 13;
int ledPin = 12;   // select the pin for the LED
int val = 100;       // variable to store the value coming from the sensor

void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
    if (val  < 300) {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    }
    else if (val < 1000) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(2);
    digitalWrite(buzzerPin, LOW);
    delay(2);
    
  }
                 // stop the program for some time
}
