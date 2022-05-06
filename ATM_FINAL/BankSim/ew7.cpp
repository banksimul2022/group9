#include "ew7.h"
#include "ui_ew7.h"
#include <qdebug.h>

EW7::EW7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EW7)
{
    ui->setupUi(this);
    pDLLRestApi = new DLLRestApi;
    connect(pDLLRestApi, SIGNAL (getTilitapahtumaSignal(QStringList)), this, SLOT (tilitapahtumaSlot(QStringList)));
}

EW7::~EW7()
{
    delete ui;
    delete pDLLRestApi;
}

void EW7::tilitapahtumaSlot(QStringList n)
{
    qDebug() <<"tilitapahtuma vastaanotettu";
    ui->lineEdit->setText(NULL);
    for(int i = 0; i < n.size(); i++)
    {
        ui->lineEdit->insert(n.at(i));
        ui->lineEdit->insert("      ");
    }
}

void EW7::on_B1_clicked()
{
    pDLLRestApi->getTilitapahtuma("123456");
}


void EW7::on_B2_clicked()
{

}


void EW7::on_B3_clicked()
{

}


void EW7::on_B4_clicked()
{
    this->close();
}


void EW7::on_B5_clicked()
{

}


void EW7::on_B6_clicked()
{

}


void EW7::on_B7_clicked()
{

}


void EW7::on_B8_clicked()
{

}

