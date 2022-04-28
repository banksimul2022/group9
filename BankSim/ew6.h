#ifndef EW6_H
#define EW6_H

#include <QDialog>

namespace Ui {
class EW6;
}

class EW6 : public QDialog
{
    Q_OBJECT

public:
    explicit EW6(QWidget *parent = nullptr);
    ~EW6();

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
    Ui::EW6 *ui;
};

#endif // EW6_H
