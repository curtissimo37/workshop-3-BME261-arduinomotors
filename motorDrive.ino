#include <Servo.h>


Servo myservo1;
Servo myservo2;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  // === Setup Code for Part 1 (a) === //
  myservo1.attach(11); //configure digital pin 11 to control the servo

  // === Setup Code for Part 1 (b) === //
  myservo2.attach(9); //configure digital pin 9 to control the servo
}

void posServo(int pos){
  // Constrain pos so that it must always be between 0 and 180
    pos = constrain(pos,0,180);  
    myservo1.write(pos); // tell servo to go to position in variable 'pos'  
}

void rotServo(int speed){
  //Constrain speed values so that they are always -100 or 100
  speed = constrain(speed,-100,100);
  int servo_signal = 93; // the default value is 0 where it is stopped
  
  if (speed > 0) {
    // Forward direction, add a value to 93 scaled by the speed
    servo_signal = 93 + (float)speed * (180 - 93) / 100.0;
  } 
  else if (speed < 0) {
    // Reverse direction
    servo_signal = 93 + (float)speed * (93 - 0) / 100.0;
  }
  myservo2.write(servo_signal);
}


void loop() {
  // Call the function for each part of the lab here to run

  //posServo(); //For Position Servo
  //rotServo(); //For Continuous Rotation Servo
  delay(5);

}
