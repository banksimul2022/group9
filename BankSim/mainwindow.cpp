#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pincodedll.h"
#include <qdebug.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pinCode = new PinCodeDLL;
    connect(pinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSlot(QString)));
    pinCode->login();
    //pDLLRestApi = new DLLRestApi;
    pEW1 = new EW1(this);
    pEW2 = new EW2(this);
    pEW3 = new EW3(this);
    pEW5 = new EW5(this);
    pEW6 = new EW6(this);
    pEW7 = new EW7(this);
    pEW8 = new EW8(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete pDLLRestApi;
    delete pEW1;
    delete pEW2;
    delete pEW3;
    delete pEW5;
    delete pEW6;
    delete pEW7;
    delete pEW8;
}

void MainWindow::loginSlot(QString)
{
    qDebug()<<"Message recieved";
    qDebug()<<pinCode->logindialog->PCODE;
    PIN=pinCode->logindialog->PCODE;
    qDebug()<<PIN;
}

void MainWindow::on_B1_clicked()
{
    if (PIN=="1234")
    pEW1->exec();
}


void MainWindow::on_B2_clicked()
{
    if (PIN=="1234")
    pEW2->exec();
}


void MainWindow::on_B3_clicked()
{
    if (PIN=="1234")
    pEW3->exec();
}


void MainWindow::on_B4_clicked()
{
    if (PIN=="1234")
    this->close();
}


void MainWindow::on_B5_clicked()
{
    if (PIN=="1234")
    pEW5->exec();
}


void MainWindow::on_B6_clicked()
{
    if (PIN=="1234")
    pEW6->exec();
}


void MainWindow::on_B7_clicked()
{
    if (PIN=="1234")
    pEW7->exec();
}


void MainWindow::on_B8_clicked()
{
    //if (PIN=="1234")
    //pDLLRestApi->getAsiakas("1");

}

