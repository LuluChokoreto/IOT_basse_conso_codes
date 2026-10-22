const int LED = 2;
const int unite = 200; // durée d'un point en ms

void pointMorse() {
  digitalWrite(LED, HIGH);
  delay(unite);
  digitalWrite(LED, LOW);
  delay(unite);
}

void traitMorse() {
  digitalWrite(LED, HIGH);
  delay(3 * unite);
  digitalWrite(LED, LOW);
  delay(unite);
}

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // S 
  pointMorse();
  pointMorse();
  pointMorse();

  // intervale entre lettre
  delay(3 * unite);

  // O 
  traitMorse();
  traitMorse();
  traitMorse();

  // intervale entre lettre
  delay(3 * unite);

  // S 
  pointMorse();
  pointMorse();
  pointMorse();

  // intervalle entre deux mots
  delay(7 * unite);
}