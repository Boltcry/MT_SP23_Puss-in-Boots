#include <Servo.h>

Servo servoInn;
Servo servoGuard;
Servo servoPrince;

const int buttonPin1 = 2;
const int buttonPin2;
const int buttonPin3;

bool buttonStateCat1;
bool buttonStateInnkeeper;
bool buttonStateCat2;


void setup() {
  myServo.attach(9);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);

}

void loop() {
  buttonStateCat1 = digitalRead(buttonPin1);
  buttonStateInnkeeper = digitalRead(buttonPin2);
  buttonStateCat2 = digitalRead(buttonPin3);

  if(buttonStateCat1 && !buttonStateInnkeeper)
  {
    servoInn.write(180);
  }

  if(buttonStateCat2)
  {
    servoInn.write(180);
  }
  
}
