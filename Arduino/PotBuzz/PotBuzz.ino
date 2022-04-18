int potPin = A8;
int buzzPin = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  analogWrite(buzzPin, val);
}
