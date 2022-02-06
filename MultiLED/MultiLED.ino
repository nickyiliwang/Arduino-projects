int ledPin1 = 13;
int ledPin2 = 32;
void setup() {
  Serial.begin(115200);
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
}
void loop() {
  digitalWrite(ledPin1, HIGH);
  delay(1000);
  digitalWrite(ledPin2, HIGH);
  delay(1500);
  
  digitalWrite(ledPin1, LOW);
  delay(1500);
  digitalWrite(ledPin2, LOW);
  delay(500);
}
