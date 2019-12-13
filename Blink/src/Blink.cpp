#include <Arduino.h>

#define RELAY 7
#define WAIT 9000
// const int RELAY = 7;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.print("LED Number : ");
  Serial.println(LED_BUILTIN); 
  Serial.print(digitalRead(LED_BUILTIN)); 
  
  pinMode(RELAY, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print(digitalRead(LED_BUILTIN));
  digitalWrite(RELAY, HIGH);
  delay(WAIT);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.print(digitalRead(LED_BUILTIN));
  digitalWrite(RELAY, LOW);
  delay(WAIT);
}
