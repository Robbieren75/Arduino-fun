void setup() {
  
}
 int lightLevel = analogRead(0);
void loop() {
  lightLevel = analogRead(0);
  lightLevel = map(lightLevel, 0, 1023, 0, 255);
  lightLevel = constrain(lightLevel, 0, 255);
  analogWrite(9, lightLevel);
}
