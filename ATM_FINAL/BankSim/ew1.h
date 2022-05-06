#ifndef EW1_H
#define EW1_H

#include <QDialog>

namespace Ui {
class EW1;
}

class EW1 : public QDialog
{
    Q_OBJECT

public:
    explicit EW1(QWidget *parent = nullptr);
    ~EW1();

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
    Ui::EW1 *ui;
};

#endif // EW1_H
