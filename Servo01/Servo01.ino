#include <Servo.h>  // Ladataan Servo-kirjasto

Servo myservo;      // otetaan servo-koodi käyttöön

int potPin = 0;     // analogi portin numero
int val;            // apumuuttuja minne tallennetaan potentiometrin arvo

void setup() {
  myservo.attach(9);  // Ohjataan servoa portista 9
}

void loop() {
  val = analogRead(potPin);            // Luetaan potentiometrin arvo (0 - 1023)
  val = map(val, 0, 1023, 0, 180);     // skaalataan potentiometrin arvot servolle sopiviksi (0 - 180 astetta)
  myservo.write(val);                  // asetetaan sopiva arvo

  // viiveeksi aina vähintään 20 ms
  delay(20);                           // annetaan servolle aikaa löytää oikea asento
}

