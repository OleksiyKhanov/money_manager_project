#ifndef FINACCOUNTWINDOW_H
#define FINACCOUNTWINDOW_H
#include "FinanceAccount.h"
#include <QMainWindow>
#include <QShowEvent>
namespace Ui {
class FinAccountWindow;
}

class FinAccountWindow : public QMainWindow
{
    Q_OBJECT

public:
    int index;
    QVector<FinanceAccount> list;
    explicit FinAccountWindow(QWidget *parent = nullptr);
    ~FinAccountWindow();
    void updateHistory();

private slots:
    void on_pushButton_back_clicked();
    void on_pushButton_clicked();

    void on_pushButton_saveTransaction_clicked();

public slots:
    void receiveFinanceAccountList(QVector<FinanceAccount> &list);
    void setIndex(int i);
    // void createTrasaction(QVector<FinanceAccount> &list);
    void requestAccountsList(void) {
        emit reqAccData();
    }

    void getAccountsList(QVector<FinanceAccount>& data) {
        this->list = data;
        for (int i = 0; i < data.size(); i++) {
            this->list[i].setTransactions(data[i].getTransactions());
        }
    }

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
    }

signals:
    void signalBack();
    // void createSignal();
    void reqAccData(void);
    void sendAccData(QVector<FinanceAccount>& data);
};

#endif // FINACCOUNTWINDOW_H
