#ifndef EW5_H
#define EW5_H

#include <QDialog>
#include "dllrestapi.h"

namespace Ui {
class EW5;
}

class EW5 : public QDialog
{
    Q_OBJECT

public:
    explicit EW5(QWidget *parent = nullptr);
    ~EW5();

public slots:

    void nostoClickHandler();

private slots:

    void on_B2_clicked();

    void on_B3_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

private:
    Ui::EW5 *ui;
    int Otto;
    DLLRestApi *pDLLRestApi;
};

#endif // EW5_H
