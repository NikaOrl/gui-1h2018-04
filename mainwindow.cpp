#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    using namespace std;
    ui->setupUi(this);

    QFile file("D:\\user.txt");
    QString line = "";
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        line = "error";
        ui->label_2->setText(line);
    }
    else {
        QTextStream in(&file);
        line = in.readLine();
        ui->label_2->setText(line);
        line = in.readLine();
        ui->label_3->setText(line);
        line = in.readLine();
        ui->label_7->setText(line);
        line = in.readLine();
        ui->label_8->setText(line);
        line = in.readLine();
        ui->label_9->setText(line);
    }

    QPixmap pixmap("D:\\Potap.jpg");
    int w = ui->label_11->width();
    int h = ui->label_11->height();
    ui->label_11->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pixBal("D:\\balalaika.png");
    int w2 = ui->label_12->width();
    int h2 = ui->label_12->height();
    ui->label_12->setPixmap(pixBal.scaled(w2, h2, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
