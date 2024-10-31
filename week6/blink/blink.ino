// Week6 - 두 개의 LED 깜빡이기
#define LED_PIN1 2
#define LED_PIN2 3

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN1, HIGH);
  delay(500);
  digitalWrite(LED_PIN1, LOW);
  delay(500);
  digitalWrite(LED_PIN2, HIGH);
  delay(500);
  digitalWrite(LED_PIN2, LOW);
  delay(500);
}
