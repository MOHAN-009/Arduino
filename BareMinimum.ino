int ledPin = 7;
int dit = 250;
int dat = 700;
int wait = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);

}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dat);
digitalWrite(ledPin,LOW);
delay(dat);

digitalWrite(ledPin,HIGH);
delay(dat);
digitalWrite(ledPin,LOW);
delay(dat);

digitalWrite(ledPin,HIGH);
delay(dat);
digitalWrite(ledPin,LOW);
delay(dat);

digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

delay(wait);
}
