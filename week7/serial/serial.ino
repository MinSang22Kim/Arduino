// Week 7 : Serial API를 사용한 메시지 출력

void setup() {
  Serial.begin(9600);  // 시리얼 통신을 9600bps로 시작
}

void loop() {
  Serial.println("Hello World");  // "Hello World" 메시지를 시리얼 모니터에 출력
  delay(1000);                    // 1초(1000밀리초) 대기
}
