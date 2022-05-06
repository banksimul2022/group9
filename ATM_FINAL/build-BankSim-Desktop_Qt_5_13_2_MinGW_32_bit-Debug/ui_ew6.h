/********************************************************************************
** Form generated from reading UI file 'ew6.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EW6_H
#define UI_EW6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EW6
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *B2;
    QPushButton *B4;
    QPushButton *B3;
    QPushButton *B1;
    QLineEdit *lineEdit;
    QPushButton *B5;
    QPushButton *B6;
    QPushButton *B7;
    QPushButton *B8;

    void setupUi(QDialog *EW6)
    {
        if (EW6->objectName().isEmpty())
            EW6->setObjectName(QString::fromUtf8("EW6"));
        EW6->resize(400, 300);
        horizontalLayout = new QHBoxLayout(EW6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        B2 = new QPushButton(EW6);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout_2->addWidget(B2, 1, 0, 1, 1);

        B4 = new QPushButton(EW6);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout_2->addWidget(B4, 3, 0, 1, 1);

        B3 = new QPushButton(EW6);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout_2->addWidget(B3, 2, 0, 1, 1);

        B1 = new QPushButton(EW6);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout_2->addWidget(B1, 0, 0, 1, 1);

        lineEdit = new QLineEdit(EW6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 4, 1);

        B5 = new QPushButton(EW6);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout_2->addWidget(B5, 0, 2, 1, 1);

        B6 = new QPushButton(EW6);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout_2->addWidget(B6, 1, 2, 1, 1);

        B7 = new QPushButton(EW6);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout_2->addWidget(B7, 2, 2, 1, 1);

        B8 = new QPushButton(EW6);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout_2->addWidget(B8, 3, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(EW6);

        QMetaObject::connectSlotsByName(EW6);
    } // setupUi

    void retranslateUi(QDialog *EW6)
    {
        EW6->setWindowTitle(QCoreApplication::translate("EW6", "Dialog", nullptr));
        B2->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
        B4->setText(QCoreApplication::translate("EW6", "Return", nullptr));
        B3->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
        B1->setText(QCoreApplication::translate("EW6", "Saldo", nullptr));
        lineEdit->setText(QCoreApplication::translate("EW6", "Saldo", nullptr));
        B5->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
        B6->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
        B7->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
        B8->setText(QCoreApplication::translate("EW6", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EW6: public Ui_EW6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EW6_H
