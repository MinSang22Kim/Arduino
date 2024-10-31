// Week 6 : 스위치를 통한 밝기 증감 조절
void loop() {
    analogWrite(PWM_PIN, brightness);  // PWM을 통해 밝기 출력

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