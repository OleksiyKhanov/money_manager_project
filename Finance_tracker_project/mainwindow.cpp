#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Goal.h"
#include "FinanceAccount.h"
#include "Graph.h"

#include <QStandardPaths>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    //коннекти, з'єднують сигнали та слоти між собою
    connect(this, &MainWindow::sendAccountListToWin3, &window3, &GraphWindow::setAccList);
    //connect(&window3, &GraphWindow::getGraph, &window3, &GraphWindow::setGraph);

    connect(&window2, &FinAccountWindow::signalBack, this, &MainWindow::closeAccountWindow);

    connect(this, &MainWindow::getIndex, &window2, &FinAccountWindow::setIndex);

    // connect(&window1, &newFinAccount::accountData, this, &MainWindow::onAccountData);
    connect(&window1, &newFinAccount::sendToAddAccountData, this, &MainWindow::addAccountData);

    connect(&window2, &FinAccountWindow::reqAccData, this, &MainWindow::onRequestAccountData);
    connect(this, &MainWindow::sendAccountList, &window2, &FinAccountWindow::getAccountsList);
    //====
    connect(&window2, &FinAccountWindow::sendAccDataForGoal, this, &MainWindow::onAccountData);

    // connect(&window1, &newFinAccount::reqAccountData, this, &MainWindow::onRequestAccountData);
    // connect(this, &MainWindow::sendAccountList, &window1, &newFinAccount::receiveAccountData);

    connect(&window1, &newFinAccount::updNameList, this, &MainWindow::onUpdateNameList);


    QString appDataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QString filepath = appDataPath + "/data.csv";


    QFile file(filepath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        QTextStream in(&file);

        int c = 0;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split("; ");

            FinanceAccount acc = *(new FinanceAccount(fields[0], fields[1].toDouble()));

            this->accountData.push_back(acc);

            for (int i = 2; i < fields.size() - 1; i++) {

                QStringList trLine = fields[i].split(":");

                Transaction newTr = *(new Transaction(trLine[0], trLine[1].toFloat()));

                this->accountData[c].addTransaction(newTr);

            }

            c+=1;
        }

        QStringList namesList;

        for (int i = 0; i < this->accountData.size(); i++) {
            namesList.push_back(this->accountData[i].getName());
        }

        ui->comboBox_2->clear();
        ui->comboBox_2->addItems(namesList);


    } else {
        qDebug() << "Failed to open the file";
    }


    //Demo

//    qDebug() << "Demo:";


//    qDebug() << "Late binding:";

//    Goal *g = new SubGoal();

//    g->print();


//    qDebug() << "Static member and static member function:";

//    SubGoal::printTotalCount();

//    SubGoal a;
//    SubGoal b;
//    SubGoal c;

//    SubGoal::printTotalCount();

//    qDebug() << "Overloaded operators:";


//    Transaction aa = Transaction("1", 1);
//    Transaction bb = Transaction("2", 2);
//    qDebug() << (aa == bb);

//    qDebug() << (aa != bb);


//    FinanceAccount aaa = FinanceAccount("1", 123);

//    aaa++;

//    qDebug() << aaa;

//    aaa--;

//    qDebug() << aaa;

//    QVector<Transaction> vec;
//    vec.push_back(aa);
//    vec.push_back(bb);

//    QString newName = "2";
//    double newSum = 321;

//    aaa(newName, newSum, vec);

//    qDebug() << aaa;

//    aaa[1].print();

//    aaa[-1].print();

//    FinanceAccount bbb = FinanceAccount("3", 123);

//    FinanceAccount ccc = aaa + bbb;

//    qDebug() << ccc;



}
MainWindow::~MainWindow()
{

    QString appDataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    QDir appDir(appDataPath);

    if (!appDir.exists()) {
        appDir.mkpath(".");
    }

    QString filepath = appDataPath + "/data.csv";

    QFile file(filepath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        for (int i = 0; i < this->accountData.size(); i++) {

            QString transactions = "";

            for (int j = 0; j < this->accountData[i].getTransactions().size(); j++) {

                QString outputString = this->accountData[i].getTransactions()[j].getName() + ":" + QString::number(this->accountData[i].getTransactions()[j].getSum()) + "; ";
                transactions += outputString;
            }

            out << this->accountData[i].getName() << "; " << this->accountData[i].getTotalCount() << "; " << transactions << "\n";
        }

        file.close();

    } else {

        qDebug() << "Error opening file for writing \n";
        file.close();
    }



    delete ui;
}

void MainWindow::onUpdateNameList() {
    QStringList namesList;

    for (int i = 0; i < this->accountData.size(); i++) {
        // this->accountData[i].print();
        namesList.push_back(this->accountData[i].getName());
    }

    ui->comboBox_2->clear();
    ui->comboBox_2->addItems(namesList);
}

void MainWindow::on_pushButton_newTransaction_clicked()
{

    window1.setModal(true);
    window1.exec();

}


void MainWindow::on_comboBox_2_activated(int index)
{

    emit getIndex(index);
    emit tempSignal();
    hide();
    window2.show();
    qDebug()<< "start window2! ";
    accountData[0].getGoal().print();

}

void MainWindow::closeAccountWindow(){

    window2.close();
    show();
}


void MainWindow::on_pushButton_createZvit_clicked()
{
   window3.show();
   sendListToWindow3();
}



