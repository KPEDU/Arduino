const int buttonPin = 2;    // painonappi = pin 2
const int ledPin = 13;      // ledin = pin 13
int ledState = HIGH;         // ledin tila
int buttonState;             // napin tila
int lastButtonState = LOW;   // viimeisin napin tila
unsigned long lastDebounceTime = 0;  // 
unsigned long debounceDelay = 50;    // kohinan aika

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  int reading = digitalRead(buttonPin);   // luetaan napin tila muuttujaan
  
  // jos napin tila on eri, kuin viimeisin napin tila, niin nollataan värinän mittausaika
  if (reading != lastButtonState) {
    // millis() kertoo ajan millisekuinteina arduinon käynnistyksestä
    lastDebounceTime = millis();    // viimeisin värinäaika
  }

  // jos (nykyinen aika - viimeisin värinäaika) > viive), niin 
  if ((millis() - lastDebounceTime) > debounceDelay) {

    // jos luettu tila on eri kuin napin nykyinen tila
    if (reading != buttonState) {
      buttonState = reading;  // napin tila = luetti tila

      // jos nappi == HIGH, niin 
      if (buttonState == HIGH) {
        ledState = !ledState;     // vaihda ledin tilaa
      }
    }
  }
  // asetetaan ledn tila
  digitalWrite(ledPin, ledState);
  // tallennetaan viimeisin painonapin tila
  lastButtonState = reading;
}
