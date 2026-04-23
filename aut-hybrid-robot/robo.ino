char command;
bool autoMode = true;

int trigPin = 9;
int echoPin = 10;

int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;

long distance;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void stopCar() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {

  if (Serial.available()) {
    command = Serial.read();

    if (command == 'M') autoMode = false;  // Manual
    if (command == 'A') autoMode = true;   // Auto

    if (!autoMode) {
      if (command == 'F') forward();
      if (command == 'S') stopCar();
    }
  }

  if (autoMode) {
    distance = getDistance();

    if (distance > 20) {
      forward();
    } else {
      stopCar();
      delay(300);
    }
  }
}
