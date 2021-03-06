#include <QCoreApplication>
#include <wiringPi.h>
#include "Defines.h"
#include <QDebug>
void SetupPins()
{
    if(wiringPiSetup() != -1)
    {
        pinMode(LeftEnginePin,PWM_OUTPUT);
        pinMode(RightEnginePin,PWM_OUTPUT);

        pinMode(FrontSensorPin,INPUT);
        pinMode(LeftSensorPin,INPUT);
        pinMode(RightSensorPin,INPUT);
        pinMode(BackLeftSensorPin,INPUT);
        pinMode(BackRightSensorPin,INPUT);
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Robô seguidor de linha";


    return 0;
}
