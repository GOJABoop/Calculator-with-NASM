/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonNumber7;
    QPushButton *pushButtonNumber8;
    QPushButton *pushButtonNumber9;
    QPushButton *pushButtonNumber5;
    QPushButton *pushButtonNumber4;
    QPushButton *pushButtonNumber6;
    QPushButton *pushButtonNumber1;
    QPushButton *pushButtonNumber2;
    QPushButton *pushButtonNumber3;
    QPushButton *pushButtonNumber0;
    QPushButton *pushButtonPointDecimal;
    QPushButton *pushButtonClearBuffer;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonGetResult;
    QPushButton *pushButtonAddition;
    QPushButton *pushButtonSubtraction;
    QPushButton *pushButtonMultiplication;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonModule;
    QPushButton *pushButtonCos;
    QPushButton *pushButtonSen;
    QPushButton *pushButtonTan;
    QPushButton *pushButtonCosh;
    QPushButton *pushButtonSenh;
    QPushButton *pushButtonTanh;
    QPushButton *pushButtonCotan;
    QPushButton *pushButtonLog;
    QPushButton *pushButtonExp;
    QPushButton *pushButtonLn;
    QLabel *labelBasic;
    QLabel *labelTrigonometric;
    QPushButton *pushButtonSqrt;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(312, 418);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonNumber7 = new QPushButton(centralwidget);
        pushButtonNumber7->setObjectName(QString::fromUtf8("pushButtonNumber7"));
        pushButtonNumber7->setGeometry(QRect(10, 180, 41, 41));
        pushButtonNumber8 = new QPushButton(centralwidget);
        pushButtonNumber8->setObjectName(QString::fromUtf8("pushButtonNumber8"));
        pushButtonNumber8->setGeometry(QRect(60, 180, 41, 41));
        pushButtonNumber9 = new QPushButton(centralwidget);
        pushButtonNumber9->setObjectName(QString::fromUtf8("pushButtonNumber9"));
        pushButtonNumber9->setGeometry(QRect(110, 180, 41, 41));
        pushButtonNumber5 = new QPushButton(centralwidget);
        pushButtonNumber5->setObjectName(QString::fromUtf8("pushButtonNumber5"));
        pushButtonNumber5->setGeometry(QRect(60, 230, 41, 41));
        pushButtonNumber4 = new QPushButton(centralwidget);
        pushButtonNumber4->setObjectName(QString::fromUtf8("pushButtonNumber4"));
        pushButtonNumber4->setGeometry(QRect(10, 230, 41, 41));
        pushButtonNumber6 = new QPushButton(centralwidget);
        pushButtonNumber6->setObjectName(QString::fromUtf8("pushButtonNumber6"));
        pushButtonNumber6->setGeometry(QRect(110, 230, 41, 41));
        pushButtonNumber1 = new QPushButton(centralwidget);
        pushButtonNumber1->setObjectName(QString::fromUtf8("pushButtonNumber1"));
        pushButtonNumber1->setGeometry(QRect(10, 280, 41, 41));
        pushButtonNumber2 = new QPushButton(centralwidget);
        pushButtonNumber2->setObjectName(QString::fromUtf8("pushButtonNumber2"));
        pushButtonNumber2->setGeometry(QRect(60, 280, 41, 41));
        pushButtonNumber3 = new QPushButton(centralwidget);
        pushButtonNumber3->setObjectName(QString::fromUtf8("pushButtonNumber3"));
        pushButtonNumber3->setGeometry(QRect(110, 280, 41, 41));
        pushButtonNumber0 = new QPushButton(centralwidget);
        pushButtonNumber0->setObjectName(QString::fromUtf8("pushButtonNumber0"));
        pushButtonNumber0->setGeometry(QRect(10, 330, 41, 41));
        pushButtonPointDecimal = new QPushButton(centralwidget);
        pushButtonPointDecimal->setObjectName(QString::fromUtf8("pushButtonPointDecimal"));
        pushButtonPointDecimal->setGeometry(QRect(60, 330, 41, 41));
        pushButtonClearBuffer = new QPushButton(centralwidget);
        pushButtonClearBuffer->setObjectName(QString::fromUtf8("pushButtonClearBuffer"));
        pushButtonClearBuffer->setGeometry(QRect(210, 180, 89, 41));
        pushButtonClearBuffer->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonDelete = new QPushButton(centralwidget);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(160, 180, 41, 41));
        pushButtonGetResult = new QPushButton(centralwidget);
        pushButtonGetResult->setObjectName(QString::fromUtf8("pushButtonGetResult"));
        pushButtonGetResult->setGeometry(QRect(110, 330, 41, 41));
        pushButtonAddition = new QPushButton(centralwidget);
        pushButtonAddition->setObjectName(QString::fromUtf8("pushButtonAddition"));
        pushButtonAddition->setGeometry(QRect(160, 280, 41, 91));
        pushButtonSubtraction = new QPushButton(centralwidget);
        pushButtonSubtraction->setObjectName(QString::fromUtf8("pushButtonSubtraction"));
        pushButtonSubtraction->setGeometry(QRect(160, 230, 41, 41));
        pushButtonMultiplication = new QPushButton(centralwidget);
        pushButtonMultiplication->setObjectName(QString::fromUtf8("pushButtonMultiplication"));
        pushButtonMultiplication->setGeometry(QRect(210, 230, 41, 41));
        pushButtonDivision = new QPushButton(centralwidget);
        pushButtonDivision->setObjectName(QString::fromUtf8("pushButtonDivision"));
        pushButtonDivision->setGeometry(QRect(210, 280, 41, 41));
        pushButtonModule = new QPushButton(centralwidget);
        pushButtonModule->setObjectName(QString::fromUtf8("pushButtonModule"));
        pushButtonModule->setGeometry(QRect(210, 330, 41, 41));
        pushButtonCos = new QPushButton(centralwidget);
        pushButtonCos->setObjectName(QString::fromUtf8("pushButtonCos"));
        pushButtonCos->setGeometry(QRect(10, 70, 61, 31));
        pushButtonSen = new QPushButton(centralwidget);
        pushButtonSen->setObjectName(QString::fromUtf8("pushButtonSen"));
        pushButtonSen->setGeometry(QRect(80, 70, 61, 31));
        pushButtonTan = new QPushButton(centralwidget);
        pushButtonTan->setObjectName(QString::fromUtf8("pushButtonTan"));
        pushButtonTan->setGeometry(QRect(150, 70, 61, 31));
        pushButtonCosh = new QPushButton(centralwidget);
        pushButtonCosh->setObjectName(QString::fromUtf8("pushButtonCosh"));
        pushButtonCosh->setGeometry(QRect(10, 110, 61, 31));
        pushButtonSenh = new QPushButton(centralwidget);
        pushButtonSenh->setObjectName(QString::fromUtf8("pushButtonSenh"));
        pushButtonSenh->setGeometry(QRect(80, 110, 61, 31));
        pushButtonTanh = new QPushButton(centralwidget);
        pushButtonTanh->setObjectName(QString::fromUtf8("pushButtonTanh"));
        pushButtonTanh->setGeometry(QRect(150, 110, 61, 31));
        pushButtonCotan = new QPushButton(centralwidget);
        pushButtonCotan->setObjectName(QString::fromUtf8("pushButtonCotan"));
        pushButtonCotan->setGeometry(QRect(220, 70, 61, 31));
        pushButtonLog = new QPushButton(centralwidget);
        pushButtonLog->setObjectName(QString::fromUtf8("pushButtonLog"));
        pushButtonLog->setGeometry(QRect(220, 110, 61, 31));
        pushButtonExp = new QPushButton(centralwidget);
        pushButtonExp->setObjectName(QString::fromUtf8("pushButtonExp"));
        pushButtonExp->setGeometry(QRect(260, 230, 41, 41));
        pushButtonLn = new QPushButton(centralwidget);
        pushButtonLn->setObjectName(QString::fromUtf8("pushButtonLn"));
        pushButtonLn->setGeometry(QRect(260, 280, 41, 41));
        labelBasic = new QLabel(centralwidget);
        labelBasic->setObjectName(QString::fromUtf8("labelBasic"));
        labelBasic->setGeometry(QRect(10, 150, 281, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        labelBasic->setFont(font);
        labelTrigonometric = new QLabel(centralwidget);
        labelTrigonometric->setObjectName(QString::fromUtf8("labelTrigonometric"));
        labelTrigonometric->setGeometry(QRect(10, 50, 281, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelTrigonometric->setFont(font1);
        pushButtonSqrt = new QPushButton(centralwidget);
        pushButtonSqrt->setObjectName(QString::fromUtf8("pushButtonSqrt"));
        pushButtonSqrt->setGeometry(QRect(260, 330, 41, 41));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 10, 271, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 312, 22));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName(QString::fromUtf8("menuCalculator"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButtonNumber7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButtonNumber8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButtonNumber9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButtonNumber5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButtonNumber4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButtonNumber6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButtonNumber1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonNumber2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButtonNumber3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButtonNumber0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonPointDecimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButtonClearBuffer->setText(QCoreApplication::translate("MainWindow", "clear all", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
        pushButtonGetResult->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButtonAddition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonSubtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonMultiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonModule->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButtonCos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButtonSen->setText(QCoreApplication::translate("MainWindow", "sen", nullptr));
        pushButtonTan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButtonCosh->setText(QCoreApplication::translate("MainWindow", "cosh", nullptr));
        pushButtonSenh->setText(QCoreApplication::translate("MainWindow", "senh", nullptr));
        pushButtonTanh->setText(QCoreApplication::translate("MainWindow", "tanh", nullptr));
        pushButtonCotan->setText(QCoreApplication::translate("MainWindow", "cotan", nullptr));
        pushButtonLog->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButtonExp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButtonLn->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        labelBasic->setText(QCoreApplication::translate("MainWindow", "Basic -----------------------------------------------------", nullptr));
        labelTrigonometric->setText(QCoreApplication::translate("MainWindow", "Trigonometric ----------------------------------------", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
