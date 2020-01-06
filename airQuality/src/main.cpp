#include <Arduino.h>

#define sensor A0
#define WAIT 5000

int gasLevel = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sensor, INPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  Serial.begin(9600);
  Serial.print("LED Number : ");
  Serial.println(LED_BUILTIN); 
  Serial.print(digitalRead(LED_BUILTIN)); 
}

void loop()
{
  gasLevel = analogRead(sensor);
  Serial.print(gasLevel);
  Serial.print("\t");
  delay(WAIT);
}
