#ifndef PERSONWINDOW_H
#define PERSONWINDOW_H

#include <QWidget>
#include "mainwindow.h"


namespace Ui {
class personwindow;
}

class personwindow : public QWidget
{
    Q_OBJECT

public:
    explicit personwindow(QWidget *parent = 0);
    ~personwindow();
    void showData();
    void setFatherWindow(MainWindow *father);

private slots:
    void on_pushButton_clicked();

private:
    MainWindow *parent;
    Ui::personwindow *ui;
    Person* person;
    bool flag;
};

#endif // PERSONWINDOW_H
