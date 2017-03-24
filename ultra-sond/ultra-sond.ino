#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);     // asetetaan kaiutin lähetysmoodiin
  pinMode(echoPin, INPUT);      // asetetaan mikrofoni vastaanottomoodiin
  pinMode(led, OUTPUT);      
  pinMode(led2, OUTPUT);
}

void loop() {
  long duration, distance;  
  
  digitalWrite(trigPin, LOW);   // hiljennetään kaiutin
  delayMicroseconds(2);         // odotetaan 0,002 sek
  digitalWrite(trigPin, HIGH);  // lähetetään ultraäänipulssia
  delayMicroseconds(10);        // odotetaan 0,010 sek
  digitalWrite(trigPin, LOW);   // sammutetaan kaiutin

  // pulseIn odottaa, kunnen echoPinin tila muuttuu
  // 10 mikrosekunnin äänipulssi etenee 300 m/s, joten metrin
  // matkan kuluu aikaa 0,00333 sek
  // pulseIn mittaa kuluneen ajan mikrosekunneissa
  duration = pulseIn(echoPin, HIGH);

  // 300 m/s = 0,3 mm/us
  distance = (duration/2) / 29.1;
  if (distance < 4) {  // This is where the LED On/Off happens
    digitalWrite(led,HIGH); // When the Red condition is met, the Green LED should turn off
  digitalWrite(led2,LOW);
}
  else {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
