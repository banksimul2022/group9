#ifndef EW4_H
#define EW4_H

#include <QDialog>

namespace Ui {
class EW4;
}

class EW4 : public QDialog
{
    Q_OBJECT

public:
    explicit EW4(QWidget *parent = nullptr);
    ~EW4();

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
    Ui::EW4 *ui;
};

#endif // EW4_H
