#define trig 12
#define echo 13

void setup() {
    Serial.begin(9600);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}

void loop() {
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    
    float t = pulseIn(echo, HIGH);
    float d = (t * 0.034) / 2; // Precise floating point math
    
    Serial.print("Distance = ");
    Serial.println(d);
    
    delay(2000);
}
