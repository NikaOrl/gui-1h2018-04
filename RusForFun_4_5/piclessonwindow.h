#ifndef PICLESSONWINDOW_H
#define PICLESSONWINDOW_H

#include <QWidget>
#include "mainwindow.h"
#include <QDateTime>

namespace Ui {
class piclessonwindow;
}

class piclessonwindow : public QWidget
{
    Q_OBJECT

public:
    explicit piclessonwindow(QWidget *parent = 0);
    ~piclessonwindow();
    void setFatherWindow(MainWindow *father);

private slots:
    void on_pushButton_clicked();
    void changedNum();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::piclessonwindow *ui;
    MainWindow *parent;
    int numb;
};

#endif // PICLESSONWINDOW_H
