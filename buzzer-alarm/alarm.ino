int buttonPin = 2;
int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    tone(buzzerPin, 1000); // 1000 Hz sound
  } 
  else {
    noTone(buzzerPin);     // stop sound
  }
}
