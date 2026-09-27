const int pingPin = 7;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;
const int buzzer = 5;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  long duration;
  int distance;

  // PING sensor ki pulse send cheyyadam
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);

  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);

  digitalWrite(pingPin, LOW);

  // Same SIG pin nundi echo receive cheyyadam
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  // Distance calculate
  distance = duration / 29 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // First anni OFF
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  noTone(buzzer);

  // More than 50 cm = SAFE
  if (distance > 50) {

    digitalWrite(greenLED, HIGH);

  }

  // 21 to 50 cm = CAUTION
  else if (distance > 20 && distance <= 50) {

    digitalWrite(yellowLED, HIGH);

    tone(buzzer, 1000);
    delay(200);
    noTone(buzzer);
    delay(400);

  }

  // 20 cm or less = DANGER
  else {

    digitalWrite(redLED, HIGH);

    tone(buzzer, 1500);
    delay(100);
    noTone(buzzer);
    delay(100);
  }

  delay(50);
}
