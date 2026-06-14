#define trigpin 9
#define echopin 8

int Time;
long distance;

void setup() {
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
    Serial.begin(115200); // Higher baud rate for Arduino
}

void loop() {
    digitalWrite(trigpin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigpin, LOW);
    
    Time = pulseIn(echopin, HIGH);
    distance = (0.034 * Time) / 2; // Physics conversion math logic
    
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
    
    delay(1000);
}
