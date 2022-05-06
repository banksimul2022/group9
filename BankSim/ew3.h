#ifndef EW3_H
#define EW3_H

#include <QDialog>

namespace Ui {
class EW3;
}

class EW3 : public QDialog
{
    Q_OBJECT

public:
    explicit EW3(QWidget *parent = nullptr);
    ~EW3();

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
    Ui::EW3 *ui;
};

#endif // EW3_H
