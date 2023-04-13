#include <Servo.h>

Servo servoInn;
Servo servoGuard;
Servo servoPrince;

const int buttonPin1 = 4;
const int buttonPin2 = 3;
const int buttonPin3 = 2;

bool buttonStateCat1 = false;
bool buttonStateInnkeeper;
bool buttonStateCat2;


void setup() {
  servoInn.attach(12);
  servoGuard.attach(11);
  servoPrince.attach(10);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);

  servoInn.write(90);
  servoGuard.write(0);
  servoPrince.write(0);

}

void loop() {
  buttonStateCat1 = digitalRead(buttonPin1);
  buttonStateInnkeeper = digitalRead(buttonPin2);
  buttonStateCat2 = digitalRead(buttonPin3);

  Serial.print(buttonStateCat1);
  Serial.print(" , ");
  Serial.println(buttonStateInnkeeper);
  if(buttonStateCat1 && !buttonStateInnkeeper)
  {
    servoInn.write(0);
  }

  if(buttonStateCat2)
  {
    servoGuard.write(180);
    delay(300);
    servoPrince.write(180);
  }
  
  
}
