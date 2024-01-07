#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QMainWindow>
#include <QApplication>


class Transaction {

    QString name;
    QString category;
    float sum;
    QString date;
    QString paymentMethod;
    QString currency;
    QString type;

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
        this->category = other.category;
        this->sum = other.sum;
        this->date = other.date;
        this->paymentMethod = other.paymentMethod;
        this->currency = other.currency;
        this->type = other.type;

    }


    const QString getDate() const{

        return date;
    }
   Transaction& setDate(const QString &date){
        this->date = date;
        return *this;
    }

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

    const QString getCategory() const{
        return category;
    }
    Transaction& setCategory(const QString &category){
        this ->category = category;
        return *this;
    }

    const QString getPaymentMethod() const{
        return paymentMethod;
    }
    Transaction& setPaymentMethod(const QString &paymentMethod){
        this->paymentMethod = paymentMethod;
        return *this;
    }

    const QString getCurrency() const{
        return currency;
    }
    Transaction& setCurrency(const QString &currency){
        this->currency = currency;
        return *this;
    }

    const QString getType() const{
        return type;
    }
    Transaction& setType(const QString &type){
        this->type = type;
        return *this;
    }

    bool operator==(const Transaction& other)const{
        return this->name == other.name &&
                this->category == other.category &&
                this->sum == other.sum &&
                this->date == other.date &&
                this->paymentMethod == other.paymentMethod &&
                this->currency == other.currency &&
                    this->type == other.type;
    }


    bool operator!=(const Transaction & other)const{
        return this->name != other.name ||
               this->category != other.category ||
               this->sum != other.sum ||
               this->date != other.date ||
               this->paymentMethod != other.paymentMethod ||
               this->currency != other.currency ||
               this->type != other.type;
    }



    void print() const{
        qDebug() << "Transaction: " << this->name << " - " << this->sum << "\n";
    }

};

#endif // TRANSACTION_H
