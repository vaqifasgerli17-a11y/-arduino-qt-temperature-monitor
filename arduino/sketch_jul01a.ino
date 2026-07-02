#include "DHT.h"
#define DHTPIN 2     
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(3000); // DHT11 üçün 2 saniyəlik gözləmə

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("ERROR");
    return;
  }

  Serial.print(temperature);
  Serial.print(",");
  Serial.println(humidity);
}
