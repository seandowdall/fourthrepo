/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
  
  CREATORS OF BUTTON
   created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
const int LEDpin = 3;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop()
{
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  int i = analogRead(A0);
  
  if (i>500)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);     
  }


  else
  {
    digitalWrite(LEDpin, LOW);
  }

  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}
