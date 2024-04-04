#include <LiquidCrystal.h>
#include "DHT.h"

#define DHTPIN 17
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);

const int rs = 14, en = 12, d4 = 13, d5 = 5, d6 = 23, d7 = 19;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte heart[8]={
  B00010,B00101,B00010,B00000,B00000,B00000,B00000
};

void setup() {
  lcd.begin(16, 2);
  dht.begin();
  lcd.createChar(0,heart);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print(t);
  lcd.setCursor(5,1);
  lcd.write(byte(0));
  lcd.print("C");
}
// vss gnd연결 (-)
// vdd 전원연결 (+)
// vo 가변저항을 색상 대비조정 (명암)
// RS 명령/데이터 레지스터 선택
// RW 읽기/쓰기 선택
// E LCD활성화신호
// DB0~DB7 데이터비트 0~7 (8비트에서는 모든 핀 사용) 

