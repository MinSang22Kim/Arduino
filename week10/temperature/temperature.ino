// Week10 - 온습도 측정(DHT-11)
#include <DHT.h>

#define DHTPIN 2         // 핀 번호
#define DHTTYPE DHT11    // DHT 센서 타입 설정 (DHT11)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    float h = dht.readHumidity();      // 습도 읽기
    float t = dht.readTemperature();   // 온도 읽기

    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print("%\tTemperature: ");
    Serial.print(t);
    Serial.println("°C");

    delay(1000);
}