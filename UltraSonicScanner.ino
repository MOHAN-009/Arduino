#include <Servo.h>

Servo myservo;

int r = 6;
int y = 7;
int g = 8;

int buzzer = 5;
int servo = 3;

int trig = 10;
int echo = 11;

long duration;
float distance;

int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servo);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int deg = 0; deg <= 180; deg++){
    myservo.write(deg);
    delay(10);

    digitalWrite(trig, LOW);
    delay(10);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    duration = pulseIn(echo, HIGH);
    distance = duration * 0.017;
    if(distance > 40){
      digitalWrite(g, HIGH);
      digitalWrite(r, LOW);
      digitalWrite(y, LOW);
      noTone(buzzer);
    }
    else if(distance > 5){
      digitalWrite(y, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(r, LOW);
      tone(buzzer, 100);
    }
    else{
      digitalWrite(r, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(y, LOW);
      tone(buzzer, 500);
    }
  }

  for(int deg = 180; deg >= 0; deg--){
    myservo.write(deg);
    delay(10);

    digitalWrite(trig, LOW);
    delay(10);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    duration = pulseIn(echo, HIGH);
    distance = duration * 0.017;

    if(distance > 40){
      digitalWrite(g, HIGH);
      digitalWrite(r, LOW);
      digitalWrite(y, LOW);
      noTone(buzzer);
    }
    else if(distance > 5){
      digitalWrite(y, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(r, LOW);
      tone(buzzer, 100);
    }
    else{
      digitalWrite(r, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(y, LOW);
      tone(buzzer, 500);
    }
  }
}
