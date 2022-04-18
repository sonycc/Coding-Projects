
const int ledPin = 13;
const int buzzerPin = 12;
const int buttonPin_1 = 8;
const int buttonPin_2 = 7;

int buttonState_1 = 0;
int buttonState_2 = 0;

const char svar = 112212;



void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(buzzerPin,OUTPUT);
pinMode(buttonPin_1,INPUT);
pinMode(buttonPin_2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);
  while (buttonState_1 == LOW && buttonState_2 == LOW){  buttonState_1 = digitalRead(buttonPin_1);buttonState_2 = digitalRead(buttonPin_2);};
    if (buttonState_1 == HIGH) {
      delay(500);
      buttonState_1 = digitalRead(buttonPin_1);
      buttonState_2 = digitalRead(buttonPin_2);
      while (buttonState_1 == LOW && buttonState_2 == LOW){  buttonState_1 = digitalRead(buttonPin_1);buttonState_2 = digitalRead(buttonPin_2);};
      if (buttonState_1 == HIGH) {
        delay(500);
        buttonState_1 = digitalRead(buttonPin_1);
        buttonState_2 = digitalRead(buttonPin_2);
        while (buttonState_1 == LOW && buttonState_2 == LOW){  buttonState_1 = digitalRead(buttonPin_1);buttonState_2 = digitalRead(buttonPin_2);};
        if (buttonState_2 == HIGH) {
          delay(500);
          buttonState_1 = digitalRead(buttonPin_1);
          buttonState_2 = digitalRead(buttonPin_2);
          while (buttonState_1 == LOW && buttonState_2 == LOW){  buttonState_1 = digitalRead(buttonPin_1);buttonState_2 = digitalRead(buttonPin_2);};
          if (buttonState_2\+ == HIGH) {
            delay(500);
            buttonState_1 = digitalRead(buttonPin_1);
            buttonState_2 = digitalRead(buttonPin_2);
            while (buttonState_1 == LOW && buttonState_2 == LOW){  buttonState_1 = digitalRead(buttonPin_1);buttonState_2 = digitalRead(buttonPin_2);};
            if (buttonState_1 == HIGH) {
              delay(500);
              digitalWrite(ledPin,HIGH);
              delay(10000);
              digitalWrite(ledPin,LOW);
            }  else {
    while(0==0){
      tone(buzzerPin, 1000);
      delay(200);
      tone(buzzerPin, 500);
      delay(200);
    }
  }
          }  else {
    while(0==0){
      tone(buzzerPin, 1000);
      delay(200);
      tone(buzzerPin, 500);
      delay(200);
    }
  }
        }  else {
    while(0==0){
      tone(buzzerPin, 1000);
      delay(200);
      tone(buzzerPin, 500);
      delay(200);
    }
  }
      }  else {
    while(0==0){
      tone(buzzerPin, 1000);
      delay(200);
      tone(buzzerPin, 500);
      delay(200);
    }
  }
    }
  else {
    while(0==0){
      tone(buzzerPin, 1000);
      delay(200);
      tone(buzzerPin, 500);
      delay(200);
    }
  }

}
