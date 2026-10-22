const int capteur = 34;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
}

void loop() {
  int valeur = analogRead(capteur);

  Serial.print("Valeur LDR : ");
  Serial.println(valeur);

  delay(1000);
}