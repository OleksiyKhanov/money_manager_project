#ifndef FINACCOUNTWINDOW_H
#define FINACCOUNTWINDOW_H
#include "FinanceAccount.h"
#include <QMainWindow>
#include <QShowEvent>
#include "Goal.h"

namespace Ui {
class FinAccountWindow;
}

class FinAccountWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::FinAccountWindow *ui;
      int index = 0;
      int statusGroupBox = 0;

public:

      void setStatusGroupBox(int value){
          this->statusGroupBox = value;
      }
      const int getStatusGroupBox(){
          return statusGroupBox;
      }


    void setIndex(int index){
        this->index = index;
    }

    const int getIndex(){
        return this->index;
    }
    QVector<FinanceAccount> list;
    explicit FinAccountWindow(QWidget *parent = nullptr);
    ~FinAccountWindow();
    void updateHistory();
    void updateGoal();

private slots:
    void on_pushButton_back_clicked();
    void on_pushButton_clicked();
    void on_pushButton_saveTransaction_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_deleteAccount_clicked();

public slots:
    void receiveFinanceAccountList(QVector<FinanceAccount> &list);
    void setIndexToOpen(int i);
    // void createTrasaction(QVector<FinanceAccount> &list);
    void requestAccountsList(void) {
        emit reqAccData();
    }

    void getAccountsList(QVector<FinanceAccount>& data);

protected:
    void showEvent(QShowEvent *event) override {
        // FinAccountWindow::showEvent(event);
        emit reqAccData();

        this->updateHistory();

    }

    void hideEvent(QHideEvent *event) override {
         emit sendAccData(this->list, index);
    }

signals:
    void deleteAccountGet(int index);
    void signalBack();
    // void createSignal();
    void reqAccData(void);
     void sendAccData(QVector<FinanceAccount>& data, int index);
};

#endif // FINACCOUNTWINDOW_H
