int iLedPin = 12;
void setup() {
  pinMode(iLedPin, OUTPUT);
}
void loop() {
  delay(500);
  digitalWrite(iLedPin, HIGH);
  delay(500);
  digitalWrite(iLedPin, LOW);
}
