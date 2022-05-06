#include "ew5.h"
#include "ui_ew5.h"

EW5::EW5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EW5)
{
    ui->setupUi(this);
    pDLLRestApi = new DLLRestApi;
    connect(ui->B1, SIGNAL(clicked()), this, SLOT(nostoClickHandler()));
}

EW5::~EW5()
{
    delete ui;
}


void EW5::nostoClickHandler()
{
    QString Tilinro = "123456";
    QString Summa = "-20";

    pDLLRestApi->nosto(Tilinro,Summa);
}


void EW5::on_B2_clicked()
{

}


void EW5::on_B3_clicked()
{

}


void EW5::on_B4_clicked()
{
    this->close();
}


void EW5::on_B5_clicked()
{

}


void EW5::on_B6_clicked()
{

}


void EW5::on_B7_clicked()
{

}


void EW5::on_B8_clicked()
{

}

