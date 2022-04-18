const int potPin = A8;
const int antM = 100;
int maalinger[antM];
//int ledPins[] = {2,3,4,12,34,35,42};
//String ukedager[] = {"mandag", "tirsdag", "onsdag", "torsdag", "fredag"};


void startMaaling(){
  Serial.println("Starter maalinger");
  for (int i = 0 ; i < antM ; i++){
    maalinger[i] = analogRead(potPin);
  }
}

void skrivResultat(){
  for(int i = 0; i < antM; i++) {
    Serial.print("maalinger[");
    Serial.print(i);
    Serial.print("] = ");
    Serial.print(maalinger[i]);
  }
}

long finnSum(){
  long sum = 0;
  for( int i = 0; i < antM; i++){
    sum += maalinger[i];
  }
  return sum;
}

void setup() {
  // put your setup code here, to run once:
  /*
  for(int i = 0; i < 7; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  */
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  startMaaling();
  skrivResultat();
  long sum = finnSum();
  while(1);

}
