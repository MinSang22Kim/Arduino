// Week9 - PWM으로 밝기 증감 조절
#define PWM_PIN 2          // 2번 핀에 LED 연결
#define UP_BUTTON_PIN 3    // 밝기 증가 버튼 연결 핀
#define DOWN_BUTTON_PIN 4  // 밝기 감소 버튼 연결 핀

int brightness = 0;        // LED 밝기 초기화
int fadeAmount = 10;       // 밝기 증감량 (기본값)

void setup() {
    pinMode(PWM_PIN, OUTPUT);         // PWM 핀을 출력 모드로 설정
    pinMode(UP_BUTTON_PIN, INPUT);    // 밝기 증가 버튼을 입력 모드로 설정
    pinMode(DOWN_BUTTON_PIN, INPUT);  // 밝기 감소 버튼을 입력 모드로 설정
}

void loop() {
    analogWrite(PWM_PIN, brightness);  // PWM을 통해 밝기 출력

    // 스위치 입력에 따라 밝기 증감 조정
    if (digitalRead(UP_BUTTON_PIN) == HIGH) {
        brightness += fadeAmount;  // 밝기 증가
        if (brightness > 255) brightness = 255;  // 최대 밝기 제한
    }
    if (digitalRead(DOWN_BUTTON_PIN) == HIGH) {
        brightness -= fadeAmount;  // 밝기 감소
        if (brightness < 0) brightness = 0;  // 최소 밝기 제한
    }

    Serial.println(brightness);
    analogWrite(PWM_PIN, brightness);
    delay(100);  // 100ms(0.1초) 대기
}