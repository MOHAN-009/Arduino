int readPin = A1;
int readValue;
float V2 = 0;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin);
  V2 = (5./1023.)*readValue;
  Serial.println(V2);
  delay(wait);
}
