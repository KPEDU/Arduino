int led = 9;           // ledi
int brightness = 0;    // kirkkausaste == aallon pituus on 0
int fadeAmount = 5;    // kuinka paljon kirkastuu kerrallaan

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // asetetaan kirkkaus 
  analogWrite(led, brightness);

  // kasvatetaan kirkkautta:
  brightness = brightness + fadeAmount;

  // jos kirkkaus on pienempi tai yhtäsuuri kuin nolla tai
  // suurempi tai yhtäsuuri kuin 255:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;    // käännetään suuntaa
  }
  delay(30);
}

