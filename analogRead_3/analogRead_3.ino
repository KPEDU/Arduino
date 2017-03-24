int pin1 = 4;
int pin2 = 3;
int pin3 = 2;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Luetaan analog 0-portin jännite:
  int sensorValue = analogRead(A0);
  // Muutetaan portin antaman arvoalue (0-1023) asteikkoon 0-255:
  int value = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(pin2, value);
  
  // Tulostetaan arvo sarjamonitoriin:
  Serial.println(value);
}
