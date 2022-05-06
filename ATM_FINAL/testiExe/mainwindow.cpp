#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pDLLRestApi = new DLLRestApi;
/*    connect(pDLLRestApi, SIGNAL (NimiSignal(QString)), this, SLOT(nimiSlot(QString)));
    connect(pDLLRestApi, SIGNAL (OsoiteSignal(QString)), this, SLOT(osoiteSlot(QString)));
    connect(pDLLRestApi, SIGNAL (PuhelinnumeroSignal(QString)), this, SLOT(puhnroSlot(QString)));   */
    connect(pDLLRestApi, SIGNAL (asiakasSignal(QStringList)), this, SLOT(asiakasSlot(QStringList)));
    connect(ui->bNosto, SIGNAL(clicked()), this, SLOT(nostoClickHandler()));
    connect(pDLLRestApi, SIGNAL(getSaldoSignal(QString)), this, SLOT (saldoSlot(QString)));
    connect(pDLLRestApi, SIGNAL(getKorttiSignal(QString)), this, SLOT(korttiSlot(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pDLLRestApi;
}

void MainWindow::asiakasSlot(QStringList n)
{
    qDebug() <<"asiakastiedot vastaanotettu";
    ui->lineEdit->setText(NULL);
    for(int i = 0; i < n.size(); i++)
    {
        ui->lineEdit->insert(n.at(i));
        ui->lineEdit->insert(": ");
    }
}

void MainWindow::saldoSlot(QString x)
{
    qDebug() << "saldo vastaanotettu";
    ui->lineEdit->setText(x);
}

void MainWindow::korttiSlot(QString p)
{
    qDebug() << "pin vastaanotettu";
    ui->lineEdit->setText(NULL);
    ui->lineEdit->setText(p);
}

void MainWindow::on_bKortti_clicked()
{
    pDLLRestApi->getKortti("1");

}



void MainWindow::on_bAsiakas_clicked()
{
    pDLLRestApi->getAsiakas("1");

}



void MainWindow::on_bSaldo_clicked()
{
    pDLLRestApi->getSaldo("123456");
}

void MainWindow::nostoClickHandler()
{
    QString Tilinro = "123456";
    int Summa = -1;

    pDLLRestApi->nosto(Tilinro,Summa);
}




