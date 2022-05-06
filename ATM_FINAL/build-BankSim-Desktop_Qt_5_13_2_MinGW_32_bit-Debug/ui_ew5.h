/********************************************************************************
** Form generated from reading UI file 'ew5.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EW5_H
#define UI_EW5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EW5
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *B4;
    QPushButton *B6;
    QPushButton *B3;
    QPushButton *B7;
    QPushButton *B8;
    QPushButton *B2;
    QPushButton *B5;
    QPushButton *B1;
    QLineEdit *L2;
    QLineEdit *L1;
    QLineEdit *L3;
    QLineEdit *L4;
    QLineEdit *L5;
    QLineEdit *L6;
    QLineEdit *L7;
    QLineEdit *L8;

    void setupUi(QDialog *EW5)
    {
        if (EW5->objectName().isEmpty())
            EW5->setObjectName(QString::fromUtf8("EW5"));
        EW5->resize(400, 300);
        layoutWidget = new QWidget(EW5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 382, 269));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B4 = new QPushButton(layoutWidget);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 4, 0, 1, 1);

        B6 = new QPushButton(layoutWidget);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 2, 3, 1, 1);

        B3 = new QPushButton(layoutWidget);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 3, 0, 1, 1);

        B7 = new QPushButton(layoutWidget);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 3, 3, 1, 1);

        B8 = new QPushButton(layoutWidget);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 4, 3, 1, 1);

        B2 = new QPushButton(layoutWidget);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 2, 0, 1, 1);

        B5 = new QPushButton(layoutWidget);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 3, 1, 1);

        B1 = new QPushButton(layoutWidget);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 1, 0, 1, 1);

        L2 = new QLineEdit(layoutWidget);
        L2->setObjectName(QString::fromUtf8("L2"));

        gridLayout->addWidget(L2, 2, 1, 1, 1);

        L1 = new QLineEdit(layoutWidget);
        L1->setObjectName(QString::fromUtf8("L1"));

        gridLayout->addWidget(L1, 1, 1, 1, 1);

        L3 = new QLineEdit(layoutWidget);
        L3->setObjectName(QString::fromUtf8("L3"));

        gridLayout->addWidget(L3, 3, 1, 1, 1);

        L4 = new QLineEdit(layoutWidget);
        L4->setObjectName(QString::fromUtf8("L4"));

        gridLayout->addWidget(L4, 4, 1, 1, 1);

        L5 = new QLineEdit(layoutWidget);
        L5->setObjectName(QString::fromUtf8("L5"));

        gridLayout->addWidget(L5, 1, 2, 1, 1);

        L6 = new QLineEdit(layoutWidget);
        L6->setObjectName(QString::fromUtf8("L6"));

        gridLayout->addWidget(L6, 2, 2, 1, 1);

        L7 = new QLineEdit(layoutWidget);
        L7->setObjectName(QString::fromUtf8("L7"));

        gridLayout->addWidget(L7, 3, 2, 1, 1);

        L8 = new QLineEdit(layoutWidget);
        L8->setObjectName(QString::fromUtf8("L8"));

        gridLayout->addWidget(L8, 4, 2, 1, 1);


        retranslateUi(EW5);

        QMetaObject::connectSlotsByName(EW5);
    } // setupUi

    void retranslateUi(QDialog *EW5)
    {
        EW5->setWindowTitle(QCoreApplication::translate("EW5", "Dialog", nullptr));
        B4->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B6->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B3->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B7->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B8->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B2->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B5->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        B1->setText(QCoreApplication::translate("EW5", "PushButton", nullptr));
        L2->setText(QCoreApplication::translate("EW5", "40", nullptr));
        L1->setText(QCoreApplication::translate("EW5", "20", nullptr));
        L3->setText(QCoreApplication::translate("EW5", "60", nullptr));
        L4->setText(QCoreApplication::translate("EW5", "Return", nullptr));
        L5->setText(QCoreApplication::translate("EW5", "90", nullptr));
        L6->setText(QCoreApplication::translate("EW5", "140", nullptr));
        L7->setText(QCoreApplication::translate("EW5", "240", nullptr));
        L8->setText(QCoreApplication::translate("EW5", "Muu summa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EW5: public Ui_EW5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EW5_H
