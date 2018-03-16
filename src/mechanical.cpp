#include "mechanical.h"

int Mechanical::FrontSensor = 0;
int Mechanical::LeftSensor = 0;
int Mechanical::RightSensor = 0;
int Mechanical::BackLeftSensor = 0;
int Mechanical::BackRightSensor = 0;

Mechanical::Mechanical(QObject *parent) :
                       QObject(parent)
{

}

void Mechanical::ControlSpeed(int powerLeft, int powerRight)
{
      pwmWrite(LeftEnginePin,powerLeft);
      pwmWrite(RightEnginePin,powerRight);
}


void Mechanical::Turn(Side side)
{
    pwmWrite(LeftSensorPin, side == Side::Left ? 0 : 1023);
    pwmWrite(RightSensorPin, side == Side::Right ? 0 : 1023);
}

void Mechanical::Turn(Side side, float SizeArc, float Angle)
{

}

void Mechanical::Turn(Side side, TurnIntensity intensity)
{

}

void Mechanical::Turn(Side side, float SizeArc, float Angle, TurnIntensity intensity)
{

}

