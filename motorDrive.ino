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

void rotServo(){
  //Delete the example code and put your code for part 1 (b) here
  int fastforward = 180;
  int slowforward = 100;
  int stopped = 93;
  int slowreverse = 80;
  int fastreverse = 0;
  
  myservo2.write(fastforward);
  delay(1000);
  myservo2.write(slowforward);
  delay(1000);
  myservo2.write(stopped);
  delay(1000);
  myservo2.write(slowreverse);
  delay(1000);
  myservo2.write(fastreverse);
  delay(1000);
}


void loop() {
  // Call the function for each part of the lab here to run

  //posServo(); //For Position Servo
  //rotServo(); //For Continuous Rotation Servo
  delay(5);

}
