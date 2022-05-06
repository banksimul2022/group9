#include "ew6.h"
#include "ui_ew6.h"

EW6::EW6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EW6)
{
    ui->setupUi(this);
    pDLLRestApi = new DLLRestApi;
    connect(pDLLRestApi, SIGNAL(getSaldoSignal(QString)), this, SLOT (saldoSlot(QString)));
}

EW6::~EW6()
{
    delete ui;
}

void EW6::saldoSlot(QString x)
{
    qDebug() << "saldo vastaanotettu" << x;
    ui->lineEdit->setText(x);
}

void EW6::on_B1_clicked()
{
    pDLLRestApi->getSaldo("123456");
}


void EW6::on_B2_clicked()
{

}


void EW6::on_B3_clicked()
{

}


void EW6::on_B4_clicked()
{
    this->close();
}


void EW6::on_B5_clicked()
{

}


void EW6::on_B6_clicked()
{

}


void EW6::on_B7_clicked()
{

}


void EW6::on_B8_clicked()
{

}

