#include "pin.h"
#include "ui_pin.h"
#include <QDebug>
PIN::PIN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PIN)
{
    ui->setupUi(this);
}

PIN::~PIN()
{
    delete ui;
}

void PIN::on_pushButton_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"1");
}


void PIN::on_pushButton_4_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"2");
}


void PIN::on_pushButton_7_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"3");
}


void PIN::on_pushButton_2_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"4");
}

void PIN::on_pushButton_5_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"5");
}


void PIN::on_pushButton_8_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"6");
}


void PIN::on_pushButton_3_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"7");
}


void PIN::on_pushButton_6_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"8");
}


void PIN::on_pushButton_9_clicked()
{
    ui->PINlineEdit->setText(ui->PINlineEdit->text()+"9");
}


void PIN::on_DELETE_clicked()
{
    this->close();
}


void PIN::on_CORRECT_clicked()
{
    ui->PINlineEdit->setText(NULL);
}


void PIN::on_ACCEPT_clicked()
{

}

