/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

 int sig1 = 0xFF30CF;
 int sig2 = 0xFF18E7;
 int sig3 = 0xFF7A85;
 int sig4 = 0xFF10EF;
 int sig5 = 0xFF38C7;
 int sig6 = 0xFF5AA5;

#include <IRremote.h>

int RECV_PIN = 2;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    if(results.value == 0xFF30CF){
      digitalWrite(8,HIGH);
    }
    else if(results.value == 0xFF10EF){
      digitalWrite(8,LOW);
    }
    else if(results.value == 0xFF18E7){
      digitalWrite(9,HIGH);
    }
    else if(results.value == 0xFF38C7){
      digitalWrite(9,LOW);
    }
    else if(results.value == 0xFF7A85){
      digitalWrite(10,HIGH);
    }
    else if(results.value == 0xFF5AA5){
      digitalWrite(10,LOW);
    }
    Serial.println(results.value);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
