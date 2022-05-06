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
    void namesig(QString);
    void adresssig(QString);
    void phonesig(QString);

public slots:

/*    void nimiSlot(QString);
    void osoiteSlot(QString);
    void puhnroSlot(QString);   */
    void asiakasSlot(QStringList);

    void on_bKortti_clicked();

    void on_bAsiakas_clicked();

    void on_bSaldo_clicked();



private:
    Ui::MainWindow *ui;
    DLLRestApi *pDLLRestApi;
    QString nimi;
    QString osoite;
    QString puhnro;

};
#endif // MAINWINDOW_H
