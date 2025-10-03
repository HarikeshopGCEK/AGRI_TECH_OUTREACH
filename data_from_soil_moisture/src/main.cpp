#include <Arduino.h>
#define SENSOR_PIN 34
#define MAX_VALUE 540
#define MIN_VALUE 200

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue);
  delay(1000);
  int soilMoisture = map(sensorValue, MIN_VALUE, MAX_VALUE, 0, 100);
  Serial.println(soilMoisture);
  delay(1000);
}