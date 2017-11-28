#include <math.h>

void setup() {
  Serial.begin(115200);
}
double Temp;
void convertTemp() {
  double temperature = analogRead(0);
  Temp = ((temperature * (3300.0 / 1024.0)) - 250) / 10;
  Temp = (Temp * 9.0) / 5.0 + 32.0;
  return Temp;
}
void loop() {
  convertTemp();
  Serial.println("The current temprature is: ");
  Serial.println(Temp);
  Serial.println("degrees F. \n");
  delay(1000);
}
