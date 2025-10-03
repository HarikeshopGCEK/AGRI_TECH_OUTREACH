#include <Arduino.h>
#include <DHT.h>

#define DHT_PIN 15
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(DHT_PIN, INPUT);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.println(humidity);
  Serial.println(temperature);
  delay(1000);
}
