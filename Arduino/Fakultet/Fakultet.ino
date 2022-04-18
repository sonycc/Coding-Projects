int tall = 0;
unsigned long svar = 1;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

unsigned long int fakultet(int T){
  svar = 1;
  for(int i = T; i > 0; i--){
    svar = svar*i;    
  }
  return svar;
}

void skrivUt(int T, unsigned long int S){
  Serial.print("fakultetet til:"); Serial.print(" ");
  Serial.print(T); Serial.print(" ");
  Serial.print("er:"); Serial.print(" ");
  Serial.print(S);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  tall = 0;
  Serial.println("Skriv ett tall");
    while (!Serial.available()){}
  tall = Serial.parseInt();

  unsigned long int sum = fakultet(tall);

  skrivUt(tall, sum);



}
