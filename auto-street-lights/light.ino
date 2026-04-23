int ldrPin = A0;
int ledPin = 9;

int threshold = 500; // adjust based on environment

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < threshold) {
    digitalWrite(ledPin, HIGH); // NIGHT → LIGHT ON
  } 
  else {
    digitalWrite(ledPin, LOW);  // DAY → LIGHT OFF
  }

  delay(300);
}
