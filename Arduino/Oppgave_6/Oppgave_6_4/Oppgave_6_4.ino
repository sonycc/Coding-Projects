#include <dht.h>

dht DHT;

#define DHT11_PIN 7

struct measure  {
                 float temp;
                 float humid;
                 };



void setup(){
  Serial.begin(9600);
}

void loop()
{
  //  int chk = DHT.read11(DHT11_PIN);
    delay(2000);
    measure maaling[4]; //maaling inneholder alt som er inni datatype

  
  for(int i = 0; i != 4; i++){
    delay(2000);
    int chk = DHT.read11(DHT11_PIN);
    maaling[i].temp = DHT.temperature;
    maaling[i].humid = DHT.humidity;
  }

  float tmpSum = 0;
  float humSum = 0;

  for(int i = 0; i != 4; i++){
    tmpSum += maaling[i].temp;
    humSum += maaling[i].humid;
  }
  

  
  
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.print("  Average Temperature = ");
  Serial.println(tmpSum / 4);
  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("  Average Humidity = ");
  Serial.println(humSum / 4);
}
