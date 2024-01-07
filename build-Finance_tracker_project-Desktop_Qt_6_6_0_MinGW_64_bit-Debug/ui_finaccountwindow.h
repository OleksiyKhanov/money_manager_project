/********************************************************************************
** Form generated from reading UI file 'finaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINACCOUNTWINDOW_H
#define UI_FINACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinAccountWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_totalCount;
    QLabel *label_3;
    QPushButton *pushButton_back;
    QLabel *label_nameAccount;
    QGroupBox *groupBox_newTransaction;
    QLineEdit *lineEdit_nameTransaction;
    QLineEdit *lineEdit_sumTransaction;
    QPushButton *pushButton_saveTransaction;
    QLabel *label_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QLabel *label_statusTransaction;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FinAccountWindow)
    {
        if (FinAccountWindow->objectName().isEmpty())
            FinAccountWindow->setObjectName("FinAccountWindow");
        FinAccountWindow->resize(476, 434);
        centralwidget = new QWidget(FinAccountWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 160, 181, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 131, 31));
        label_totalCount = new QLabel(centralwidget);
        label_totalCount->setObjectName("label_totalCount");
        label_totalCount->setGeometry(QRect(10, 110, 151, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 220, 111, 16));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(280, 340, 181, 41));
        label_nameAccount = new QLabel(centralwidget);
        label_nameAccount->setObjectName("label_nameAccount");
        label_nameAccount->setGeometry(QRect(160, 10, 181, 31));
        groupBox_newTransaction = new QGroupBox(centralwidget);
        groupBox_newTransaction->setObjectName("groupBox_newTransaction");
        groupBox_newTransaction->setGeometry(QRect(270, 80, 201, 101));
        lineEdit_nameTransaction = new QLineEdit(groupBox_newTransaction);
        lineEdit_nameTransaction->setObjectName("lineEdit_nameTransaction");
        lineEdit_nameTransaction->setGeometry(QRect(80, 10, 113, 24));
        lineEdit_sumTransaction = new QLineEdit(groupBox_newTransaction);
        lineEdit_sumTransaction->setObjectName("lineEdit_sumTransaction");
        lineEdit_sumTransaction->setGeometry(QRect(80, 40, 113, 24));
        pushButton_saveTransaction = new QPushButton(groupBox_newTransaction);
        pushButton_saveTransaction->setObjectName("pushButton_saveTransaction");
        pushButton_saveTransaction->setGeometry(QRect(20, 70, 171, 24));
        label_2 = new QLabel(groupBox_newTransaction);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 49, 16));
        label_4 = new QLabel(groupBox_newTransaction);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 40, 49, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 250, 181, 192));
        listWidget->setStyleSheet(QString::fromUtf8("border: 1px solid transparent; background-color: transparent;"));
        label_statusTransaction = new QLabel(centralwidget);
        label_statusTransaction->setObjectName("label_statusTransaction");
        label_statusTransaction->setGeometry(QRect(270, 190, 201, 20));
        FinAccountWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FinAccountWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 476, 21));
        FinAccountWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FinAccountWindow);
        statusbar->setObjectName("statusbar");
        FinAccountWindow->setStatusBar(statusbar);

        retranslateUi(FinAccountWindow);

        QMetaObject::connectSlotsByName(FinAccountWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FinAccountWindow)
    {
        FinAccountWindow->setWindowTitle(QCoreApplication::translate("FinAccountWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("FinAccountWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\275\320\276\320\262\321\203 \321\202\321\200\320\260\320\275\320\267\320\260\320\272\321\206\321\226\321\216", nullptr));
        label->setText(QCoreApplication::translate("FinAccountWindow", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\270\320\271 \321\200\320\260\321\205\321\203\320\275\320\276\320\272:", nullptr));
        label_totalCount->setText(QString());
        label_3->setText(QCoreApplication::translate("FinAccountWindow", "\320\206\321\201\321\202\320\276\321\200\321\226\321\217 \321\202\321\200\320\260\320\275\320\267\320\260\320\272\321\206\321\226\320\271: ", nullptr));
        pushButton_back->setText(QCoreApplication::translate("FinAccountWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\214 \321\203 \320\263\320\276\320\273\320\276\320\262\320\275\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label_nameAccount->setText(QCoreApplication::translate("FinAccountWindow", " \320\235\320\260\320\267\320\262\320\260 \321\200\320\260\321\205\321\203\320\275\320\272\321\203 (\321\203\320\274\320\276\320\262\320\275\320\276)", nullptr));
        groupBox_newTransaction->setTitle(QString());
        lineEdit_nameTransaction->setPlaceholderText(QCoreApplication::translate("FinAccountWindow", "\320\235\320\265 \320\276\320\261\320\276\320\262'\321\217\320\267\320\272\320\276\320\262\320\276", nullptr));
        pushButton_saveTransaction->setText(QCoreApplication::translate("FinAccountWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \321\202\321\200\320\260\320\275\320\267\320\260\320\272\321\206\321\226\321\216", nullptr));
        label_2->setText(QCoreApplication::translate("FinAccountWindow", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("FinAccountWindow", "\320\241\321\203\320\274\320\260", nullptr));
        label_statusTransaction->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FinAccountWindow: public Ui_FinAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINACCOUNTWINDOW_H
