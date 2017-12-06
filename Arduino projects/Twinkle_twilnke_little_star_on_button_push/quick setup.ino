#include <LiquidCrystal.h>

void a() {
  tone(9, 880, 250);
    delay(250);
}

void b() {
  tone(9, 988, 250);
    delay(250);
}

void c() {
  tone(9, 523, 250);
    delay(250);
}

void d() {
  tone(9, 587, 250);
    delay(250);
}

void e() {
  tone(9, 659, 250);
    delay(250);
}

void f() {
  tone(9, 699, 250);
    delay(250);
}

void g() {
  tone(9, 784, 250);
    delay(250);
}

void setup() {
 g();
}
void loop() {
 int button1State = digitalRead(6);
      g();
    if (button1State == LOW){
      c();
      c();
      g();
      g();
      a();
      a();
      delay(25);
      g();
      delay(250);
      f();
      f();
      e();
      e();
      d();
      d();
      c();
      delay(250);
      g();
      g();
      f();
      f();
      e();
      e();
      d();
      delay(250);
      g();
      g();
      f();
      f();
      e();
      e();
      d();
      delay(250);
      c();
      c();
      g();
      g();
      a();
      a();
      delay(25);
      g();
      delay(250);
      f();
      f();
      e();
      e();
      d();
      d();
      c();
  }
}
