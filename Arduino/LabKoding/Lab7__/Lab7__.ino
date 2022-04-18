const int RPin = 8;
const int GPin = 9;
const int BPin = 10;

const int PotPin = A2;

bool R = LOW;
bool G = LOW;
bool B = LOW;


int val = 0;

void setup() {
  pinMode(PotPin, INPUT);
  
  pinMode(RPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(BPin, OUTPUT);

  oppsett();
}



void loop() {
  
  val = analogRead(PotPin);
  if(G == HIGH){
    if(val > 300){
      G = LOW;
      B = HIGH;
    }
  }
  else if(B == HIGH){
    if(val > 850){
      B = LOW;
      R = HIGH;
    }
    else if(val < 250){
      B = LOW;
      G = HIGH;
    }
  }
  else if(R == HIGH){
    if(val < 750){
      R = LOW;
      B = HIGH;
    }
  }
  
digitalWrite(RPin, R);
digitalWrite(GPin, G);
digitalWrite(BPin, B);
}


void oppsett(){
  val = analogRead(PotPin);
  if (val < 300){
    G = HIGH;
  }
  else if (val <850){
    B = HIGH;
  }
  else{
    R = HIGH;
  }
}
