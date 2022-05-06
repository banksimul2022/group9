#include "w4.h"
#include "ui_w4.h"

W4::W4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::W4)
{
    ui->setupUi(this);
}

W4::~W4()
{
    delete ui;
}
