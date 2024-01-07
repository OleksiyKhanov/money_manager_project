#ifndef NEWFINACCOUNT_H
#define NEWFINACCOUNT_H
#include <QDialog>
#include "FinanceAccount.h"

namespace Ui {
class newFinAccount;
}

class newFinAccount : public QDialog
{
    Q_OBJECT

public:
    explicit newFinAccount(QWidget *parent = nullptr);
    QVector<FinanceAccount> accData;
    ~newFinAccount();


private slots:
    void on_pushButton_create_clicked();

    void on_pushButton_cancel_clicked();
public slots:

    void sendAccountData(QVector<FinanceAccount>& data) {
      emit accountData(data);
    }
    void ToAddAccountData(FinanceAccount item) {
        emit sendToAddAccountData(item);
    }
    void requestAccountData(void) {
        emit reqAccountData();
    }

    void updateAccNameList(void) {
        emit updNameList();
    }

private:
    Ui::newFinAccount *ui;

signals:
    void accountData(QVector<FinanceAccount>& data);
    void sendToAddAccountData(FinanceAccount& item);
    void reqAccountData(void);
    void updNameList(void);

};

#endif // NEWFINACCOUNT_H
