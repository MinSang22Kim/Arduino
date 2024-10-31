// Week9 - PWM으/Users/kimminsang/Documents/Arduino/week7/blink/blink.ino로 음계 출력하기
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

// Week9 - PWM with Brightness Control using Switches
// #define PWM_PIN 2          // 2번 핀에 LED 연결
// #define UP_BUTTON_PIN 3    // 밝기 증가 버튼 연결 핀
// #define DOWN_BUTTON_PIN 4  // 밝기 감소 버튼 연결 핀

// int brightness = 0;        // LED 밝기 초기화
// int fadeAmount = 10;       // 밝기 증감량 (기본값)

// void setup() {
//     pinMode(PWM_PIN, OUTPUT);         // PWM 핀을 출력 모드로 설정
//     pinMode(UP_BUTTON_PIN, INPUT);    // 밝기 증가 버튼을 입력 모드로 설정
//     pinMode(DOWN_BUTTON_PIN, INPUT);  // 밝기 감소 버튼을 입력 모드로 설정
// }

// void loop() {
//     analogWrite(PWM_PIN, brightness);  // PWM을 통해 밝기 출력

//     // 스위치 입력에 따라 밝기 증감 조정
//     if (digitalRead(UP_BUTTON_PIN) == HIGH) {
//         brightness += fadeAmount;  // 밝기 증가
//         if (brightness > 255) brightness = 255;  // 최대 밝기 제한
//     }
//     if (digitalRead(DOWN_BUTTON_PIN) == HIGH) {
//         brightness -= fadeAmount;  // 밝기 감소
//         if (brightness < 0) brightness = 0;  // 최소 밝기 제한
//     }

//     Serial.println(brightness);
//     analogWrite(PWM_PIN, brightness);
//     delay(100);  // 100ms(0.1초) 대기
// }


// #define LED_PIN1 2


// Week7 : Serial API 
// void setup(){
//   Serial.begin(9600);
// }

// void loop(){
//   Serial.println("Hello World");
//   delay(1000);
// }

// Week7 - print letter with serial
// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   while(Serial.available()) {
//     int c = Serial.read();
//     Serial.write(c);
//   }
//   delay(100);
// }

// GPIO 입력 제어: 스위치
// #define SWITCH_PIN 4

// void setup() {
//   pinMode(SWITCH_PIN, INPUT);
//   Serial.begin (9600);
// }

// void loop() {
//   int v = digitalRead(SWITCH_PIN);
//   Serial.print("Switch:");
//   Serial.println(v);
//   delay (100);
// }

// Week9 : GPIO 입력 제어
// #define SWITCH_PIN1 4
// #define SWITCH_PIN2 2

// int state = 0;

// void setup() {
//   pinMode(SWITCH_PIN1, INPUT);
//   pinMode(SWITCH_PIN2, OUTPUT);
//   Serial.begin (9600);
// }

// void loop() {
//   int v = digitalRead(SWITCH_PIN1);
//   Serial.print("Switch:");
//   if(v == HIGH) {
//     Serial.println("ON");
//     digitalWrite(2, HIGH);
//   }
//   else {
//     Serial.println("OFF");
//     digitalWrite(2, LOW);
//   }
//   delay (100);
// }