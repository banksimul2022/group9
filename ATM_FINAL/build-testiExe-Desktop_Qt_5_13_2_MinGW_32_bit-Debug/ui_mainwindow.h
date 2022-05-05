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
#include <QtWidgets/QLineEdit>
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
    QPushButton *bAsiakas;
    QPushButton *bKortti;
    QPushButton *bSaldo;
    QPushButton *bNosto;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bAsiakas = new QPushButton(centralwidget);
        bAsiakas->setObjectName(QString::fromUtf8("bAsiakas"));
        bAsiakas->setGeometry(QRect(150, 140, 80, 21));
        bKortti = new QPushButton(centralwidget);
        bKortti->setObjectName(QString::fromUtf8("bKortti"));
        bKortti->setGeometry(QRect(230, 140, 80, 21));
        bSaldo = new QPushButton(centralwidget);
        bSaldo->setObjectName(QString::fromUtf8("bSaldo"));
        bSaldo->setGeometry(QRect(150, 160, 80, 21));
        bNosto = new QPushButton(centralwidget);
        bNosto->setObjectName(QString::fromUtf8("bNosto"));
        bNosto->setGeometry(QRect(230, 160, 80, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 100, 113, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
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
        bAsiakas->setText(QCoreApplication::translate("MainWindow", "Asiakas", nullptr));
        bKortti->setText(QCoreApplication::translate("MainWindow", "Kortti", nullptr));
        bSaldo->setText(QCoreApplication::translate("MainWindow", "Saldo", nullptr));
        bNosto->setText(QCoreApplication::translate("MainWindow", "Nosto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
