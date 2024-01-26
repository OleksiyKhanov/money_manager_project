/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QLabel *label;
    QLabel *label_finalSum;
    QComboBox *comboBox_choseFinAcc;
    QLabel *label_finalPlus;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_finalMinus;
    QListWidget *listWidget_transactions;

    void setupUi(QWidget *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName("GraphWindow");
        GraphWindow->resize(271, 378);
        label = new QLabel(GraphWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 111, 21));
        label_finalSum = new QLabel(GraphWindow);
        label_finalSum->setObjectName("label_finalSum");
        label_finalSum->setGeometry(QRect(120, 60, 111, 21));
        comboBox_choseFinAcc = new QComboBox(GraphWindow);
        comboBox_choseFinAcc->setObjectName("comboBox_choseFinAcc");
        comboBox_choseFinAcc->setGeometry(QRect(10, 10, 151, 31));
        label_finalPlus = new QLabel(GraphWindow);
        label_finalPlus->setObjectName("label_finalPlus");
        label_finalPlus->setGeometry(QRect(140, 100, 111, 21));
        label_2 = new QLabel(GraphWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 121, 21));
        label_3 = new QLabel(GraphWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 111, 21));
        label_finalMinus = new QLabel(GraphWindow);
        label_finalMinus->setObjectName("label_finalMinus");
        label_finalMinus->setGeometry(QRect(120, 140, 121, 21));
        listWidget_transactions = new QListWidget(GraphWindow);
        listWidget_transactions->setObjectName("listWidget_transactions");
        listWidget_transactions->setGeometry(QRect(10, 180, 201, 171));
        listWidget_transactions->setStyleSheet(QString::fromUtf8("border: 1px solid transparent; background-color: transparent;"));

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QWidget *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("GraphWindow", "\320\236\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\260 \321\201\321\203\320\274\320\274\320\260 :", nullptr));
        label_finalSum->setText(QString());
        comboBox_choseFinAcc->setCurrentText(QString());
        comboBox_choseFinAcc->setPlaceholderText(QCoreApplication::translate("GraphWindow", "\320\236\320\261\321\200\320\260\321\202\320\270 \321\200\320\260\321\205\321\203\320\275\320\276\320\272", nullptr));
        label_finalPlus->setText(QString());
        label_2->setText(QCoreApplication::translate("GraphWindow", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\270\320\271 \320\277\321\200\320\270\320\261\321\203\321\202\320\276\320\272 :", nullptr));
        label_3->setText(QCoreApplication::translate("GraphWindow", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\321\226 \320\262\320\270\321\202\321\200\320\260\321\202\320\270:", nullptr));
        label_finalMinus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
