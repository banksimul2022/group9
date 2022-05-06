#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllrestapi.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:


public slots:


    void asiakasSlot(QStringList);

    void saldoSlot(QString);

    void korttiSlot(QString);

    void on_bKortti_clicked();

    void on_bAsiakas_clicked();

    void on_bSaldo_clicked();

    void nostoClickHandler();




private:
    Ui::MainWindow *ui;
    DLLRestApi *pDLLRestApi;


};
#endif // MAINWINDOW_H
