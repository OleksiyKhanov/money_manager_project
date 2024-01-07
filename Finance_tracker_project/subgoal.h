#ifndef SUBGOAL_H
#define SUBGOAL_H

#include "Goal.h"


class SubGoal : public Goal
{
    QString subName;
    float subSum;
public:

    static int totalCount;

    SubGoal() {
        totalCount++;
    }

    SubGoal(QString subname, float subsum) {
        // this->name = goal.getName();
        // this->progress = goal.getProgress();
        // this->sum = goal.getSum();
        // this->type = goal.getType();
        this->subName = subname;
        this->subSum = subsum;
        totalCount++;
    }

    SubGoal(const SubGoal& other) {
        // this->name = other.name;
        // this->progress = other.progress;
        // this->sum = other.sum;
        // this->type = other.type;
        this->subName = other.subName;
        this->subSum = other.subSum;
        totalCount++;
    }


    ~SubGoal() {
        // qDebug() << "Destructing subgoal";
    }

    const QString getSubName() const {
        return this->subName;
    }

    const float getSubSum() const {
        return this->subSum;
    }

    void print() const {
        qDebug() << "Subgoal info";
        // qDebug() << "Name: " << this->getSubName() << "; sum: " << this->getSubSum();
    }

    static void printTotalCount() {
        qDebug() << "number of subgoals: " << totalCount;
    }

};

#endif // SUBGOAL_H
