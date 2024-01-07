/********************************************************************************
** Form generated from reading UI file 'newfinaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFINACCOUNT_H
#define UI_NEWFINACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newFinAccount
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_startSum;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_create;
    QLabel *label_finish;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *newFinAccount)
    {
        if (newFinAccount->objectName().isEmpty())
            newFinAccount->setObjectName("newFinAccount");
        newFinAccount->resize(327, 223);
        layoutWidget = new QWidget(newFinAccount);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(137, 20, 171, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_startSum = new QLineEdit(layoutWidget);
        lineEdit_startSum->setObjectName("lineEdit_startSum");

        verticalLayout->addWidget(lineEdit_startSum);

        layoutWidget_2 = new QWidget(newFinAccount);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 20, 101, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        pushButton_create = new QPushButton(newFinAccount);
        pushButton_create->setObjectName("pushButton_create");
        pushButton_create->setGeometry(QRect(10, 150, 151, 31));
        label_finish = new QLabel(newFinAccount);
        label_finish->setObjectName("label_finish");
        label_finish->setGeometry(QRect(90, 110, 151, 31));
        pushButton_cancel = new QPushButton(newFinAccount);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(170, 150, 151, 31));

        retranslateUi(newFinAccount);

        QMetaObject::connectSlotsByName(newFinAccount);
    } // setupUi

    void retranslateUi(QDialog *newFinAccount)
    {
        newFinAccount->setWindowTitle(QCoreApplication::translate("newFinAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newFinAccount", "\320\235\320\260\320\267\320\262\320\260 \321\200\320\260\321\205\321\203\320\275\320\272\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("newFinAccount", "\320\241\321\202\320\260\321\200\321\202\320\276\320\262\320\260 \321\201\321\203\320\274\320\260", nullptr));
        pushButton_create->setText(QCoreApplication::translate("newFinAccount", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        label_finish->setText(QString());
        pushButton_cancel->setText(QCoreApplication::translate("newFinAccount", "\320\222\320\270\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFinAccount: public Ui_newFinAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFINACCOUNT_H
