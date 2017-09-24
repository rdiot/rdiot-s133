/* Ceramic Piezo Vibration Sensor [S133] : http://rdiot.tistory.com/91 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  pinMode(2, INPUT);

  delay(1000);

  lcd.clear();
}

void loop()
{
 
  lcd.setCursor(0,0);
  lcd.print("S133:Piezo Vibration");

  lcd.setCursor(0,1);
  lcd.print("Value=" + (String)digitalRead(2) + " ");
  delay(200);

}
