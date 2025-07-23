int j = 1;
int wait = 750;
String myStr = "j = ";
int x = 3;
int y = 7;
int z;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myStr);
  Serial.println(j);
  j = j + 1;
  delay(wait);
}
