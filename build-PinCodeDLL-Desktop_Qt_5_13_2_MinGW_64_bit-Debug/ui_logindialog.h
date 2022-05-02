/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BTN_9;
    QPushButton *BTN_2;
    QPushButton *BTN_4;
    QPushButton *BTN_3;
    QPushButton *BTN_7;
    QPushButton *BTN_1;
    QPushButton *BTN_6;
    QPushButton *BTN_8;
    QLineEdit *PINCODELINE;
    QPushButton *BTN_5;
    QPushButton *REMOVE;
    QPushButton *CORRECT;
    QPushButton *ACCEPT;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(LoginDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 210, 113, 22));
        gridLayoutWidget = new QWidget(LoginDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 60, 239, 138));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BTN_9 = new QPushButton(gridLayoutWidget);
        BTN_9->setObjectName(QString::fromUtf8("BTN_9"));

        gridLayout->addWidget(BTN_9, 3, 2, 1, 1);

        BTN_2 = new QPushButton(gridLayoutWidget);
        BTN_2->setObjectName(QString::fromUtf8("BTN_2"));

        gridLayout->addWidget(BTN_2, 1, 1, 1, 1);

        BTN_4 = new QPushButton(gridLayoutWidget);
        BTN_4->setObjectName(QString::fromUtf8("BTN_4"));

        gridLayout->addWidget(BTN_4, 2, 0, 1, 1);

        BTN_3 = new QPushButton(gridLayoutWidget);
        BTN_3->setObjectName(QString::fromUtf8("BTN_3"));

        gridLayout->addWidget(BTN_3, 1, 2, 1, 1);

        BTN_7 = new QPushButton(gridLayoutWidget);
        BTN_7->setObjectName(QString::fromUtf8("BTN_7"));

        gridLayout->addWidget(BTN_7, 3, 0, 1, 1);

        BTN_1 = new QPushButton(gridLayoutWidget);
        BTN_1->setObjectName(QString::fromUtf8("BTN_1"));

        gridLayout->addWidget(BTN_1, 1, 0, 1, 1);

        BTN_6 = new QPushButton(gridLayoutWidget);
        BTN_6->setObjectName(QString::fromUtf8("BTN_6"));

        gridLayout->addWidget(BTN_6, 2, 2, 1, 1);

        BTN_8 = new QPushButton(gridLayoutWidget);
        BTN_8->setObjectName(QString::fromUtf8("BTN_8"));

        gridLayout->addWidget(BTN_8, 3, 1, 1, 1);

        PINCODELINE = new QLineEdit(gridLayoutWidget);
        PINCODELINE->setObjectName(QString::fromUtf8("PINCODELINE"));
        PINCODELINE->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(PINCODELINE, 0, 0, 1, 3);

        BTN_5 = new QPushButton(gridLayoutWidget);
        BTN_5->setObjectName(QString::fromUtf8("BTN_5"));

        gridLayout->addWidget(BTN_5, 2, 1, 1, 1);

        REMOVE = new QPushButton(gridLayoutWidget);
        REMOVE->setObjectName(QString::fromUtf8("REMOVE"));

        gridLayout->addWidget(REMOVE, 4, 0, 1, 1);

        CORRECT = new QPushButton(gridLayoutWidget);
        CORRECT->setObjectName(QString::fromUtf8("CORRECT"));

        gridLayout->addWidget(CORRECT, 4, 1, 1, 1);

        ACCEPT = new QPushButton(gridLayoutWidget);
        ACCEPT->setObjectName(QString::fromUtf8("ACCEPT"));

        gridLayout->addWidget(ACCEPT, 4, 2, 1, 1);


        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        BTN_9->setText(QCoreApplication::translate("LoginDialog", "9", nullptr));
        BTN_2->setText(QCoreApplication::translate("LoginDialog", "2", nullptr));
        BTN_4->setText(QCoreApplication::translate("LoginDialog", "4", nullptr));
        BTN_3->setText(QCoreApplication::translate("LoginDialog", "3", nullptr));
        BTN_7->setText(QCoreApplication::translate("LoginDialog", "7", nullptr));
        BTN_1->setText(QCoreApplication::translate("LoginDialog", "1", nullptr));
        BTN_6->setText(QCoreApplication::translate("LoginDialog", "6", nullptr));
        BTN_8->setText(QCoreApplication::translate("LoginDialog", "8", nullptr));
        PINCODELINE->setText(QString());
        BTN_5->setText(QCoreApplication::translate("LoginDialog", "5", nullptr));
        REMOVE->setText(QCoreApplication::translate("LoginDialog", "REMOVE", nullptr));
        CORRECT->setText(QCoreApplication::translate("LoginDialog", "CORRECT", nullptr));
        ACCEPT->setText(QCoreApplication::translate("LoginDialog", "ACCEPT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
