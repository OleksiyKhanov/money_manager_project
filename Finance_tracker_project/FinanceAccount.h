#ifndef FINANCEACCOUNT_H
#define FINANCEACCOUNT_H
#include <QMainWindow>
#include <QApplication>
#include "Goal.h"
#include "Transaction.h"
#include <QDebug>

class FinanceAccount{

    double totalCount;
    QString name;
    QVector<Transaction> transactionList;
    Goal financialGoal;
    float startSum;
public:

    FinanceAccount(QString name, float startSum){
        this->name  = name;
        this->startSum = startSum;
        totalCount = startSum;
        this->transactionList = *(new QVector<Transaction>);
    }
    FinanceAccount(const FinanceAccount& other){
        this->totalCount = other.totalCount;
        this->name = other.name;
        this->startSum = other.startSum;
        this->financialGoal = other.financialGoal;
        this ->transactionList = other.transactionList;
    }

    FinanceAccount()
    {
    }

    ~FinanceAccount(){
    }


    FinanceAccount& addTransaction(Transaction &new_transaction){

        transactionList.push_back(new_transaction);
        return *this;
    }

    FinanceAccount& setTransactions(QVector<Transaction> &data) {
        this->transactionList = data;
        return *this;
    }

    const QVector<Transaction>& copyGetTransactions() const {
        return transactionList;
    }

    QVector<Transaction>&  getTransactions(){
        return transactionList;
    }


    FinanceAccount& setStartSum(float sum){
        startSum = sum;
        return *this;
    }

    const float getStartSum(){
        return startSum;
    }

    const QString & getName(){
        return name;
    }

    FinanceAccount& setName(QString &name){
        this->name = name;
        return *this;
    }

    const double getTotalCount(){
        return totalCount;
    }

    FinanceAccount& setTotalCount(float sum){
        totalCount += sum;
        return *this;
    }

    FinanceAccount& changeTotalCount(float sum){
        totalCount = sum;
        return *this;
    }


    const Goal& getGoal(){
        return financialGoal;
    }

    FinanceAccount& setGoal(QString name, float sum, float prog){
        this->financialGoal.setName(name);
        this->financialGoal.setSum(sum);
        this->financialGoal.changeProgress(prog);
        return *this;
    }

    FinanceAccount& setGoalObj(const Goal& other){
        this->financialGoal.setName(other.getName());
        this->financialGoal.setSum(other.getSum());
        this->financialGoal.setProgress(other.getProgress());
        return *this;
    }

    FinanceAccount& setGoalProgress(float prog){
        this->financialGoal.changeProgress(prog);
        return *this;
    }


    bool operator==(const FinanceAccount& other) const {
       return
           this->name == other.name &&
           this->totalCount == other.totalCount &&
           this->transactionList == other.transactionList &&
           this->startSum == other.startSum &&
        this->financialGoal == other.financialGoal;
    }

    FinanceAccount& operator+(const FinanceAccount& other){
        this-> name+= " - " + other.name;
        this->totalCount += other.totalCount;
        for(int i = 0; i < other.transactionList.size(); i++ ){
            this->transactionList.push_back(other.transactionList[i]);
        }
        return *this;
    }

    FinanceAccount& operator=(const FinanceAccount& other){

        qDebug() << "operator= fin";
        this-> name = other.name;
        this->totalCount = other.totalCount;
        this->transactionList = other.transactionList;
        this->startSum = other.startSum;
        this->financialGoal = other.financialGoal;

        return *this;
    }

    // increment prefix
    FinanceAccount& operator++() {
        ++totalCount;
        return *this;
    }

    //increment postfix
    FinanceAccount& operator++(int i) {
        this->totalCount++;
        return *this;
    }

    //decrement prefix
    FinanceAccount& operator--(){
        --totalCount;
        return *this;
    }


    //decrement postfix
    FinanceAccount& operator--(int i) {
        this->totalCount--;
        return *this;
    }

    Transaction& operator[](int i) {

        if (i >= 0 && i < this->getTransactions().size()) {
            return this->getTransactions()[i];
        } else {
            qDebug() << "Похибка у роботі оператора індексації";
            return this->getTransactions().front();
        }
    }

    friend QDebug operator<<(QDebug stream, FinanceAccount& acc){

        stream << "Finance account name: " << acc.getName() << "\n";
        stream << "Finance account total count: " << acc.getTotalCount() << "\n";
        stream << "Transactions list: " << "\n";
        for (int i = 0; i < acc.getTransactions().size(); i++) {
            stream << "Transaction name: " << acc.transactionList[i].getName() << "; sum: " << acc.transactionList[i].getSum() << ";" << "\n";
        }
        return stream;
    }


//     friend QDebug operator>>(QDebug stream, FinanceAccount& acc){
//         qDebug() << "Enter Finance account name and total count: ";
//         stream >> acc.name;
//         stream >> acc.totalCount;

//         return stream;
//     }


    FinanceAccount& operator() (QString& name, double& sum, QVector<Transaction> trList) {
        this->setName(name);
        this->changeTotalCount(sum);
        this->setTransactions(trList);
        return *this;
    }


    void print() const{
        qDebug() << "FinanceAccount: " << this->name << " - " << this->totalCount;
    }

};




#endif // FINANCEACCOUNT_H
