#include <Servo.h>

Servo myservo;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(12,INPUT);
  myservo.attach(8);

}

void loop() {
  // put your main code here, to run repeatedly:
  int btnState1 = digitalRead(12);
    if(btnState1 == 1){
      myservo.write(0);
      digitalWrite(3,HIGH);
      delay(500);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      delay(500);
      digitalWrite(4,LOW);
      myservo.write(90);
    }
}

