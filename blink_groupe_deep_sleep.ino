const int LED = 2;
const int N = 22; 
#define uS_TO_mS_FACTOR 1000ULL

const int Temp_on = 50 * N;
const int Temp_off = 2000 - Temp_on;

void setup(){
pinMode(LED, OUTPUT);
digitalWrite(LED, HIGH);
delay(Temp_on);
digitalWrite(LED, LOW);
esp_sleep_enable_timer_wakeup(Temp_off * uS_TO_mS_FACTOR);
esp_deep_sleep_start();
}

void loop(){
}