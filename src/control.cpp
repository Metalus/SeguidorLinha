#include "control.h"

Control::Control(QObject *parent) :
    QObject(parent)
{
}

void Control::Init()
{

}

bool Control::CurveMarking()
{
    return digitalRead(LeftSensorPin) == HIGH;
}

void Control::CurveMarking(long timems)
{
    QtConcurrent::run([this](long time)
    {
        QThread::sleep(time);
        if(digitalRead(LeftSensorPin) == HIGH)
            emit CurveMarkingDetected();
    },timems);
}
