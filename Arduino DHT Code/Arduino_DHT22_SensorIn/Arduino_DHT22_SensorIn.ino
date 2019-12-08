#include "DHT.h"

#define DHTPIN 7     
#define DHTTYPE DHT22   // DHT 22  (AM2302)

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200); 
  dht.begin();
}

void loop() {
  delay(500);//(the DHT22 is rated at 0.5Hz read speed, but how it reacts in the field varies)

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
