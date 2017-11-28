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

int songPlay = 0;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
 g();
 lcd.begin(16, 2);
}
void loop() {
 int button1State = digitalRead(6);
 int button2State = digitalRead(7);
 lcd.setCursor(0, 0);
 lcd.print("Left to play");
 lcd.setCursor(0, 1);
 lcd.print("Right to select");
 delay(25);
  if (button2State == LOW){
    songPlay++;
  }
  switch (songPlay){
    case 0: {
      analogWrite(8, HIGH);
      if (button2State == HIGH){
        if (button2State == LOW){
          
        g();
        songPlay++;
        analogWrite(8, LOW);
      }
      }
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
        songPlay = 0;
    }
    break;
   }
   case 1:{
    analogWrite(10, HIGH);
    if (button2State == HIGH){
      if (button2State == LOW){
        g();
        songPlay++;
        analogWrite(10, LOW);
      }
    }
    if (button1State == LOW){
      d();
      d();
      e();
      d();
      g();
      f();
      delay(250);
      d();
      d();
      e();
      d();
      a();
      g();
      delay(250);
      d();
      d();
      tone(9, 1174.66, 250);
      delay(250);
      b();
      g();
      f();
      e();
      delay(500);
      c();
      c();
      b();
      g();
      a();
      g();
    }
    break;
   }
   case 2:{
    analogWrite(11, HIGH);
    if (button2State == HIGH){
      if (button2State == LOW){
        g();
        songPlay++;
        analogWrite(11, LOW);
      }
    }
    if (button1State == LOW){
      
    }
    break;
   }
   case 3:{
    analogWrite(12, HIGH);
    if (button2State == HIGH){
      if (button2State == LOW){
        g();
        songPlay = 0;
        analogWrite(12, LOW);
      }
    }
    if (button1State == LOW){
      
    }
    break;
   }
   case 4:{
    analogWrite(13, HIGH);
    if (button2State == HIGH){
      if (button2State == LOW){
        g();
        songPlay = 0;
        analogWrite(13, LOW);
      }
    }
    if (button1State == LOW){
      
    }
    break;
   }
  }
}
