// Week10 - 조도 센서(LDR)
void loop() {
  int a = analogRead(A1);
  Serial.println(a);
  delay(100);
}