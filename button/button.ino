const int buttonPin = 2;     // painonapin portti = 2
const int ledPin =  13;      // ledin portti = 13

// variables will change:
int buttonState = 0;         // painonapin tila = ei painettu

void setup() {
  // asetetaan led-portti OUTPUT-tilaan
  pinMode(ledPin, OUTPUT);
  // asetetaan painonappi INPUT-tilaan
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Luetaan painonapin tila
  // digitalRead()-komento lukee onko painonappia painettu
  // HIGH = painettu
  // LOW = ei painettu
  buttonState = digitalRead(buttonPin); // tallennetaan tila muuttujaan

  // if-komennolla tarkistetaan onko nappia painettu vai ei
  // jos buttonState on HIGH, niin: 
  if (buttonState == HIGH) {
    // sytytä led
    digitalWrite(ledPin, HIGH);
  } else {
    // muuten sammutetaan led
    digitalWrite(ledPin, LOW);
  }
}

// Harjoitus
// Muuta koodia siten että kun painat nappia, niin led syttyy pysyvästi
// ja kun painat nappia, niin led sammuu pysyvästi
