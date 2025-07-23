int readPin = A1;
int wait = 500;
int readVal;
float V2;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(wait);
}
