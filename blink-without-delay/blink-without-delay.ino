
unsigned long currentMillis;

//each new timer requires similar three lines of code
unsigned long Millis13;
boolean       repeat13    = true; //repeat this sequence?
boolean       flag13      = true; //is this timer enabled?
//

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  //***************************   HeartBeat LED
  //toggle pin 13 every 200mS
  if (flag13 == true && CheckTime(Millis13, 500ul, repeat13)) // 60*1000ul
  {
    //toggle pin 13
    digitalWrite(13, !digitalRead(13));

    //if you only want this section of code to happen once
    //uncomment the next line
    //flag13 = false; //disables the above code
  }
  //***************************


  //put other non-blocking stuff here

}

//Delay time expired function
//lastMillis = time we started, wait = delay in mS, restart = do we start again
boolean CheckTime(unsigned long &lastMillis, unsigned long wait, boolean restart)
{
  //is the time up for this task?
  if (millis() - lastMillis >= wait)
  {
    //should this start again?
    if (restart)
    {
      //get ready for the next iteration
      lastMillis = millis(); //get ready for the next iteration
    }
    return true;
  }
  return false;

}
