#include "graphwindow.h"
#include "ui_graphwindow.h"

GraphWindow::GraphWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Звіт");
    connect(this, &GraphWindow::getGraph, this, &GraphWindow::setGraph);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}

void GraphWindow::setAccList(QVector<FinanceAccount>& data){


    ui->label_finalSum->setText("");
    ui->label_finalPlus->setText("");
    ui->label_finalMinus->setText("");
    ui->listWidget_transactions->clear();
    list.clear();

    std::copy(data.begin(), data.end(), std::back_inserter(list));

    ui->comboBox_choseFinAcc->clear();

    for(int i = 0; i<list.size(); i++){
          ui->comboBox_choseFinAcc->addItem(list[i].getName());
      }

}

void GraphWindow::on_comboBox_choseFinAcc_activated(int index)
{

      float tempPlus = 0;
      float tempMinus = 0;
      float tempFinal = list[index].getTotalCount();

      for(int i = 0; i < list[index].getTransactions().size(); i++){
          if(list[index].getTransactions()[i].getSum() > 0)tempPlus += list[index].getTransactions()[i].getSum();
      }

      for(int i = 0; i < list[index].getTransactions().size(); i++){
          if(list[index].getTransactions()[i].getSum() < 0)tempMinus += list[index].getTransactions()[i].getSum();
      }

      this->index = index;
//      a.setPlus(tempPlus);
//      a.setMinus(tempMinus);
//      a.setFinaSum(tempFinal);
      Graph<float> a(tempFinal,tempPlus, tempMinus);
      a.print();

    emit getGraph(a);
}


void GraphWindow::setGraph(Graph<float>& a){

    ui->label_finalSum->setText(QString::number (a.getFinalSum(), 'f', 1));
    ui->label_finalPlus->setText(QString::number (a.getPlus(), 'f', 1));
    ui->label_finalMinus->setText(QString::number (a.getMinus(), 'f', 1));

    ui->listWidget_transactions->clear();
   for(int i = 0; i < list[index].copyGetTransactions().size(); i++){
          ui->listWidget_transactions->addItem(list[index].getTransactions()[i].getName() + " : " + QString::number(list[index].getTransactions()[i].getSum()));
    }

}

