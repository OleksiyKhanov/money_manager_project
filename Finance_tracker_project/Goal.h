#ifndef GOAL_H
#define GOAL_H
#include <QMainWindow>
#include <QApplication>


class Goal {

protected:
    QString name;
    float sum = 0;
    float progress = 0;

public:

    Goal(){
    }
    Goal(QString &name, float sum){
        this->name = name;
        this->sum = sum;
 //       this->progress = progress;
    }
    Goal(const Goal& other){
        this->name = other.name;
        this->sum = other.sum;
        this->progress = other.progress;

    }
    ~Goal(){
        // qDebug() << "Destructing base goal";
    }

Goal& changeProgress(const float total){

        qDebug() << "changeProgress: "<<this->sum << total;
        float temp = this->sum / 100;

        this->progress = total/temp;
//        return this->progress;
        return *this;
    }
Goal& setProgress(const float total){
        this->progress = total;
        return *this;
}

    const QString getName()const{
        return name;
    }

    Goal& setName(const QString name){
        this->name = name;
        return *this;
    }

    const float getSum()const{
        return sum;
    }

    const float getProgress() const {
        return progress;
    }

    Goal& setSum(const float sum){
        this->sum = sum;
         return *this;
    }
    Goal& operator= (const Goal& other){

         this->name = other.name;
         this->sum = other.sum;
         this->progress = other.progress;

         qDebug() << " operator= goal";
         return *this;
    }

   bool operator ==(const Goal &other){
         return this->name == other.name &&
                this->sum == other.sum &&
                this->progress == other.progress;
    }

    operator float()const{
         return static_cast<float>(sum);
    }

//    Goal &operator=(int i)
//    {
//         sum = i;
//         if (name.isEmpty())
//         {
//             name = "Default name";
//         }
//         return *this;
//    }

     void print() const {
        qDebug() << "Goal name: " << this->getName() << "; sum: " << this->getSum() << "; progress: " << this->getProgress();
    }


};

#endif // GOAL_H
