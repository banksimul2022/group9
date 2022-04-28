#ifndef EW2_H
#define EW2_H

#include <QDialog>

namespace Ui {
class EW2;
}

class EW2 : public QDialog
{
    Q_OBJECT

public:
    explicit EW2(QWidget *parent = nullptr);
    ~EW2();

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
    Ui::EW2 *ui;
};

#endif // EW2_H
