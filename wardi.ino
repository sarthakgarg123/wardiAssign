
int potPin = A0;
int ledPin = 9;

void setup() {
 pinMode(ledPin, OUTPUT);
}

void loop() {
 int value = analogRead(potPin);
 if(value < 512) {
   digitalWrite(ledPin, LOW);
 }
 else {
   digitalWrite(ledPin, HIGH);
 }
}
