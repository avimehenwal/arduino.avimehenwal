/*
  Control LED connected to PIN anode(+) and cathode(-)
  13 - Anode
  12 - Cathode
*/

int anode = 13;
int cathode = 12;

void setup() {
  Serial.begin(9600);
  Serial.println("--Restart--");
  Serial.print(digitalRead(anode));Serial.print(digitalRead(cathode));Serial.print("\t");
  pinMode(anode, OUTPUT);
  pinMode(cathode, OUTPUT);
  Serial.print(digitalRead(anode));Serial.print(digitalRead(cathode));Serial.print("\t");
  digitalWrite(anode, HIGH);
  digitalWrite(cathode, LOW);
  Serial.print(digitalRead(anode));Serial.print(digitalRead(cathode));Serial.print("\t");
  Serial.println("");
}

void loop(void) {
  delay(1000);
  digitalWrite(anode, LOW);
  delay(1000);
  digitalWrite(anode, HIGH);
}

