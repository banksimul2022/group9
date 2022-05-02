#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pinCode = new PinCodeDLL;
    //pDLLRestApi = new DLLRestApi;
    connect(pinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSignal(QString)));
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

void MainWindow::loginSignal(QString)
{

}


void MainWindow::on_B1_clicked()
{
    pEW1->exec();
}


void MainWindow::on_B2_clicked()
{
    pEW2->exec();
}


void MainWindow::on_B3_clicked()
{
    pEW3->exec();
}


void MainWindow::on_B4_clicked()
{
    this->close();
}


void MainWindow::on_B5_clicked()
{
    pEW5->exec();
}


void MainWindow::on_B6_clicked()
{
    pEW6->exec();
}


void MainWindow::on_B7_clicked()
{
    pEW7->exec();
}


void MainWindow::on_B8_clicked()
{
    //pDLLRestApi->getAsiakas("1");
    //pinCode->login();
}

