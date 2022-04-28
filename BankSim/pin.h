#ifndef PIN_H
#define PIN_H

#include <QDialog>

namespace Ui {
class PIN;
}

class PIN : public QDialog
{
    Q_OBJECT

public:
    explicit PIN(QWidget *parent = nullptr);
    ~PIN();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_DELETE_clicked();

    void on_CORRECT_clicked();

    void on_ACCEPT_clicked();

public slots:
    void PINRecieveSlot(short);

private:
    Ui::PIN *ui;
};

#endif // PIN_H
