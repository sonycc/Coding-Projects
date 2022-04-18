
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int abs1(int T1){
  return abs(T1);
}

void abs2(int *p_T2){
  *p_T2 = abs(*p_T2);
}




void loop(){
int tall1 = -2;
int tall2 = -7;
unsigned int p_tall2 = &tall2;
//så kaller jeg noen funksjoner
tall1 = abs1(tall1);
abs2(&tall2);
Serial.print(tall1);
Serial.println(tall2);
Serial.println(p_tall2);
Serial.println(* &tall2);
}
