#include "newfinaccount.h"
#include "ui_newfinaccount.h"
#include "mainwindow.h"
#include "FinanceAccount.h"

newFinAccount::newFinAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newFinAccount)
{
    ui->setupUi(this);

}

newFinAccount::~newFinAccount()
{
    delete ui;
}

void newFinAccount::on_pushButton_create_clicked()
{
 //слот створенян нового рахунку
    this->requestAccountData();


    if(!ui->lineEdit_name->text().isEmpty() && !ui->lineEdit_startSum->text().isEmpty())
    {
        float check = ui->lineEdit_startSum->text().toFloat();
        if(check != 0 || ui->lineEdit_startSum->text() == "0")
        {
            FinanceAccount newAcc = FinanceAccount(ui->lineEdit_name->text(), ui->lineEdit_startSum->text().toFloat());
            // this->accData.push_back(newAcc);

            // qDebug() << "processed data: ";

            // for(int i = 0; i < this->accData.size(); i++) {
            //     this->accData[i].print();

            //     for (int j = 0; j < this->accData[i].getTransactions().size(); j++) {
            //         this->accData[i].getTransactions()[j].print();
            //     }
            // }
            this->ToAddAccountData(newAcc);
            this->updateAccNameList();
            // this->sendAccountData(this->accData);


            ui->label_finish->setText("Рахунок створено!");
            ui->pushButton_create->setEnabled(false);
        }if(check == 0 && ui->lineEdit_startSum->text() != "0"){
             ui->label_finish->setText("Дані введено не коректно!");
        }

    }else{
        ui->label_finish->setText("Дані не введено!");
    }


}


void newFinAccount::on_pushButton_cancel_clicked()
{



    ui->label_finish->setText("");
    ui->pushButton_create->setEnabled(true);
    ui->lineEdit_name->setText("");
    ui->lineEdit_startSum->setText("");

    this->close();
}

