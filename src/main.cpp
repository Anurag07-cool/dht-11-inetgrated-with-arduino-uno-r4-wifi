#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 sensor initialized");
}

void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("% ");
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");
    delay(2000);
}