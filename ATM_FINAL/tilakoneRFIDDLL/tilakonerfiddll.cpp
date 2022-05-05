#include "tilakonerfiddll.h"


TilakoneRFIDDLL::TilakoneRFIDDLL(QObject *parent):QObject(parent)
{
    pEngine = new Engine(this);
    connect(pEngine,SIGNAL(sendSignalToInterface(QString)),this,SLOT(receiveSignalFromEngine(QString)));
}

TilakoneRFIDDLL::~TilakoneRFIDDLL()
{
    delete pEngine;
    pEngine = nullptr;
}

void TilakoneRFIDDLL::openRFIDCardReader()
{
    pEngine->open();
}

void TilakoneRFIDDLL::receiveSignalFromEngine(QString s)
{
    qDebug()<< "Got signal from Engine and going to forward it to Exe!";
    emit sendCardNumberToExe(s);
}
