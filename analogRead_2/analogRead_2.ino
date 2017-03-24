int pin1 = 7;
int pin2 = 6;
int pin3 = 5;
int pin4 = 4;
void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Luetaan analog 0-portin jännite:
  int sensorValue = analogRead(A0);
  // Muutetaan portin antaman arvoalue (0-1023) jännitteeksi 0.0-5.0 V:
  float voltage = map(sensorValue, 0, 1023, 0, 500)/100.00;

  if(voltage < 1.25) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  } else if(voltage >= 1.25 && voltage < 2.50) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  } else if(voltage >= 2.50 && voltage < 3.75) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
  } else if(voltage >= 3.75) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);  
  }
  // Tulostetaan arvo sarjamonitoriin:
  Serial.println(voltage);
}
