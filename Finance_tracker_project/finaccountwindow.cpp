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
//    this->list.assign(data.begin(), data.end());

    if(list[getIndex()].getGoal().getSum()!= 0){
        ui->label_nameGoal->setText(list[getIndex()].getGoal().getName());
        ui->label_sumGoal->setText(QString::number(list[getIndex()].getGoal().getSum()));
        ui->label_progressGoal->setText(QString::number(list[getIndex()].getGoal().getProgress(), 'f', 2) + "%");
    }

    this->setWindowTitle("Рахунок – " + list[getIndex()].getName());
}

void FinAccountWindow::updateHistory() {

    //ui->label_nameAccount->setText(this->list[this->index].getName());
    ui->label_totalCount->setText(QString::number(this->list[getIndex()].getTotalCount(), 'f', 1));

    for (int j = 0; j < this->list[getIndex()].getTransactions().size(); j++) {
        Transaction tr = this->list[getIndex()].getTransactions()[j];

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

void FinAccountWindow::setIndexToOpen(int i){
    ui->listWidget->clear();
    setIndex(i);
    //if (getIndex() != 0) qDebug() << "index marker !!!";


}
void FinAccountWindow::receiveFinanceAccountList(QVector<FinanceAccount> &list)
{
    //ui->label_nameAccount->setText(list[this->index].getName());
    ui->label_totalCount->setText( QString::number ( list[getIndex()].getTotalCount(), 'f', 1));
}

void FinAccountWindow::on_pushButton_clicked()
{
  ui->lineEdit_nameTransaction->setText("");
  ui->lineEdit_sumTransaction->setText("");

  ui->groupBox_newTransaction->show();
  ui->pushButton_saveTransaction->setText("Зберегти транзакцію");
  ui->lineEdit_nameTransaction->setPlaceholderText("Назва (не обов'язково)");
  ui->lineEdit_sumTransaction ->setPlaceholderText("Сума транзакції");

  setStatusGroupBox(1);
}

void FinAccountWindow::on_pushButton_2_clicked()
{

  ui->lineEdit_nameTransaction->setText("");
  ui->lineEdit_sumTransaction->setText("");

  ui->groupBox_newTransaction->show();
  ui->pushButton_saveTransaction->setText("Зберегти ціль");
  ui->lineEdit_nameTransaction->setPlaceholderText("Назва");
  ui->lineEdit_sumTransaction ->setPlaceholderText("Цільова сума");

   setStatusGroupBox(2);

}


void FinAccountWindow::on_pushButton_saveTransaction_clicked()
{
   if(getStatusGroupBox() == 1){
        float check = ui->lineEdit_sumTransaction->text().toFloat();

        if(check!= 0){
            Transaction newTr = Transaction(ui->lineEdit_nameTransaction->text(), ui->lineEdit_sumTransaction->text().toFloat());
            this->list[getIndex()].addTransaction(newTr);

            this->list[getIndex()].setTotalCount(newTr.getSum());

            if(newTr.getSum()> 0)ui->listWidget->addItem(newTr.getName() + "  :  +" + QString::number(newTr.getSum()));
            else ui->listWidget->addItem(newTr.getName() + "  :  " + QString::number(newTr.getSum()));
            ui->label_totalCount->setText(QString::number(this->list[getIndex()].getTotalCount(), 'f', 1));

            ui->groupBox_newTransaction->hide();
            ui->lineEdit_nameTransaction->setText("");
            ui->lineEdit_sumTransaction->setText("");

            ui->label_statusTransaction->setText("");
              setStatusGroupBox(0);

            updateGoal();
        }else
            ui->label_statusTransaction->setText("Дані введено не коректно!");
  }if(getStatusGroupBox() == 2){
        float check = ui->lineEdit_sumTransaction->text().toFloat();

        if(check!= 0 && !ui->lineEdit_nameTransaction->text().isEmpty()){
            list[getIndex()].setGoal(ui->lineEdit_nameTransaction->text(), ui->lineEdit_sumTransaction->text().toFloat(), list[getIndex()].getTotalCount());

            ui->label_nameGoal->setText(list[getIndex()].getGoal().getName());
            ui->label_sumGoal->setText(QString::number(list[getIndex()].getGoal().getSum()));
            ui->label_progressGoal->setText(QString::number(list[getIndex()].getGoal().getProgress(), 'f', 2) + "%");

            ui->groupBox_newTransaction->hide();
            ui->lineEdit_nameTransaction->setText("");
            ui->lineEdit_sumTransaction->setText("");

            ui->label_statusTransaction->setText("");
              setStatusGroupBox(0);

        }else
            ui->label_statusTransaction->setText("Дані введено не коректно!");
  }


}


void FinAccountWindow::updateGoal(){
    if(list[getIndex()].getGoal().getSum() != 0){
        list[getIndex()].setGoalProgress(list[getIndex()].getTotalCount());
        ui->label_progressGoal->setText(QString::number(list[getIndex()].getGoal().getProgress(), 'f', 2) + "%");

    }
}


void FinAccountWindow::on_pushButton_deleteAccount_clicked()
{
    list.remove(getIndex());
    on_pushButton_back_clicked();
      emit deleteAccountGet(getIndex());

}

