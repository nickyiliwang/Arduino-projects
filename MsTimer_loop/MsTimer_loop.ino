// Toggle LED on pin 13 each second
#include <MsTimer2.h>

void flash() {
  static boolean output = HIGH;

  digitalWrite(13, output);
  output = !output;
}

void crash() {
  static boolean output = HIGH;

delay(1000);
  digitalWrite(9, output);
  output = !output;
}

void doAllTheThings() {
  flash();
  
  crash();

}


void setup() {
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);

  MsTimer2::set(1500, doAllTheThings);
  MsTimer2::start();
}

void loop() {
}
