int pin1 = 3;
int pin2 = 5;
int b1 = 100;
int b2 = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin1,b1);
  analogWrite(pin2,b2);
}
