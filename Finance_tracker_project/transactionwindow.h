#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H
#include "FinanceAccount.h"

#include <QWidget>

namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionWindow(QWidget *parent = nullptr);
    ~TransactionWindow();

private:
    Ui::TransactionWindow *ui;
public slots:
    void newTransaction(QVector<FinanceAccount> &list);
};

#endif // TRANSACTIONWINDOW_H
