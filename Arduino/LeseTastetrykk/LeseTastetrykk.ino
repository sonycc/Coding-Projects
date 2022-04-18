void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

float regnUt(float x, char op, float y) {
  float svar;
  if (op == '+'){
    svar = x + y;
  }
  else if (op == '-'){
    svar = x - y;
  }
  else if (op == '*'){
    svar = x * y;
  }
  else if (op == '/'){
    svar = x / y;
  }
  else{
    Serial.println("du må taste inn +, -, * eller /");
  }
  return svar;

  
}

void skrivUt(float t1, char c, float t2, float ans){
  ans = print(t1, c, t2);
  
}


void loop() {
  // put your main code here, to run repeatedly:
  /*   //leser et og et tegn med if settning
    if(Serial.available() > 0){
      char teng = Serial.read();
      Serial.print(tegn);
    }
  */
    /*   //leser et og et tegn med while settning

    while(Serial.available() <=0) {}  //holder programmet til vi begynner å trykke p åen knapp
    char tegn = Serial.read();
    Serial.print(tegn);
    */
  /*
    while(Serial.available() <= 0){}
    int tall = Serial.parseInt();
    Float desiTall = Serial.parseFloat();
    Serial.println(tall);
    */


    //kalkulator

  float tall1 = 0, tall2 = 0, svar = 0;
  char op = 'd';

  Serial.println("Skriv inn et regnestykke");
  while(!Serial.available()){};
    tall1 = Serial.parseFloat();
  while(!Serial.available()){};
    op = Serial.read();
  while(!Serial.available()){};
    tall2 = Serial.parseFloat();


    svar = (tall1, op, tall2);
    skrivUt(tall1, op, tall2, svar);

  
}
