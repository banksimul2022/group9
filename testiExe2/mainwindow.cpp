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
/* void MainWindow::nimiSlot(QString Nimisig)
{
    nimi = Nimisig;
    qDebug() << "Nimi vastaanotettu";
    ui->lineEdit->setText(nimi);

}

void MainWindow::osoiteSlot(QString Osoitesig)
{
    osoite = Osoitesig;
    qDebug() << "Osoite vastaanotettu";
    ui->lineEdit->insert(": "+osoite);
}

void MainWindow::puhnroSlot(QString Puhnrosig)
{
    puhnro = Puhnrosig;
    qDebug() << "Puhnro vastaanotettu";
    ui->lineEdit->insert(": "+puhnro);
}   */

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


