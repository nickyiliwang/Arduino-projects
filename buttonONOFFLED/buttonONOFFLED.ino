#define LED 2
#define Button 0

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
}

void loop() {
  int ButtonState = digitalRead(Button);

  if (ButtonState == HIGH) {
    digitalWrite(LED, LOW);
    Serial.print("Hello world");
  }

  if (ButtonState == LOW) {
    digitalWrite(LED, HIGH);
  }
}
