void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,1);
  delay(10);
  digitalWrite(3,0);
  int duration=pulseIn(2,1);
  duration=duration/2;
  int distance= duration/29.1;
  Serial.println(distance);
switch(distance){
    case 1 : 
        tone(9,261.6256);
        delay(100);
        break;
    case 3 : 
        tone(9,277.1826);
         delay(100);
         break;
    case 5 : 
        tone(9,293.6648);
        delay(100);
        break;
    case 10 : 
        tone(9,311.6276);
         delay(100);
         break;
    default :
      noTone(9);
        break;    
}
  delay(1000);
}
