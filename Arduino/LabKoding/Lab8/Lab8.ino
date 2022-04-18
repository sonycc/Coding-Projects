void setup() {
  Serial.begin(9600);
}

void loop() {
  String s = "hei du";
  Serial.println(s);
  while (!Serial.available()) {}
  String s2 = Serial.readString();
  Serial.println(s2);
  String s3 = "2";
  //s3 = s3 + 4;
  s3.concat(4);
  Serial.println(s3);
  String s4 = reverseAndCap(s2);
  Serial.println(s4);
  finnne(s2);
  String s5 = eomtili(s2);
  Serial.println(s5);
  String s6 = fokParanteser(s2);
  Serial.println(s6);

}

String fokParanteser(String org){
  while(org.indexOf("(") != -1){
    org.remove(org.indexOf("("),(org.indexOf(")")-org.indexOf("(")));
  }
  return org;
}

String eomtili(String org){
  while(org.indexOf("e") != -1){
    org.setCharAt(org.indexOf("e"), 'i');
  }
  return org;
}

void finnne(String org){
  int plass = org.indexOf("e");
  if(plass == -1){
    Serial.println("Det finnes ingen e");
  }
  else{
    Serial.print("Den forste e er pa plass ");
    Serial.println(plass+1);
  }
}

String reverseAndCap(String org) {
  String s;
  s = reverse(org);
  s = capFirst2(s);
  return s; 
}

String reverse(String org) {
  String rev = "";
  for (int i = 0; i < org.length(); i++) {
    rev = org.charAt(i) + rev;
  }
  return rev;
}

String capFirst(String org){
  org.toLowerCase();
  char c = org[0];
  c = c - ('a' - 'A');
  org.setCharAt(0, c);
  return org;
}

String capFirst2(String org){
  org.toLowerCase();
  char c = org[0];
  String first = (String)c;
  first.toUpperCase();
  c = first[0];
  org.setCharAt(0, c);
  return org;
}
