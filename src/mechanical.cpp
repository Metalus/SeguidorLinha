#include "mechanical.h"

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

