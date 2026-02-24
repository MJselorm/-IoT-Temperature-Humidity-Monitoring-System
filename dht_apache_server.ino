#include <WiFi.h>
#include <HTTPClient.h>
#include "DHT.h"

#define DHTPIN 33
#define DHTTYPE DHT11

const char* ssid = "";//enter your network name
const char* password = "";//enter your netwokr password

const char* serverName = "https://192.168.137.55/iot/data.php";

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  dht.begin();

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi");
}

void loop() {
  
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;
    http.begin(serverName);
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    String httpRequestData = "temperature=" + String(temperature) +
                             "&humidity=" + String(humidity);

    int httpResponseCode = http.POST(httpRequestData);

    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);

    String response = http.getString();
    Serial.println(response);

    http.end();
  }

  delay(10000);  // send every 10 seconds
}
