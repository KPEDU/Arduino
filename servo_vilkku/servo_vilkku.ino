#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600); 
  myservo.attach(9);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  myservo.write(90);
  delay(150);
}

void loop() {
  int l = digitalRead(6);
  int r = digitalRead(7);

  if(l==HIGH) {
    myservo.write(45);  
    delay(700);
    myservo.write(55);
    delay(700);
  } else if(r==HIGH) {
    myservo.write(135);  
    delay(700);
    myservo.write(145);
    delay(700);
  } else {
    myservo.write(90);  
  }
  
  Serial.print(l);
  delay(15);
  Serial.write(" ");
  delay(15);
  Serial.println(r);
  delay(150);
}
