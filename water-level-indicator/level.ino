int lowPin = 5;
int midPin = 6;
int highPin = 7;

int greenLED = 2;
int yellowLED = 3;
int redLED = 4;

int buzzer = 8;

void setup() {
  pinMode(lowPin, INPUT);
  pinMode(midPin, INPUT);
  pinMode(highPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int low = digitalRead(lowPin);
  int mid = digitalRead(midPin);
  int high = digitalRead(highPin);

  if (low == HIGH && mid == LOW && high == LOW) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    noTone(buzzer);
  }

  else if (mid == HIGH && high == LOW) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    noTone(buzzer);
  }

  else if (high == HIGH) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, HIGH);

    tone(buzzer, 1200);
  }

  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    noTone(buzzer);
  }

  delay(300);
}
