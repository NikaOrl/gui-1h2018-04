#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "person.h"
#include "levelwindow.h"

#include <QMainWindow>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QIcon>

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
    void changeLevel();
    Person* user;

private:


private slots:
    void on_pushButton_5_clicked();
    void showUser(Person* user);
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H
