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

  emit signalBack();
}

void FinAccountWindow::setIndex(int i){
    ui->listWidget->clear();
    this->index = i;

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

}




void FinAccountWindow::on_pushButton_saveTransaction_clicked()
{
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
    }else
        ui->label_statusTransaction->setText("Дані введено не коректно!");


}

