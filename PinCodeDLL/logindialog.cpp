#include "logindialog.h"
#include "ui_logindialog.h"
#include <qdebug.h>
#include "pincodedll.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_BTN_1_clicked()
{
    PCODE.append("1");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_2_clicked()
{
    PCODE.append("2");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_3_clicked()
{
    PCODE.append("3");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_4_clicked()
{
    PCODE.append("4");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_5_clicked()
{
    PCODE.append("5");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_6_clicked()
{
    PCODE.append("6");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_7_clicked()
{
    PCODE.append("7");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_8_clicked()
{
    PCODE.append("8");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_BTN_9_clicked()
{
    PCODE.append("9");
    ui->PINCODELINE->setText(PCODE);
}


void LoginDialog::on_REMOVE_clicked()
{
    this->close();
}


void LoginDialog::on_CORRECT_clicked()
{
    ui->PINCODELINE=NULL;
}


void LoginDialog::on_ACCEPT_clicked()
{
    PIN = ui->PINCODELINE->text();
    qDebug() << "Lineedit: " + PIN;
    emit loginSignal(PIN);
}

