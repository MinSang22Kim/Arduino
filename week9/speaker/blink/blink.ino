// Week9 - PWM으로 음계 출력하기
#define PWM_PIN 2  // 2번 핀에 스피커 연결

#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523

void setup() {
    pinMode(PWM_PIN, OUTPUT);  // PWM 핀을 출력 모드로 설정
}

void loop() {
    tone(PWM_PIN, NOTE_C4);
    delay(1000);
    tone(PWM_PIN, NOTE_D4);
    delay(1000);
    tone(PWM_PIN, NOTE_E4);
    delay(1000);
    tone(PWM_PIN, NOTE_F4);
    delay(1000);
    tone(PWM_PIN, NOTE_G4);
    delay(1000);
    tone(PWM_PIN, NOTE_A4);
    delay(1000);
    tone(PWM_PIN, NOTE_B4);
    delay(1000);
    tone(PWM_PIN, NOTE_C5);
    delay(1000);
}
