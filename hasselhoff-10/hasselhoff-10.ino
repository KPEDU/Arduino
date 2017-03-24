// otetaan portit 2-6 käyttöön
int iLedPin2 = 2;
int iLedPin3 = 3;
int iLedPin4 = 4;
int iLedPin5 = 5;
int iLedPin6 = 6;
int iLedPin7 = 7;

int iDelay = 200;

void vVilauta(int iPort, int iDelay) {
  delay(iDelay);
  digitalWrite(iPort, HIGH);
  delay(iDelay);
  digitalWrite(iPort, LOW);
}

void setup() {
  // asetetaan portit OUTPUT-modeen
  pinMode(iLedPin2, OUTPUT);
  pinMode(iLedPin3, OUTPUT);
  pinMode(iLedPin4, OUTPUT);
  pinMode(iLedPin5, OUTPUT);
  pinMode(iLedPin6, OUTPUT);
  pinMode(iLedPin7, OUTPUT);
}

void loop() {
  vVilauta(iLedPin2,iDelay);
  vVilauta(iLedPin3,iDelay);
  vVilauta(iLedPin4,iDelay);
  vVilauta(iLedPin5,iDelay);
  vVilauta(iLedPin6,iDelay);
  vVilauta(iLedPin7,iDelay);
  vVilauta(iLedPin6,iDelay);
  vVilauta(iLedPin5,iDelay);
  vVilauta(iLedPin4,iDelay);
  vVilauta(iLedPin3,iDelay);
}
