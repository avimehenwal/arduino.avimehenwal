/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  Pin 13 has an LED connected on most Arduino boards.

  Arduino programs are called SKETCHE.
  PINs could be configured as I/P or O/P.
  Digiatal and Analog PINs
  
 the setup routine runs once when you press reset: Runs ONLY once on powerup/restart
 initialises and setup the initial values.
*/

int led = 13;
void setup() {                
  pinMode(led, OUTPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps:
  Serial.print(digitalRead(led));  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.print("------- NEW CYCLE -------");
  Serial.print(digitalRead(led));
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print(digitalRead(led));
  
  delay(500);  // wait for a second
  Serial.print(digitalRead(led));
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  Serial.print(digitalRead(led));
  delay(1000);               // wait for a second
}
