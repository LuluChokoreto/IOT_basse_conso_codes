int capteur = 34;
int minVal = 4095;
int maxVal = 0;

void setup() {
  Serial.begin(115200);

  // Calibration pendant 5 secondes
  unsigned long debut = millis();

  while (millis() - debut < 5000) {
    int v = analogRead(capteur);

    if (v < minVal) minVal = v;
    if (v > maxVal) maxVal = v;
  }
}

void loop() {
  int valeur = analogRead(capteur);
  int resultat = map(valeur, minVal, maxVal, 0, 255);
  resultat = constrain(resultat, 0, 255);

  Serial.println(resultat);
  delay(1000);
}