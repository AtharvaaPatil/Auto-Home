
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "gO8g65GRycoGoOFdy5M9qEnc-jPOcOSH";
char ssid[] = "Nagarajan_illam";
char pass[] = "Welcome@2020";

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

//Lib- https://github.com/blynkkk/blynk-library/releases/tag/v0.6.1
