#include "DHT.h"
#define DHTPIN 2 
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 dht.begin();
 }

void loop() {
  // put your main code here, to run repeatedly:
 float h = dht.readHumidity(DHTPIN);
 float t = dht.readTemperature(DHTPIN);
 Serial.println("Humidity: ");
 Serial.println(h);
 delay(1000);
 Serial.println();
 Serial.println("Temperature: ");
 Serial.println(t);
 delay(1000);
}
