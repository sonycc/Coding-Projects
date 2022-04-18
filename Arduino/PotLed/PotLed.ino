int potPin = A8;
int LedPin = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  digitalWrite(LedPin, HIGH);
  delay(val);
  digitalWrite(LedPin,LOW);
  delay(val);

}
