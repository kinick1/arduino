void setup() {
  Serial.begin(9600); // Serial 통신의 속도를 설정
  pinMode(13,OUTPUT); // rgb다이오드에 연결한 포트 사용선언

}

void loop() {
  // Serial.println("hello");
  if(Serial.available()){ //Serial 통신이 가능한지 판단
    char txt=Serial.read(); // Serial이 사용자에게 입력받은 데이터를 char타입으로 txt변수에 저장
    if(txt=='1'){   // 만약 txt가  '1'과 같다면
      digitalWrite(13,1);   // 13번 핀에 연결된 rgb다이오드를 켜라
    }
    else if(txt=='0'){  
      digitalWrite(13,0);
    }
  }
}
