bool pin1 = LOW;
bool pin2 = LOW;
bool pin3 = LOW;
bool pin4 = LOW;
bool pin5 = LOW;
bool pin6 = LOW;


void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  delay(300);
  if (pin1 == LOW){
    pin1 = HIGH;
  }
  else if (pin2 == LOW){
    pin1 = LOW;
    pin2 = HIGH;
    ;
  }
  else if (pin3 == LOW){
    pin1 = LOW;
    pin2 = LOW;
    pin3 = HIGH;
  }
  else if (pin4 == LOW){
    pin1 = LOW;
    pin2 = LOW;
    pin3 = LOW;
    pin4 = HIGH;
  }
  else if (pin5 == LOW){    
    pin1 = LOW;
    pin2 = LOW;
    pin3 = LOW;
    pin4 = LOW;
    pin5 = HIGH;
  }
  else if (pin6 == LOW){    
    pin1 = LOW;
    pin2 = LOW;
    pin3 = LOW;
    pin4 = LOW;
    pin5 = LOW;
    pin6 = HIGH;
  }
  else{
    pin1 = LOW;
    pin2 = LOW;
    pin3 = LOW;
    pin4 = LOW;
    pin5 = LOW;
    pin6 = LOW;
  }
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);


  digitalWrite(7,pin1);
  digitalWrite(5,pin2);
  digitalWrite(3,pin3);
  digitalWrite(6,pin4);
  digitalWrite(4,pin5);
  digitalWrite(2,pin6);
  


}
