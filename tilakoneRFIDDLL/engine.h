#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QList>


class Engine : public QObject
{
    Q_OBJECT
public:
    Engine(QObject * parent = nullptr);
    ~Engine();
    void open(void);

signals:
    void sendSignalToInterface(QString);
public slots:
    void cardNumberRead();
private:
    QSerialPort * pQSerialPort;
    QSerialPortInfo * pQSerialPortInfo;
    QString cardNumber;
    QByteArray readData;

};

#endif // ENGINE_H
