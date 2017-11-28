#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Thermometer");
  lcd.setCursor(0, 1);
  lcd.print("By: Robin T.");
  pinMode(13, OUTPUT);
  delay(1000);
}

void loop() {
  digitalWrite(13, HIGH);
  double temperature = analogRead(0);
  double tempC = ((temperature * (3300.0 / 1024.0)) - 250) / 10;
  double tempF = (tempC * 9.0) / 5.0 + 32.0;
  lcd.setCursor(0, 0);
  lcd.print("Celsius: ");
  lcd.setCursor(9, 0);
  lcd.print(tempC);
  lcd.setCursor(0, 1);
  lcd.print("Fahrenheit: ");
  lcd.setCursor(12, 1);
  lcd.print(tempF);
  delay(1000);
}
