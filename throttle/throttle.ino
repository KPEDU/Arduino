
void setup() {
  Serial.begin(9600);
}

void loop() {
  // Luetaan jännite A0-portista
  int sensorValue = analogRead(A0);
  
  // Muutetaan luettu arvo 0-100 % 
  // map-komennolla voidaan myös helposti kalibroida kaasu
  float voltage = map(sensorValue,300,1023,0,100);
  
  // Lähetetään jänniten sarjamonitoriin
  Serial.print(voltage);
  Serial.print(" ");
  Serial.println(sensorValue);
  
}

