/********************************************************************************
** Form generated from reading UI file 'ew1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EW1_H
#define UI_EW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EW1
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *B1;
    QPushButton *B4;
    QPushButton *B8;
    QPushButton *B3;
    QPushButton *B7;
    QPushButton *B5;
    QPushButton *B6;
    QPushButton *B2;

    void setupUi(QDialog *EW1)
    {
        if (EW1->objectName().isEmpty())
            EW1->setObjectName(QString::fromUtf8("EW1"));
        EW1->resize(400, 287);
        horizontalLayout = new QHBoxLayout(EW1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        B1 = new QPushButton(EW1);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 1, 0, 1, 1);

        B4 = new QPushButton(EW1);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 4, 0, 1, 1);

        B8 = new QPushButton(EW1);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 4, 1, 1, 1);

        B3 = new QPushButton(EW1);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 3, 0, 1, 1);

        B7 = new QPushButton(EW1);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 3, 1, 1, 1);

        B5 = new QPushButton(EW1);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 1, 1, 1);

        B6 = new QPushButton(EW1);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 2, 1, 1, 1);

        B2 = new QPushButton(EW1);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(EW1);

        QMetaObject::connectSlotsByName(EW1);
    } // setupUi

    void retranslateUi(QDialog *EW1)
    {
        EW1->setWindowTitle(QCoreApplication::translate("EW1", "Dialog", nullptr));
        B1->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B4->setText(QCoreApplication::translate("EW1", "Return", nullptr));
        B8->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B3->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B7->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B5->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B6->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
        B2->setText(QCoreApplication::translate("EW1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EW1: public Ui_EW1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EW1_H
