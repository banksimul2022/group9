#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    QString PINCODE;

signals:
    void loginSignal(QString);

private slots:
    //void on_buttonBox_accepted();

    void on_BTN_1_clicked();

    void on_BTN_2_clicked();

    void on_BTN_3_clicked();

    void on_BTN_4_clicked();

    void on_BTN_5_clicked();

    void on_BTN_6_clicked();

    void on_BTN_7_clicked();

    void on_BTN_8_clicked();

    void on_BTN_9_clicked();

    //void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

    void on_REMOVE_clicked();

    void on_CORRECT_clicked();

    void on_ACCEPT_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
