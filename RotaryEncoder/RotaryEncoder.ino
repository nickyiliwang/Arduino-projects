#define inputCLK 2
#define inputDT 0

int counter = 0;
int currentCLK;
int previousCLK;

String endir = "";

void setup() {
  // put your setup code here, to run once:

  pinMode(inputCLK, INPUT);
  pinMode(inputDT, INPUT);
//
//  Serial.begin(115200);

  previousCLK = digitalRead(inputCLK);
}

void loop() {
  currentCLK = digitalRead(inputCLK);

  if (currentCLK != previousCLK) {

    if (digitalRead(inputDT) != currentCLK) {
      counter--;
      endir = "CCW";
    } else {
      counter++;
      endir = "CW";
    }



Serial.print("Direction:");
Serial.print(endir);
Serial.print("Count:");
Serial.print(counter);
  }


}
