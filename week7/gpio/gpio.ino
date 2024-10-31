// Week7 : GPIO 입력 제어 with 스위치

#define SWITCH_PIN1 4      // 입력 스위치 핀
#define SWITCH_PIN2 2      // 출력 LED 핀

int state = 0;             // 스위치 상태를 저장할 변수

void setup() {
    pinMode(SWITCH_PIN1, INPUT);   // SWITCH_PIN1을 입력 모드로 설정
    pinMode(SWITCH_PIN2, OUTPUT);  // SWITCH_PIN2을 출력 모드로 설정
    Serial.begin(9600);            // 시리얼 통신 시작, 속도는 9600bps
}

void loop() {
    int v = digitalRead(SWITCH_PIN1);    // SWITCH_PIN1의 입력값을 읽어서 변수 v에 저장
    Serial.print("Switch:");             // 스위치 상태 출력 시작

    if(v == HIGH) {                      // 스위치가 눌렸을 때
        Serial.println("ON");            // 시리얼로 "ON" 출력
        digitalWrite(SWITCH_PIN2, HIGH); // LED 켜기
    }
    else {                               // 스위치가 눌리지 않았을 때
        Serial.println("OFF");           // 시리얼로 "OFF" 출력
        digitalWrite(SWITCH_PIN2, LOW);  // LED 끄기
    }

    delay(100);                          // 100ms 대기
}
