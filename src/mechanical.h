#ifndef MECHANICAL_H
#define MECHANICAL_H

#include <QObject>
#include <wiringPi.h>
#include "Defines.h"

enum class Side
{
   Left,
   Right
};


enum class TurnIntensity
{
    Low,
    Moderate,
    Forced
};

class Mechanical : public QObject
{
    Q_OBJECT

public:
    explicit Mechanical(QObject *parent = 0);

    static void ControlSpeed(int powerLeft,int powerRight);
    static void Turn(Side side);
    static void Turn(Side side, float SizeArc, float Angle);
    static void Turn(Side side, TurnIntensity intensity);
    static void Turn(Side side, float SizeArc, float Angle, TurnIntensity intensity);

signals:
    void SensorsValueChanged(quint16 FrontSensor, quint16 LeftSensor, quint16 RightSensor, quint16 BackRightSensor, quint16 BackLeftSensor);
    void TurnCompleted(Side side);

private:
    //Sensors Values
    static quint16 FrontSensor = 0, LeftSensor = 0, RightSensor = 0, BackRightSensor = 0, BackLeftSensor = 0;



};

#endif // MECHANICAL_H
