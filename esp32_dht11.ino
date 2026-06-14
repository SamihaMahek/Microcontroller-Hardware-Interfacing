#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    float humidity = dht.readHumidity();
    float Temperature = dht.readTemperature();
    
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("%\t");
    
    Serial.print("Temperature: ");
    Serial.print(Temperature);
    Serial.println("C");
    
    delay(2000);
}
