#ifndef EW5_H
#define EW5_H

#include <QDialog>

namespace Ui {
class EW5;
}

class EW5 : public QDialog
{
    Q_OBJECT

public:
    explicit EW5(QWidget *parent = nullptr);
    ~EW5();

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
    Ui::EW5 *ui;
    int Otto;
    int Saldo;
};

#endif // EW5_H
