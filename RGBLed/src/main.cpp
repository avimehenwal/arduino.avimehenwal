#include <Arduino.h>

int redPin   = 7;
int greenPin = 6;
int bluePin  = 5;
int wait     = 1000;
int red, green, blue;


void setup() {
  Serial.begin(9600);
  pinMode(redPin,   OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin,  OUTPUT);
  Serial.println("RED\tGREEN\tBLUE");
}

void setColor(int redValue, int greenValue, int blueValue) {
  Serial.print(redValue);
  Serial.print("\t");
  Serial.print(greenValue);
  Serial.print("\t");
  Serial.print(blueValue);
  Serial.println("");
  analogWrite(redPin,   redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin,  blueValue);
}

void loop() {
  red   = random(0, 255);
  blue  = random(0, 255);
  green = random(0, 255);
  setColor(red, blue, green);
  delay(wait);
}

// void loop() {
//   setColor(255, 0, 0); // Red Color
//   delay(1000);
//   setColor(0, 255, 0); // Green Color
//   delay(1000);
//   setColor(0, 0, 255); // Blue Color
//   delay(1000);
//   setColor(255, 255, 255); // White Color
//   delay(1000);
//   setColor(170, 0, 255); // Purple Color
//   delay(1000);
// }

// void loop() {
//   for (int r = 0; r < 255; r=r+10) {
//     for (int g=0; g<255; g=g+10) {
//       for (int b=0; b<255; b=b+10) {
//         setColor(r, g, b);
//         delay(10);
//       }
//       delay(10);
//     }
//     delay(10);
//   }
//   delay(10);
// }