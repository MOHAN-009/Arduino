int blueLED1 = 8;
int blueLED2 = 12;
int greenLED = 4;
int yellowLED = 3;
int redLED = 2;

int buzzer = 7;

int button1 = 6;
int button2 = 13;

int wait = 900;
int buzz = 100;

bool buttonPressed = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED1, OUTPUT);
  pinMode(blueLED2, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(buzz);
  digitalWrite(buzzer, LOW);
  delay(wait);
  digitalWrite(greenLED, LOW);

  digitalWrite(yellowLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(buzz);
  digitalWrite(buzzer, LOW);
  delay(wait);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(buzz);
  digitalWrite(buzzer, LOW);
  delay(random(900,4901));
  digitalWrite(redLED, LOW);

  while(buttonPressed == 0){
    digitalWrite(blueLED1, HIGH);
    digitalWrite(blueLED2, HIGH);
    if (digitalRead(button1) ==0 ){
      buttonPressed = 1;
      digitalWrite(blueLED2, LOW);
    }
    else if(digitalRead(button2) == 0){
      buttonPressed = 1;
      digitalWrite(blueLED1, LOW);
    }
  }
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(blueLED1, LOW);
  digitalWrite(blueLED2, LOW);
  buttonPressed = 0;
}
