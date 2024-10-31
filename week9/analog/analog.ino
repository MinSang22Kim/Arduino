// Week9 : 아날로그 입력값 읽어오기
// 100ms마다 A1 핀의 값을 읽어서 시리얼 모니터에 출력

void setup() {
    pinMode(A1, INPUT);        // A1 핀을 입력 모드로 설정
    Serial.begin(9600);        // 시리얼 통신 속도를 9600bps로 설정
}

void loop() {
    int a = analogRead(A1);    // A1 핀의 아날로그 값을 읽어서 변수 a에 저장
    Serial.println(a);         // 변수 a의 값을 시리얼 모니터에 출력
    delay(100);                // 100ms 대기
}
