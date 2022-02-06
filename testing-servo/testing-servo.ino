#include <Servo.h>

Servo myservo1;

void setup() {
  // put your setup code here, to run once:
  myservo1.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo1.write(40);
  delay(1000);
  myservo1.write(80);
  delay(1000);
}
