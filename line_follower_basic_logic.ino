/*
  Line Follower Robot – Arduino

  Note:
  This code represents the final working logic used in the project.
  Minor pin changes and tuning were done during testing,
  but the core decision logic and motor control remain the same.

  Project focus: learning sensors, motor control, and hardware debugging.
*/




// IR sensor pins (digital)
const int leftSensorPin = 2;
const int rightSensorPin = 3;

// Motor control pins
const int motorA1 = 8;
const int motorA2 = 9;
const int motorB1 = 10;
const int motorB2 = 11;
const int enableA = 5;
const int enableB = 6;

void setup() {
  // Motor pins as output
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);

  // IR sensor pins as input
  pinMode(leftSensorPin, INPUT);
  pinMode(rightSensorPin, INPUT);

  // Start motors at full speed
  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
}

void loop() {
  // Read sensor values
  bool leftDetected = (digitalRead(leftSensorPin) == LOW);   // LOW means black detected
  bool rightDetected = (digitalRead(rightSensorPin) == LOW); // LOW means black detected

  // Decision logic
  if (!leftDetected && !rightDetected) {
    // Both sensors on white — move forward
    moveForward();
  } else if (leftDetected && !rightDetected) {
    // Left sensor on black — turn left
    turnLeft();
  } else if (!leftDetected && rightDetected) {
    // Right sensor on black — turn right
    turnRight();
  } else {
    // Both sensors on black — stop
    stopMotors();
  }
}

void moveForward() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

void turnLeft() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

void turnRight() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

void stopMotors() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
}
