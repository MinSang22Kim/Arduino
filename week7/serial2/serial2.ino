// Week 7 : Serial 통신으로 입출력하기

void setup() {
  Serial.begin(9600);  // 시리얼 통신을 9600bps로 시작
}

void loop() {
  while (Serial.available()) {     // 시리얼 입력이 있을 때만 실행
    int c = Serial.read();         // 시리얼 입력 값을 하나 읽어서 변수 c에 저장
    Serial.write(c);               // 읽은 값을 그대로 시리얼로 다시 출력 (에코)
  }
  delay(100);                      // 100밀리초 대기 후 다시 확인
}
