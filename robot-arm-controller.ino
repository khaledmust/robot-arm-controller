#include <Servo.h>

#define TRUE 1
#define FALSE 0

#define DEGUG_ENABLE TRUE

/* Hall effect sensor pins configuration. */
#define THUMB_SENSOR_PIN 8
#define INDEX_SENSOR_PIN 9
#define MIDDLE_SENSOR_PIN 10
#define RING_SENSOR_PIN 11
#define PINKY_SENSOR_PIN 12

/* Servo motor pins configuration. */
#define THUMB_SERVO_PIN 2
#define INDEX_SERVO_PIN 3
#define MIDDLE_SERVO_PIN 4
#define RING_SERVO_PIN 5
#define PINKY_SERVO_PIN 6

Servo ThumbServo;
Servo IndexServo;
Servo MiddleServo;
Servo RingServo;
Servo PinkyServo;

void setup() {
#if (DEGUG_ENABLE == TRUE)
  Serial.begin(9600);
#endif

  pinMode(THUMB_SENSOR_PIN, INPUT);
  pinMode(INDEX_SENSOR_PIN, INPUT);
  pinMode(MIDDLE_SENSOR_PIN, INPUT);
  pinMode(RING_SENSOR_PIN, INPUT);
  pinMode(PINKY_SENSOR_PIN, INPUT);

  ThumbServo.attach(THUMB_SERVO_PIN);
  IndexServo.attach(INDEX_SERVO_PIN);
  MiddleServo.attach(MIDDLE_SERVO_PIN);
  RingServo.attach(RING_SERVO_PIN);
  PinkyServo.attach(PINKY_SERVO_PIN);
}

void loop() {

  int thumbCurrentReading = 0;
  int indexCurrentReading = 0;
  int middleCurrentReading = 0;
  int ringCurrentReading = 0;
  int pinkyCurrentReading = 0;

  thumbCurrentReading = digitalRead(THUMB_SENSOR_PIN);
  if (thumbCurrentReading == 1) {
    ThumbServo.write(180);
  } else {
    ThumbServo.write(0);
  }

  indexCurrentReading = digitalRead(INDEX_SENSOR_PIN);
  if (indexCurrentReading == 1) {
    IndexServo.write(0);
  } else {
    IndexServo.write(180);
  }

  middleCurrentReading = digitalRead(MIDDLE_SENSOR_PIN);
  if (middleCurrentReading == 1) {
    MiddleServo.write(0);
  } else {
    MiddleServo.write(180);
  }

  ringCurrentReading = digitalRead(RING_SENSOR_PIN);
  if (ringCurrentReading == 1) {
    RingServo.write(180);
  } else {
    RingServo.write(0);
  }
  
  pinkyCurrentReading = digitalRead(PINKY_SENSOR_PIN);
  if (pinkyCurrentReading == 1) {
    PinkyServo.write(0);
  } else {
    PinkyServo.write(180);
  }

  Serial.println(middleCurrentReading);
}
