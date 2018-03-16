#ifndef CONTROL_H
#define CONTROL_H

#include <QObject>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <wiringPi.h>
#include "Defines.h"


class Control : public QObject
{
    Q_OBJECT
public:
    explicit Control(QObject *parent = 0);
    void Init(); // Função que inicia os procedimentos do robô
    bool CurveMarking(); // Verifica se há marcação de curva
    void CurveMarking(long timems); // Verifica se há marcação em timems milissegundos, dispara sinal
signals:
    void CurveMarkingDetected();
public slots:

};

#endif // CONTROL_H
