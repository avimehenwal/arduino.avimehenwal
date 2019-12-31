// KY-037 Sound sensor

#include <Arduino.h>

const int sound_in_a = A0;
const int sound_in_d = 2;
const int led        = 13;

int wait      = 100;
int threshold = 520;
int volume, voltage;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);

  pinMode(sound_in_a, INPUT);
  pinMode(sound_in_d, INPUT);
}

void loop() {
  volume  = analogRead(sound_in_a);
  voltage = volume * (5.0 / 1023.0);

  // Logging for debugging
  Serial.print(volume);
  Serial.print("\t");
  Serial.print(voltage);
  Serial.print("\t");
  Serial.println(digitalRead(sound_in_d));

  // LED sound control
  if(volume >= threshold){
    digitalWrite(led, HIGH); //Turn ON Led
  }  
  else{
    digitalWrite(led, LOW); // Turn OFF Led
  }

  delay(wait);
}