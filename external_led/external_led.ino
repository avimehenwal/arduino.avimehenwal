/*
  Control LED connected to PIN 9(+) and 8(-)
  9 - Anode
  8 - Cathode
*/

void setup() {
  Serial.begin(9600);
  Serial.println("--Restart--");
  Serial.print(digitalRead(9));Serial.print(digitalRead(8));Serial.print("\t");
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.print(digitalRead(9));Serial.print(digitalRead(8));Serial.print("\t");
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  Serial.print(digitalRead(9));Serial.print(digitalRead(8));Serial.print("\t");
  Serial.println("");
}

void loop(void) {
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(9, HIGH);
}

