#include <Arduino.h>
#include "esp_sleep.h"


const int bouton = 4;
const int LED = 2;

void setup() {
  pinMode(bouton, INPUT);
  pinMode(LED, OUTPUT);
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_4, 0);
  esp_light_sleep_start();
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  esp_light_sleep_start();
}
