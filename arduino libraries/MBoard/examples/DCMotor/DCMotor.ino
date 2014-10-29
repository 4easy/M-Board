/*
  M-Board  DC Motor
 
 The circuit:
 * Motor1 AIN1 pin to digital pin 11
 * Motor1 AIN2 pin to digital pin 5
 * Motor2 BIN1 pin to digital pin 6
 * Motor2 BIN2 pin to digital pin 12
 
 Library originally added 12 August 2014
 by Blue
 
 This example code is in the public domain.
 
 http://easy.cc
 */

#include <Easy.h>

int motorSpeed = 200;

DCMotor motor1(MA);
DCMotor motor2(MB);

void setup()
{

}

void loop()
{
        motor1.run(motorSpeed); // value: between -255 and 255.
	motor2.run(motorSpeed); // value: between -255 and 255.
	delay(2000);
        motor1.stop(); // Brake
	motor2.stop(); // Brake
	delay(100);
	motor1.run(-motorSpeed);
	motor2.run(-motorSpeed);
	delay(2000);
	motor1.stop();
	motor2.stop();
	delay(2000);
}


