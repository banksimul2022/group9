#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pinCode = new PinCodeDLL;
    connect(pinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSlot(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pinCode;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() <<"Nappia painettu";
    pinCode->tulostaTerveisia();
    pinCode->login();
}

void MainWindow::loginSlot(QString t)
{
    qDebug() << "mainwindow vastaanotti " + t;
}
