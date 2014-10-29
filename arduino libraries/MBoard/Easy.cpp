/* 	DCMotor

*/
#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif
#include "Easy.h"

DCMotor::DCMotor(int port)
{
	if (port == MA)
	{
		_in1 = AIN1;
		_in2 = AIN2;
	}
	else if (port == MB)
	{
		_in1 = BIN1;
		_in2 = BIN2;
	}
	
	pinMode(_in1, OUTPUT);
	pinMode(_in2, OUTPUT);
}

void DCMotor::run(int speed)
{
    speed = speed > 255 ? 255 : speed;
    speed = speed < -255 ? -255 : speed;

    if(speed > 0) // Forward PWM, fast decay
    {
		analogWrite(_in1, speed);
		digitalWrite(_in2, LOW);
    } 
    else if(speed == 0) // Coast
    {
		digitalWrite(_in1, LOW);
		digitalWrite(_in2, LOW);
    }
	else // Reverse PWM, slow decay
	{
		speed = map(speed, -255, 0, 0, 255);
		analogWrite(_in1, speed);
		digitalWrite(_in2, HIGH);
	}
}

void DCMotor::stop()
{
	// Brake
    digitalWrite(_in1, HIGH);
	digitalWrite(_in2, HIGH);
}


