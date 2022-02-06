// when uploading this sketch, remove the GND and V5 connection or else it's gonna error because there isn't enough power for the rotary motor and usb upload.

#include <ESP32Servo.h>

#define inputCLK 2
#define inputDT 0
#define servoInput 15

Servo myServo;

int counter = 0;
int currentCLK;
int previousCLK;

String endir = "";

void setup() {
  // put your setup code here, to run once:

  pinMode(inputCLK, INPUT);
  pinMode(inputDT, INPUT);

  Serial.begin(9600);

  myServo.attach(servoInput);
  previousCLK = digitalRead(inputCLK);
}

void loop() {
  currentCLK = digitalRead(inputCLK);

  if (currentCLK != previousCLK) {

    if (digitalRead(inputDT) != currentCLK) {
      counter = counter - 10;
      endir = "CCW";

      if(counter < 0) {
        counter = 0;
        }


      
    } else {
      counter = counter + 10;
      endir = "CW";

            if(counter > 180) {
        counter = 180;
        }

    }
    myServo.write(counter);
    Serial.print("Direction:   ");
    Serial.print(endir);
    Serial.print(" -- Count:");
    Serial.print(counter);


  }
    previousCLK = currentCLK;

}
