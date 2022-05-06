/********************************************************************************
** Form generated from reading UI file 'ew3.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EW3_H
#define UI_EW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EW3
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *B3;
    QPushButton *B7;
    QPushButton *B6;
    QPushButton *B4;
    QPushButton *B1;
    QPushButton *B8;
    QPushButton *B5;
    QPushButton *B2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *EW3)
    {
        if (EW3->objectName().isEmpty())
            EW3->setObjectName(QString::fromUtf8("EW3"));
        EW3->resize(400, 300);
        layoutWidget = new QWidget(EW3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 382, 269));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B3 = new QPushButton(layoutWidget);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 3, 0, 1, 1);

        B7 = new QPushButton(layoutWidget);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 3, 2, 1, 1);

        B6 = new QPushButton(layoutWidget);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 2, 2, 1, 1);

        B4 = new QPushButton(layoutWidget);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 4, 0, 1, 1);

        B1 = new QPushButton(layoutWidget);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 1, 0, 1, 1);

        B8 = new QPushButton(layoutWidget);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 4, 2, 1, 1);

        B5 = new QPushButton(layoutWidget);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 2, 1, 1);

        B2 = new QPushButton(layoutWidget);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);


        retranslateUi(EW3);

        QMetaObject::connectSlotsByName(EW3);
    } // setupUi

    void retranslateUi(QDialog *EW3)
    {
        EW3->setWindowTitle(QCoreApplication::translate("EW3", "Dialog", nullptr));
        B3->setText(QCoreApplication::translate("EW3", "Tili3", nullptr));
        B7->setText(QCoreApplication::translate("EW3", "PushButton", nullptr));
        B6->setText(QCoreApplication::translate("EW3", "PushButton", nullptr));
        B4->setText(QCoreApplication::translate("EW3", "Return", nullptr));
        B1->setText(QCoreApplication::translate("EW3", "Tili1", nullptr));
        B8->setText(QCoreApplication::translate("EW3", "PushButton", nullptr));
        B5->setText(QCoreApplication::translate("EW3", "PushButton", nullptr));
        B2->setText(QCoreApplication::translate("EW3", "Tili2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EW3: public Ui_EW3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EW3_H
