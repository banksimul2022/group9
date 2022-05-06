/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *B2;
    QPushButton *B7;
    QPushButton *B8;
    QPushButton *B5;
    QPushButton *B4;
    QPushButton *B3;
    QPushButton *B6;
    QPushButton *B1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(462, 307);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        B2 = new QPushButton(centralwidget);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 2, 0, 1, 1);

        B7 = new QPushButton(centralwidget);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 3, 1, 1, 1);

        B8 = new QPushButton(centralwidget);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 4, 1, 1, 1);

        B5 = new QPushButton(centralwidget);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 1, 1, 1);

        B4 = new QPushButton(centralwidget);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 4, 0, 1, 1);

        B3 = new QPushButton(centralwidget);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 3, 0, 1, 1);

        B6 = new QPushButton(centralwidget);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 2, 1, 1, 1);

        B1 = new QPushButton(centralwidget);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 462, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        B2->setText(QCoreApplication::translate("MainWindow", "Lataus", nullptr));
        B7->setText(QCoreApplication::translate("MainWindow", "Tapahtumat", nullptr));
        B8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B5->setText(QCoreApplication::translate("MainWindow", "Otto", nullptr));
        B4->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        B3->setText(QCoreApplication::translate("MainWindow", "Tilin valinta", nullptr));
        B6->setText(QCoreApplication::translate("MainWindow", "Saldo", nullptr));
        B1->setText(QCoreApplication::translate("MainWindow", "Otto & lahjoitus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
