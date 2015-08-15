#ifndef LM35_H
#define LM35_H
#include "Arduino.h"

class LM35{

public:
	LM35(int sensorPin);
	float getCelsius();
	float getFahrenheit();
	
private:
	int _sensorPin, _delayTime;

};

#endif
