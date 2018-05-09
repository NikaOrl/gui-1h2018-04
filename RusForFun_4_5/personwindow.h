#ifndef PERSONWINDOW_H
#define PERSONWINDOW_H

#include "ui_personwindow.h"
#include "mainwindow.h"
#include "person.h"
#include <QWidget>
#include <QFileDialog>
#include <QPixmap>
#include <QFile>
#include <QTextStream> // Подключаем класс QTextStream

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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    MainWindow *parent;
    Ui::personwindow *ui;
    Person* person;
    bool flag;
};

#endif // PERSONWINDOW_H
