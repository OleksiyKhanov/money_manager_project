#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    MainWindow w;
    w.show();
    return a.exec();
}
/*нужно перекинуть создание объекта гоал в FinanceAccount*/
// далі слід забеспечити запис цілей, можливість видалення аккаунтів(та мейбі транзакцій) та попрацювати над візуалом

// оскільки індекс передавався раніше за вектор аккаунтів, то я не міг виводити данні при відкритті вікна
// паралельно з отриманням індексу бо локальний вектор був ще пустий,
// це необхідно робити паралельно з отриманням вектору аккаунтів, а на той
// момент я не міг цього зробити, бо ця функція була прописана у хеддері,
// звідки я не мав доступу до інтерфейсу, тому я переніс відповідний слот у файл срр


// Goal thisGoal;
//            thisGoal.setName(ui->lineEdit_nameTransaction->text());
//            thisGoal.setSum(ui->lineEdit_sumTransaction->text().toFloat());
//            thisGoal.changeProgress(list[index].getTotalCount());

// треба інкапсулювати публічні змінні у фінаккаунтвіндоу
// повидаляти виводи у консоль


