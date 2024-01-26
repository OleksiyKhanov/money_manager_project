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

public:
    int index = 0;
    int statusGroupBox = 0;

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

public slots:
    void receiveFinanceAccountList(QVector<FinanceAccount> &list);
    void setIndex(int i);
    // void createTrasaction(QVector<FinanceAccount> &list);
    void requestAccountsList(void) {
        emit reqAccData();
    }

    void getAccountsList(QVector<FinanceAccount>& data);


    void updateAccountList(QVector<FinanceAccount>& data) {
        emit sendAccData(data);
    }


private:
    Ui::FinAccountWindow *ui;

protected:
    void showEvent(QShowEvent *event) override {
        // FinAccountWindow::showEvent(event);
        emit reqAccData();

        this->updateHistory();

    }

    void hideEvent(QHideEvent *event) override {
        emit sendAccData(this->list);
         emit sendAccDataForGoal(this->list, index);
    }

signals:
    void signalBack();
    // void createSignal();
    void reqAccData(void);
    void sendAccData(QVector<FinanceAccount>& data);
     void sendAccDataForGoal(QVector<FinanceAccount>& data, int index);
};

#endif // FINACCOUNTWINDOW_H
