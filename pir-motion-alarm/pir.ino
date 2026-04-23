int pirPin = 2;
int buzzerPin = 8;
int ledPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("Motion Detected!");

    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  } 
  else {
    Serial.println("No Motion");

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(200);
}
