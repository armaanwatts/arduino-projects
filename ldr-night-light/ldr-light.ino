int ldrPin = A0;
int ledPin = 9;

int threshold = 500; // adjust based on lighting

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  Serial.println(ldrValue); // for calibration

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // DARK → LED ON
  } 
  else {
    digitalWrite(ledPin, LOW);  // BRIGHT → LED OFF
  }

  delay(200);
}
