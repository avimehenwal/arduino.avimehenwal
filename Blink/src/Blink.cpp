#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.print("LED Number : ");
  Serial.println(LED_BUILTIN); 
  Serial.print(digitalRead(LED_BUILTIN)); 
  
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print(digitalRead(LED_BUILTIN));
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print(digitalRead(LED_BUILTIN));
  delay(1000);
}
