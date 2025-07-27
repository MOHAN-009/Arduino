int buzzer = 9;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 132);
  delay(wait);
  noTone(buzzer);
  delay(wait);
}
