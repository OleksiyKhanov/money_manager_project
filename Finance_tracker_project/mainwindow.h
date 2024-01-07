#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//задумані класи
#include "FinanceAccount.h"
#include "Goal.h"
#include "Graph.h"
#include "Transaction.h"

//класи сторонніх вікон
#include "newfinaccount.h"
#include "finaccountwindow.h"
#include "graphwindow.h"


#include <QMainWindow>


#include <QDebug>
#include <QVector>
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<FinanceAccount> accountData;

private slots:

    void on_pushButton_newTransaction_clicked();
    void on_comboBox_2_activated(int index);

    void on_pushButton_createZvit_clicked();

public slots:
    // void receiveNameList(const QVector<QString> &list);
    void closeAccountWindow();

    void onAccountData(QVector<FinanceAccount>& data) {

        this->accountData = data;

        for(int i = 0; i < data.size(); i++) {
            this->accountData[i].setTransactions(data[i].getTransactions());
        }

    }
    void addAccountData(FinanceAccount& item) {
        qDebug() << "before push back";
        for (int i = 0; i < this->accountData.size(); i++) {
            this->accountData[i].print();

            for (int j = 0; j < this->accountData[i].getTransactions().size(); j++) {
                this->accountData[i].getTransactions()[j].print();
            }
        }

        this->accountData.push_back(item);

        qDebug() << "after push back";
        for (int i = 0; i < this->accountData.size(); i++) {
            this->accountData[i].print();

            for (int j = 0; j < this->accountData[i].getTransactions().size(); j++) {
                this->accountData[i].getTransactions()[j].print();
            }
        }

    }

    void onRequestAccountData(void) {
        emit sendAccountList(this->accountData);
    }
    void sendListToWindow3(void){
        emit sendAccountList(this->accountData);
    }
    void onUpdateNameList(void);

private:
    Ui::MainWindow *ui;
    newFinAccount window1;
    FinAccountWindow window2;
    GraphWindow window3;

signals:
    void getIndex(int i);
    void tempSignal();
    void sendAccountList(QVector<FinanceAccount>& data);
};


#endif // MAINWINDOW_H
