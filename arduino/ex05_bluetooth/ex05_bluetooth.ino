void setup() {
  pinMode(18,OUTPUT);
  pinMode(26,INPUT);
}
int buttonState = 0;
void loop() {
  // digitalWrite(18,1);
  // delay(10);
  // digitalWrite(18,0);
  // delay(10);

  // buttonState = digitalRead(26);   // 조건문을 이용해 26번 포트에 연결된 버튼의 상태 저장
  // if (buttonState == HIGH) {       //버튼이 1일때 불을 킨다
  //   digitalWrite(18, HIGH);    
  // } else {                         // 버튼이 1이 아니라면 불을 끈다
  //   digitalWrite(18, LOW);
  // }

  // int btn=digitalRead(26);            // 간단히 축약한 버전
  // digitalWrite(18,btn);
}
