#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ew1.h"
#include "ew2.h"
#include "ew3.h"
#include "ew4.h"
#include "ew5.h"
#include "ew6.h"
#include "ew7.h"
#include "ew8.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

private:
    Ui::MainWindow *ui;
    EW1 * pEW1;
    EW2 * pEW2;
    EW3 * pEW3;
    EW4 * pEW4;
    EW5 * pEW5;
    EW6 * pEW6;
    EW7 * pEW7;
    EW8 * pEW8;

};
#endif // MAINWINDOW_H
