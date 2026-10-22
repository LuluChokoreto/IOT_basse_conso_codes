//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int count = 0;

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();

}


void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Great IoT Tutorial!");
  lcd.setCursor(0, 1);
  lcd.print("Launched for ");
  lcd.print(count);
  lcd.print("s");
  count++;
  delay(1000);
}
