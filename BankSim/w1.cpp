#include "w1.h"
#include "ui_w2.h"

W2::W2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::W2)
{
    ui->setupUi(this);
}

W2::~W2()
{
    delete ui;
}
