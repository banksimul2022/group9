#ifndef EW8_H
#define EW8_H

#include <QDialog>

namespace Ui {
class EW8;
}

class EW8 : public QDialog
{
    Q_OBJECT

public:
    explicit EW8(QWidget *parent = nullptr);
    ~EW8();

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
    Ui::EW8 *ui;
};

#endif // EW8_H
