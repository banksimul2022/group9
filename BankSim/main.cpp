#include "mainwindow.h"
#include "pin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //serial port y
    PIN x;
    MainWindow w;
    //Serial port
    x.exec();
    w.show();
    return a.exec();
}
