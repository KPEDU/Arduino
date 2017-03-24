int leds[] = {5,6,9,10,11};           // ledi
int brightness = 0;    // kirkkausaste == aallon pituus on 0
int fadeAmount = 5;    // kuinka paljon kirkastuu kerrallaan
int u=0;
void setup() {
  for(int i=0;i<5;i++) {
    pinMode(leds[i], OUTPUT);
  }
  
}
void cleanLeds() {
  for(int i=0;i<5;i++) {
    analogWrite(leds[i], 0);
  }  
}
void loop() {
  for(u=0;u<5;u++) {
    cleanLeds();
    for(int br=0;br<255;br=br+fadeAmount) {
      analogWrite(leds[u], br);
      if((u-1)>-1) analogWrite(leds[u-1], (int) (br/5));
      if((u-2)>-1) analogWrite(leds[u-2], (int) (br/10));     
    }
    delay(250);
  }

  for(u=4;u>-0;u--) {
    cleanLeds();
    for(int br=0;br<255;br=br+fadeAmount) {
      analogWrite(leds[u], br);
      if((u+1)<5) analogWrite(leds[u+1], (int) (br/5));
      if((u+2)<5) analogWrite(leds[u+2], (int) (br/10));      
    }
    delay(250);
  }
}

