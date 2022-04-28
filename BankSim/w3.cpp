#include "w3.h"
#include "ui_w3.h"

W3::W3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::W3)
{
    ui->setupUi(this);
}

W3::~W3()
{
    delete ui;
}
