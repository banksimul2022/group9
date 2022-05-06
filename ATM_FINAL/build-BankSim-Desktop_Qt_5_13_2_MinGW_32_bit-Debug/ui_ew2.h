/********************************************************************************
** Form generated from reading UI file 'ew2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EW2_H
#define UI_EW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EW2
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *B5;
    QPushButton *B8;
    QPushButton *B2;
    QPushButton *B1;
    QPushButton *B7;
    QPushButton *B3;
    QPushButton *B4;
    QPushButton *B6;

    void setupUi(QDialog *EW2)
    {
        if (EW2->objectName().isEmpty())
            EW2->setObjectName(QString::fromUtf8("EW2"));
        EW2->resize(400, 300);
        layoutWidget = new QWidget(EW2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 382, 269));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B5 = new QPushButton(layoutWidget);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 1, 1, 1);

        B8 = new QPushButton(layoutWidget);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 4, 1, 1, 1);

        B2 = new QPushButton(layoutWidget);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 2, 0, 1, 1);

        B1 = new QPushButton(layoutWidget);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 1, 0, 1, 1);

        B7 = new QPushButton(layoutWidget);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 3, 1, 1, 1);

        B3 = new QPushButton(layoutWidget);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 3, 0, 1, 1);

        B4 = new QPushButton(layoutWidget);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 4, 0, 1, 1);

        B6 = new QPushButton(layoutWidget);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 2, 1, 1, 1);


        retranslateUi(EW2);

        QMetaObject::connectSlotsByName(EW2);
    } // setupUi

    void retranslateUi(QDialog *EW2)
    {
        EW2->setWindowTitle(QCoreApplication::translate("EW2", "Dialog", nullptr));
        B5->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B8->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B2->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B1->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B7->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B3->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
        B4->setText(QCoreApplication::translate("EW2", "Return", nullptr));
        B6->setText(QCoreApplication::translate("EW2", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EW2: public Ui_EW2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EW2_H
