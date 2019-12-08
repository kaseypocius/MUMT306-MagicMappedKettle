#include "DHT.h"

#define DHTPIN 7     
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200); 
  dht.begin();
}

void loop() {
  delay(1000);//(the DHT11 is rated at 1Hz read speed, but how it reacts in the field varies)

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("/Humidity "); 
  Serial.print(h);
  Serial.print(" ");
  Serial.print("/Temperature "); 
  Serial.print(t);
  Serial.println("");

}
