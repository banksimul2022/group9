#include "engine.h"

Engine::Engine(QObject *parent):QObject(parent)
{
    pQSerialPort = new QSerialPort(this);
    pQSerialPortInfo = new QSerialPortInfo;
}

Engine::~Engine()
{
    pQSerialPort->close();
    delete pQSerialPort;
    pQSerialPort = nullptr;
    delete pQSerialPortInfo;
    pQSerialPortInfo = nullptr;
}

void Engine::open()
{
    QList<QSerialPortInfo> ports = pQSerialPortInfo->availablePorts();
    qDebug()<< "Available ports = "<< ports.count();
    QSerialPortInfo firstPort;
    if(ports.count() > 0)
    {
        qDebug() << "Trying to read first USB port";
        firstPort = ports.first();
    }
    else
    {
        qDebug()<<"No USB connection available";
        return;
    }


    pQSerialPort->setPortName(firstPort.portName());
    pQSerialPort->setBaudRate(9600);
    //pQSerialPort->setBaudRate(115200);
    pQSerialPort->setDataBits(QSerialPort::Data8);
    pQSerialPort->setParity(QSerialPort::NoParity);
    pQSerialPort->setStopBits(QSerialPort::OneStop);
    // sPtr->setFlowControl(QSerialPort::NoFlowControl);
    pQSerialPort->setFlowControl(QSerialPort::HardwareControl);

    if (!pQSerialPort->open(QIODevice::ReadWrite))
    {
        qDebug() << "Tried to open serial port but did not open";

    }
    qDebug()<<"DLL opened serial port. Now waiting for card to read";

    connect(pQSerialPort,SIGNAL(readyRead()),this,SLOT(cardNumberRead()));

    readData.clear();
}

void Engine::cardNumberRead()
{

    readData.append(pQSerialPort->readAll());
    if(readData.length()<16)
    {
        qDebug()<<"Taas uusi signaali, mutta ei vieläkään koko data";
        return;
    }
    qDebug()<<"Koko datan koko = "<<readData.length();
    QString data = QString::fromUtf8(readData);
    qDebug()<< "Koko luettu data ="<<data;
    data = data.mid(4,9);
    emit sendSignalToInterface(data);

    /*
    //qDebug()<<"Lets wait 500 ms for data";
    //qDebug()<<pQSerialPort->waitForReadyRead(500);
    int bytes = 0;
    QByteArray readData;
    while(bytes<16)
    {
        bytes = bytes + pQSerialPort->bytesAvailable();
        qDebug()<<"Bytes luupissa"<< bytes;
        readData.append(pQSerialPort->readAll());
    }

    //int bytes = pQSerialPort->bytesAvailable();
    //QByteArray readData = pQSerialPort->readAll();


    if(bytes == 16)
    {
        // right number of bytes read
        QString data = QString::fromUtf8(readData);
        qDebug()<< "original data ="<<data;
        data = data.mid(4,9);
        qDebug() <<"Card number QString = "<< data;
        emit sendSignalToInterface(data);
    }
    else
    {
        qDebug()<<"Nucleolta luettiin byteja = "<< bytes;
        qDebug()<<"Nucleo cardreader";
        QString data = QString::fromUtf8(readData);
        qDebug()<< "Nucleo data ="<<data;
        emit sendSignalToInterface(data);
    }
    */

}
