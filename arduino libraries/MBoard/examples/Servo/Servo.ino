/*
  M-Board Library  Servo
 
 The circuit:
 * Servo1 Signal pin to digital pin 8
 * Servo2 Signal pin to digital pin 9
 * Servo3 Signal pin to digital pin 10
 
 Library originally added 12 August 2014
 by Blue
 
 This example code is in the public domain.
 
 http://easy.cc
 */

#include <Servo.h> 
 
Servo myservo1;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
Servo myservo2;
Servo myservo3;
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object 
  myservo.attach(9); 
  myservo.attach(10); 
} 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo1.write(pos);     // tell servo to go to position in variable 'pos' 
    myservo2.write(pos);
    myservo3.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo1.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(pos);
    myservo3.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 
