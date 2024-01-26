#include "finaccountwindow.h"
#include "ui_finaccountwindow.h"
#include <algorithm>

FinAccountWindow::FinAccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FinAccountWindow)
{
    ui->setupUi(this);
    ui->groupBox_newTransaction->hide();


}

FinAccountWindow::~FinAccountWindow()
{
    delete ui;
}

void FinAccountWindow::getAccountsList(QVector<FinanceAccount>& data)
{
    this->list = data;
 qDebug() << "Відправлення !!!";

    data[this->index].getGoal().print();
    list[this->index].getGoal().print();

    if(list[index].getGoal().getSum()!= 0){
        ui->label_nameGoal->setText(list[index].getGoal().getName());
        ui->label_sumGoal->setText(QString::number(list[index].getGoal().getSum()));
        ui->label_progressGoal->setText(QString::number(list[index].getGoal().getProgress(), 'f', 2) + "%");
    }

    this->setWindowTitle(list[index].getName());
}

void FinAccountWindow::updateHistory() {

    ui->label_nameAccount->setText(this->list[this->index].getName());
    ui->label_totalCount->setText(QString::number(this->list[this->index].getTotalCount(), 'f', 1));

    for (int j = 0; j < this->list[this->index].getTransactions().size(); j++) {
        Transaction tr = this->list[this->index].getTransactions()[j];

        if(tr.getSum() > 0)ui->listWidget->addItem(tr.getName() + "  :  +" + QString::number(tr.getSum()));
        else ui->listWidget->addItem(tr.getName() + "  :  " + QString::number(tr.getSum()));
    }

}

void FinAccountWindow::on_pushButton_back_clicked()
{

    /*слот кнопки "повернутись у головне меню", відсилає сигланл у слот mainWindow завдяки якому
     * закривається саме вікно рахунку, а не уся программа*/
    ui->label_nameGoal->setText("");
    ui->label_sumGoal->setText("");
    ui->label_progressGoal->setText("");

    ui->groupBox_newTransaction->hide();

  emit signalBack();
}

void FinAccountWindow::setIndex(int i){
    ui->listWidget->clear();
    this->index = i;
    if (this->index != 0) qDebug() << "index marker !!!";


}
void FinAccountWindow::receiveFinanceAccountList(QVector<FinanceAccount> &list)
{
    ui->label_nameAccount->setText(list[this->index].getName());
    ui->label_totalCount->setText( QString::number ( list[this->index].getTotalCount(), 'f', 1));




}

void FinAccountWindow::on_pushButton_clicked()
{
  ui->lineEdit_nameTransaction->setText("");
  ui->lineEdit_sumTransaction->setText("");

  ui->groupBox_newTransaction->show();
  ui->pushButton_saveTransaction->setText("Зберегти транзакцію");
  ui->lineEdit_nameTransaction->setPlaceholderText("Не обов'язково");
  statusGroupBox = 1;
}

void FinAccountWindow::on_pushButton_2_clicked()
{

  ui->lineEdit_nameTransaction->setText("");
  ui->lineEdit_sumTransaction->setText("");

  ui->groupBox_newTransaction->show();
  ui->pushButton_saveTransaction->setText("Зберегти ціль");
  ui->lineEdit_nameTransaction->setPlaceholderText("Обов'язково");

  statusGroupBox = 2;

}


void FinAccountWindow::on_pushButton_saveTransaction_clicked()
{
  if(statusGroupBox == 1){
        float check = ui->lineEdit_sumTransaction->text().toFloat();

        if(check!= 0){
            Transaction newTr = Transaction(ui->lineEdit_nameTransaction->text(), ui->lineEdit_sumTransaction->text().toFloat());
            this->list[this->index].addTransaction(newTr);

            this->list[this->index].setTotalCount(newTr.getSum());

            if(newTr.getSum()> 0)ui->listWidget->addItem(newTr.getName() + "  :  +" + QString::number(newTr.getSum()));
            else ui->listWidget->addItem(newTr.getName() + "  :  " + QString::number(newTr.getSum()));
            ui->label_totalCount->setText(QString::number(this->list[this->index].getTotalCount(), 'f', 1));
            emit sendAccData(this->list);

            ui->groupBox_newTransaction->hide();
            ui->lineEdit_nameTransaction->setText("");
            ui->lineEdit_sumTransaction->setText("");

            ui->label_statusTransaction->setText("");
            statusGroupBox = 0;

            updateGoal();
        }else
            ui->label_statusTransaction->setText("Дані введено не коректно!");
  }if(statusGroupBox == 2){
        float check = ui->lineEdit_sumTransaction->text().toFloat();

        if(check!= 0 && !ui->lineEdit_nameTransaction->text().isEmpty()){
            list[index].setGoal(ui->lineEdit_nameTransaction->text(), ui->lineEdit_sumTransaction->text().toFloat(), list[index].getTotalCount());

            ui->label_nameGoal->setText(list[index].getGoal().getName());
            ui->label_sumGoal->setText(QString::number(list[index].getGoal().getSum()));
            ui->label_progressGoal->setText(QString::number(list[index].getGoal().getProgress(), 'f', 2) + "%");

            ui->groupBox_newTransaction->hide();
            ui->lineEdit_nameTransaction->setText("");
            ui->lineEdit_sumTransaction->setText("");

            ui->label_statusTransaction->setText("");
            statusGroupBox = 0;

        }else
            ui->label_statusTransaction->setText("Дані введено не коректно!");
  }


}


void FinAccountWindow::updateGoal(){
    if(list[index].getGoal().getSum() != 0){
        list[index].setGoalProgress(list[index].getTotalCount());
        ui->label_progressGoal->setText(QString::number(list[index].getGoal().getProgress(), 'f', 2) + "%");

    }
}


