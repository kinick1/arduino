void setup() {
  ledcSetup(0,5000,8);  // ledcSetup(채널, 주파수, 해상도)
  ledcAttachPin(18,0);  // ledcAttachPin(gpio핀 번호, pwm채널)
  ledcSetup(1,5000,16);
  ledcAttachPin(19,1);
}

void loop() {
  ledcWrite(0,0);        // ledcWrite(채널, 밝기)
  delay(1000);
  ledcWrite(0,255);
  delay(1000);

  ledcWrite(1,127);        // 16비트
  delay(1000);
  ledcWrite(1,255);
  delay(1000);


}
