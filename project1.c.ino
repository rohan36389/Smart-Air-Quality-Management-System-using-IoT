#define BLYNK_TEMPLATE_ID "TMPL3k4AUicyH"
#define BLYNK_TEMPLATE_NAME "Smart Air System"
#define BLYNK_AUTH_TOKEN "rtmQ5M4XqEWo5nOyLIzJ2UjdnveABqZX"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// WiFi credentials
char ssid[] = "VJIT-IT";
char pass[] = "Vjitadmin@123";

// Hardware pins
#define MQ2_ANALOG_PIN A0
#define BUZZER_PIN D1

#define GAS_THRESHOLD 500

BlynkTimer timer;

void checkGasLevel() {
  int gasValue = analogRead(MQ2_ANALOG_PIN);
  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  // Send sensor value to Blynk (V0 or your assigned pin)
  Blynk.virtualWrite(V0, gasValue);

  if (gasValue > GAS_THRESHOLD) {
    digitalWrite(BUZZER_PIN, HIGH);
    Blynk.logEvent("gas_alert", "⚠️ High Gas Level Detected!");
    Serial.println("Gas level high! Buzzer ON.");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
  timer.setInterval(1000L, checkGasLevel);
}

void loop() {
  Blynk.run();
  timer.run();
}
