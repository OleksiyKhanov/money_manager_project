#ifndef GRAPH_H
#define GRAPH_H
#include "FinanceAccount.h"

template<typename T1, typename U1 = QString>
 class Graph{
    T1 plus;
    T1 minus;
    T1 finalSum;
    U1 finalGoal;

  public:

Graph(U1 finalGoal, T1 plus, T1 minus){
 this->finalGoal = finalGoal;
 qDebug() << "Фінальна ціль: " << finalGoal;

 this->plus = plus;
 this->minus = minus;
 qDebug() << "Прибуток:" << plus << "Збитки: " << minus;
}

    Graph(){
    }
    Graph(const Graph& other){
        this->plus = other.plus;
        this->minus = other.minus;
        this->finalSum = other.finalSum;
    }

    Graph( T1 finalSum, T1 plus, T1 minus)
    {   this->plus = plus;
        this->minus = minus;
        this->finalSum = finalSum;
    }

      Graph& setPlus(T1 plus){
        this->plus = plus;
        return *this;
    }


    const T1 getPlus(){
        return plus;
    }


    Graph& setMinus(T1 minus){
        this->minus = minus;
        return *this;
    }


        const  T1 getMinus(){
        return minus;
    }

    Graph& setFinaSum(T1 finalSum){
        this->finalSum = finalSum;
        return *this;
    }


    const T1 getFinalSum(){
        return finalSum;
    }

    void print()const{
        qDebug() << "Остаточна сума:" << finalSum << "  Прибуток:" << plus << "  Збитки:" << minus;
    }

    ~Graph(){
    }


};
#endif // GRAPH_H
