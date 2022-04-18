String x = "";
void setup()
{
  Serial.begin(9600);
  DDRC = B11111111; // set PORTD (digital 7~0) to outputs
}
 
void loop()
{
  while(!Serial.available() ){
}
  String x = Serial.readString();
  unsigned long xx = x.toInt();
  Serial.println(x);
  if (xx < 256){
    PORTC = xx;
  }
  else if (x.length() == 8){
    int y = 0;
    int ii = 128;
    for(unsigned long i=10000000; i>=1; i = i/10){
      if(xx >= i){
        xx -= i;
        y += ii;
      }
      ii /= 2;
      }
    PORTC = y;
  }
  else{
    Serial.println("Invalid Data");
  }
}
