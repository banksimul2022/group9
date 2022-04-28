#include "logindialog.h"
#include "ui_logindialog.h"
#include <qdebug.h>

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

/*void LoginDialog::on_buttonBox_accepted()
{
    QString t = ui->lineEdit->text();
    qDebug() << "Lineedit: " + t;
    emit loginSignal(t);
} */


void LoginDialog::on_BTN_1_clicked()
{
    PINCODE.append("1");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_2_clicked()
{
    PINCODE.append("2");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_3_clicked()
{
    PINCODE.append("3");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_4_clicked()
{
    PINCODE.append("4");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_5_clicked()
{
    PINCODE.append("5");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_6_clicked()
{
    PINCODE.append("6");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_7_clicked()
{
    PINCODE.append("7");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_8_clicked()
{
    PINCODE.append("8");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_BTN_9_clicked()
{
    PINCODE.append("9");
    ui->PINCODELINE->setText(PINCODE);
}


void LoginDialog::on_REMOVE_clicked()
{
    this->close();
}


void LoginDialog::on_CORRECT_clicked()
{
    ui->PINCODELINE->setText(NULL);
}


void LoginDialog::on_ACCEPT_clicked()
{

}

