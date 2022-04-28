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

void LoginDialog::on_buttonBox_accepted()
{
    QString t = ui->lineEdit->text();
    qDebug() << "Lineedit: " + t;
    emit loginSignal(t);
}

