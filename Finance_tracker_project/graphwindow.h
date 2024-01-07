#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QWidget>
#include "Graph.h"


namespace Ui {
class GraphWindow;
}

class GraphWindow : public QWidget
{
    Q_OBJECT
private:
    //Graph<float> result;
    QVector<FinanceAccount> list;
    int index;

public:
    explicit GraphWindow(QWidget *parent = nullptr);
    ~GraphWindow();

private:
    Ui::GraphWindow *ui;
public slots:
    void setAccList(QVector<FinanceAccount>& data);
signals:
    void getGraph(Graph<float>& a);


private slots:
    void on_comboBox_choseFinAcc_activated(int index);
    void setGraph(Graph<float>& a);
};

#endif // GRAPHWINDOW_H
