#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QMainWindow>
#include <QApplication>


class Transaction {

    QString name;
    float sum;
//    QString date;


public:
    Transaction(QString name, float sum){
        this->sum = sum;
        this->name = name;
    }

    Transaction(){
    }

    ~Transaction(){
    }

    Transaction(const Transaction& other){
        this->name = other.name;
        this->sum = other.sum;
       // this->date = other.date;
    }


//    const QString getDate() const{

//        return date;
//    }
//   Transaction& setDate(const QString &date){
//        this->date = date;
//        return *this;
//    }

    const QString getName() {
        return this->name;
    }
    Transaction& setName(const QString &name){
        this->name = name;
        return *this;
    }

    const float getSum() {
        return this->sum;
    };
    Transaction& setSum(float sum){
        this->sum = sum;
        return *this;
    }

    bool operator==(const Transaction& other)const{
        return this->name == other.name &&
               this->sum == other.sum;
               // this->date == other.date &&
    }


    bool operator!=(const Transaction & other)const{
        return this->name != other.name ||
               this->sum != other.sum;
          //     this->date != other.date ||
    }



    void print() const{
        qDebug() << "Transaction: " << this->name << " - " << this->sum << "\n";
    }

};

#endif // TRANSACTION_H

