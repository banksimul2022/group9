#ifndef EW7_H
#define EW7_H

#include <QDialog>

namespace Ui {
class EW7;
}

class EW7 : public QDialog
{
    Q_OBJECT

public:
    explicit EW7(QWidget *parent = nullptr);
    ~EW7();

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
};

#endif // EW7_H
