#ifndef EW7_H
#define EW7_H

#include <QDialog>
#include "dllrestapi.h"

namespace Ui {
class EW7;
}

class EW7 : public QDialog
{
    Q_OBJECT

public:
    explicit EW7(QWidget *parent = nullptr);
    ~EW7();

public slots:

    void tilitapahtumaSlot(QStringList);

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
    Ui::EW7 *ui;
    DLLRestApi *pDLLRestApi;
};

#endif // EW7_H
