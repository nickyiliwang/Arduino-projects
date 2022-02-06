int ledPin = 12;
void setup() {
pinMode (ledPin, OUTPUT);

Serial.begin(115200);
}
void loop() {
  Serial.print("Hello0000 ");
   digitalWrite(ledPin, HIGH);
  delay(1000);

  Serial.println(" WOrld !!!!");
  
digitalWrite(ledPin, LOW);
delay(1500);
}
