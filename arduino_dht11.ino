#include <DHT.h>

#define DHT_PIN 4
#define DHTTYPE DHT11

DHT dht(DHT_PIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    float H = dht.readHumidity();
    float Temp = dht.readTemperature();
    
    Serial.print("Humidity: ");
    Serial.print(H);
    Serial.print("%\t");
    
    Serial.print("Temperature: ");
    Serial.print(Temp);
    Serial.println("C");
    
    delay(2000);
}
