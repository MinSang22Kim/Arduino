// Week10 - 거리 측정(초음파 센서)
#define TRIG 2
#define ECHO 3

void setup() {
  Serial.begin(9600);
  while(!Serial);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  digitalWrite(TRIG, LOW);

  delay(1000);
}

void loop() {
  long duration, distance;
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration / 58;

  Serial.print("Disatnce : ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}