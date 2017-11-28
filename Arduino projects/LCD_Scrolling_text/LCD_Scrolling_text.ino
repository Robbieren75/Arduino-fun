#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello, world!");
}
void loop() {
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.print("ello, world! H");
  delay(250);
  lcd.clear();
  lcd.print("llo, world! He");
  delay(250);
  lcd.clear();
  lcd.print("lo, world! Hel");
  delay(250);
  lcd.clear();
  lcd.print("o, world! Hell");
  delay(250);
  lcd.clear();
  lcd.print(", world! Hello");
  delay(250);
  lcd.clear();
  lcd.print(" world! Hello,");
  delay(250);
  lcd.clear();
  lcd.print("world! Hello, ");
  delay(250);
  lcd.clear();
  lcd.print("orld! Hello, w");
  delay(250);
  lcd.clear();
  lcd.print("rld! Hello, wo");
  delay(250);
  lcd.clear();
  lcd.print("ld! Hello, wor");
  delay(250);
  lcd.clear();
  lcd.print("d! Hello, worl");
  delay(250);
  lcd.clear();
  lcd.print("! Hello, world");
  delay(250);
  lcd.clear();
  lcd.print(" Hello, world!");
  delay(250);
  lcd.clear();
  lcd.print("Hello, world! ");
  delay(250);
  lcd.clear();
}
