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

QT_BEGIN_NAMESPACE

class Ui_newFinAccount
{
public:
    QPushButton *pushButton_create;
    QLabel *label_finish;
    QPushButton *pushButton_cancel;
    QLineEdit *lineEdit_startSum;
    QLineEdit *lineEdit_name;

    void setupUi(QDialog *newFinAccount)
    {
        if (newFinAccount->objectName().isEmpty())
            newFinAccount->setObjectName("newFinAccount");
        newFinAccount->resize(330, 223);
        pushButton_create = new QPushButton(newFinAccount);
        pushButton_create->setObjectName("pushButton_create");
        pushButton_create->setGeometry(QRect(10, 150, 151, 31));
        label_finish = new QLabel(newFinAccount);
        label_finish->setObjectName("label_finish");
        label_finish->setGeometry(QRect(80, 100, 171, 31));
        pushButton_cancel = new QPushButton(newFinAccount);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(170, 150, 151, 31));
        lineEdit_startSum = new QLineEdit(newFinAccount);
        lineEdit_startSum->setObjectName("lineEdit_startSum");
        lineEdit_startSum->setGeometry(QRect(50, 60, 231, 31));
        lineEdit_name = new QLineEdit(newFinAccount);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(50, 20, 231, 31));

        retranslateUi(newFinAccount);

        QMetaObject::connectSlotsByName(newFinAccount);
    } // setupUi

    void retranslateUi(QDialog *newFinAccount)
    {
        newFinAccount->setWindowTitle(QCoreApplication::translate("newFinAccount", "Dialog", nullptr));
        pushButton_create->setText(QCoreApplication::translate("newFinAccount", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        label_finish->setText(QString());
        pushButton_cancel->setText(QCoreApplication::translate("newFinAccount", "\320\222\320\270\320\271\321\202\320\270", nullptr));
        lineEdit_startSum->setPlaceholderText(QCoreApplication::translate("newFinAccount", "\320\241\321\202\321\200\320\260\321\200\321\202\320\276\320\262\320\260 \321\201\321\203\320\274\320\260", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("newFinAccount", "\320\235\320\260\320\267\320\262\320\260 \321\200\320\260\321\205\321\203\320\275\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFinAccount: public Ui_newFinAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFINACCOUNT_H
