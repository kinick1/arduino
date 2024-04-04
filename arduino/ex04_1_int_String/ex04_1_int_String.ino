void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  // if(Serial.available()){
  //   int num=Serial.parseInt();   // 정수형으로 받아오기
  //   if(num==1){
  //     digitalWrite(13,1);
  //   }
  //   else if(num==0){
  //     digitalWrite(13,0);
  //   }
  // }

  if(Serial.available()){
    String txt=Serial.readString();   //문자열로 받아오기
    Serial.println(txt);
    if(txt=="on"){
      digitalWrite(13,1);
      Serial.println("led on");
    }
    else if(txt=="off"){
      digitalWrite(13,0);
      Serial.println("led off");
    }
  }
}
