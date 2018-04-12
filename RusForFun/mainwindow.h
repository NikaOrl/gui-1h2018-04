#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "person.h"
//#include "personwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void set_user(Person *person);
    Ui::MainWindow *ui;
    void addPerson(Person* person);
    Person* user;

private:


private slots:
    void on_pushButton_5_clicked();
    void showUser(Person* user);
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
