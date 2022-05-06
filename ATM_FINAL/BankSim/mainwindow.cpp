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
    pDLLRestApi = new DLLRestApi;
    connect(pinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSlot(QString)));
    connect(pDLLRestApi, SIGNAL(getKorttiSignal(QString)), this, SLOT(korttiSlot (QString)));
    pDLLRestApi->getKortti("1");
    pinCode->login();

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
    delete pDLLRestApi;
    delete pEW1;
    delete pEW2;
    delete pEW3;
    delete pEW5;
    delete pEW6;
    delete pEW7;
    delete pEW8;
}

void MainWindow::RFIDSlot(QString s)
{
    korttinro = s;
    qDebug() << "korttinro vastaanotettu" << korttinro;
    pDLLRestApi->getKortti(korttinro);
}

void MainWindow::korttiSlot(QString p)
{
    qDebug() << "pin vastaanotettu";
    pw = p;
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
    if (PIN==pw)
    pEW1->exec();
}


void MainWindow::on_B2_clicked()
{
    if (PIN==pw)
    pEW2->exec();
}


void MainWindow::on_B3_clicked()
{
    if (PIN==pw)
    pEW3->exec();
}


void MainWindow::on_B4_clicked()
{
    if (PIN==pw)
    this->close();
}


void MainWindow::on_B5_clicked()
{
    if (PIN==pw)
    pEW5->exec();
}


void MainWindow::on_B6_clicked()
{
    if (PIN==pw)
    pEW6->exec();
}


void MainWindow::on_B7_clicked()
{
    if (PIN==pw)
    pEW7->exec();
}


void MainWindow::on_B8_clicked()
{
    //if (PIN=="1234")
    //pDLLRestApi->getAsiakas("1");

}

