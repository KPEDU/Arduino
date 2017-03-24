void setup() {
  Serial.begin(9600);
}

void loop() {
  // Luetaan analog 0-portin jännite:
  int sensorValue = analogRead(A0);
  // Muutetaan portin antaman arvoalue (0-1023) jännitteeksi 0.0-5.0 V:
  float voltage = map(sensorValue, 0, 1023, 0, 500)/100.00;
  // Tulostetaan arvo sarjamonitoriin:
  Serial.println(voltage);
}
