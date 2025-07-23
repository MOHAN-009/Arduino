int pinR = 2;
int pinY = 4;
int pinG = 7;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(pinR,OUTPUT);
pinMode(pinY,OUTPUT);
pinMode(pinG,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinR, HIGH);
delay(wait);
digitalWrite(pinR, LOW);

digitalWrite(pinY, HIGH);
delay(wait);
digitalWrite(pinY, LOW);

digitalWrite(pinG, HIGH);
delay(wait);
digitalWrite(pinG, LOW);
}
