#ifndef GOAL_H
#define GOAL_H
#include <QMainWindow>
#include <QApplication>


class Goal {

protected:
    QString name;
    float sum;
    float progress;

public:

    Goal(){
    }
    Goal(QString &name, QString &type, float sum, float progress){
        this->name = name;
        this->sum = sum;
        this->progress = progress;
    }
    Goal(const Goal& other){
        this->name = other.name;
        this->sum = other.sum;
        this->progress = other.progress;

    }
    ~Goal(){
        // qDebug() << "Destructing base goal";
    }

    Goal& changeProgress(const float progress){
        this->progress = progress;
        return *this;
    }

    const QString getName()const{
        return name;
    }

    Goal& setName(QString &name){
        this->name = name;
        return *this;
    }

    const float getSum()const{
        return sum;
    }

    const float getProgress() const {
        return progress;
    }

    Goal& setSum(float sum){
        this->sum = sum;
         return *this;
    }


    operator float()const{
         return static_cast<float>(sum);
    }

    Goal &operator=(int i)
    {
         sum = i;
         if (name.isEmpty())
         {
             name = "Default name";
         }
         return *this;
    }

     void print() const {
        qDebug() << "Goal name: " << this->getName() << "; sum: " << this->getSum() << "; progress: " << this->getProgress();
    }


};

#endif // GOAL_H
