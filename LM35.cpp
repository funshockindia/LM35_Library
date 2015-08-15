#include "LM35.h"
#include "Arduino.h"

LM35::LM35(int sensorPin){
_sensorPin = sensorPin;
}

float LM35::getCelsius(){
float value = analogRead(_sensorPin);
float cValue = value/2;
return cValue;
}

float LM35::getFahrenheit(){
float value = analogRead(_sensorPin);
float cValue = value/2;
float fValue = (cValue * 9 / 5) + 32;
return fValue;

}
