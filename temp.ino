int led = D7;

void setup() {
    pinMode(led,OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);
    
    String temp = String(random (60,80));
    Particle.publish("temp",temp,PRIVATE);
    delay(3000);
    
    digitalWrite(led, LOW);
    delay(3000);
}