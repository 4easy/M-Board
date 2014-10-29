#ifndef Easy_h
#define Easy_h
#if defined (ARDUINO) && ARDUINO >= 100
    #include"Arduino.h"
#else
     #include"WProgram.h"
#endif

#define MA 0x01
#define MB 0x02

#define BIN1 6
#define BIN2 12
#define AIN1 11
#define AIN2 5

class DCMotor
{
  public:
	DCMotor(int port);
    void run (int speed);
	void stop();

  private:
	int _in1;
	int _in2;
};

#endif
