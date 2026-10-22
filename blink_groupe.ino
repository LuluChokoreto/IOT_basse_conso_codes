const int LED = 2;
const int N = 22; 

const int Temp_on = 50 * N;
const int Temp_off = 2000 - Temp_on;

void setup(){
pinMode(LED, OUTPUT);

}

void loop(){
digitalWrite(LED, HIGH);
delay(Temp_on);
digitalWrite(LED, LOW);
delay(Temp_off);
}