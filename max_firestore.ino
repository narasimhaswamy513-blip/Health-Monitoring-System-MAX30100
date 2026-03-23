#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <WiFi.h>
#include <HTTPClient.h>

#define REPORTING_PERIOD_MS 1000

// WiFi
const char* ssid = "RSES";
const char* password = "46yur1fvfa";

// Firebase
String projectId = "...............";
String apiKey = "...............-................";

// LIVE (single doc)
String liveURL = "https://firestore.googleapis.com/v1/projects/" + projectId +
                 "/databases/(default)/documents/healthData/myData?key=" + apiKey;

// HISTORY (multiple docs)
String historyURL = "https://firestore.googleapis.com/v1/projects/" + projectId +
                    "/databases/(default)/documents/healthHistory?key=" + apiKey;

// Sensor
PulseOximeter pox;
uint32_t tsLastReport = 0;

void setup() {
  Serial.begin(115200);

  Serial.print("Initializing sensor...");
  if (!pox.begin()) {
    Serial.println("FAILED ");
    while (1);
  }
  Serial.println("SUCCESS ");

  // WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi Connected ");
}

void loop() {

  pox.update();  // VERY IMPORTANT

  if (millis() - tsLastReport > 5000) {

    float bpm = pox.getHeartRate();
    float spo2 = pox.getSpO2();
    unsigned long t = millis();

    Serial.print("BPM: ");
    Serial.print(bpm);
    Serial.print(" | SpO2: ");
    Serial.println(spo2);

    if (WiFi.status() == WL_CONNECTED && bpm > 0 && spo2 > 0) {

      String json = "{ \"fields\": { "
                    "\"bpm\": { \"doubleValue\": " + String(bpm) + " }, "
                    "\"spo2\": { \"doubleValue\": " + String(spo2) + " }, "
                    "\"time\": { \"integerValue\": \"" + String(t) + "\" } "
                    "} }";

      //  LIVE UPDATE (same doc)
      HTTPClient http1;
      http1.begin(liveURL);
      http1.addHeader("Content-Type", "application/json");
      http1.sendRequest("PATCH", json);
      http1.end();

      //  HISTORY (new doc every time)
      HTTPClient http2;
      http2.begin(historyURL);
      http2.addHeader("Content-Type", "application/json");
      http2.POST(json);
      http2.end();

      Serial.println(" Live + History Updated");
    }

    tsLastReport = millis();
  }
}