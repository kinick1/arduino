void setup() {
  Serial.begin(115200);
  ledcSetup()

}

void loop() {
  int value=analogRead(2);
  Serial.println(value);
  delay(1000);
  if(value>500){
    ledcWrite()
  }
}
