#ifndef TILAKONERFIDDLL_H
#define TILAKONERFIDDLL_H

#include "tilakoneRFIDDLL_global.h"
#include "engine.h"
#include <QObject>
#include <QDebug>

class TILAKONERFIDDLL_EXPORT TilakoneRFIDDLL:public QObject
{
    Q_OBJECT
public:
    TilakoneRFIDDLL(QObject * parent = nullptr);
    ~TilakoneRFIDDLL();
    void openRFIDCardReader(void);
signals:
    void sendCardNumberToExe(QString);
public slots:
    void receiveSignalFromEngine(QString s);
private:
    Engine * pEngine;
};

#endif // TILAKONERFIDDLL_H
