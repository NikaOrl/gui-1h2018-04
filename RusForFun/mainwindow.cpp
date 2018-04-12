#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include "person.h"
#include "personwindow.h"
#include "textlessonwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    user = new Person();
    showUser(user);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showUser(Person* user){
    ui->label_2->setText(user->getName());
    ui->label_3->setText(user->getSurname());
    ui->label_7->setText(user->getPlace());
    ui->label_8->setText(user->getSex());
    QString date = user->getMonthB() + " " + QString::number(user->getDayB()) + ", " + QString::number(user->getYearB());
    ui->label_9->setText(date);

    QPixmap pixmap(user->getPhotoURL());
    int w = ui->label_11->width();
    int h = ui->label_11->height();
    ui->label_11->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pixBal("balalaika.png");
    int w2 = ui->label_12->width();
    int h2 = ui->label_12->height();
    ui->label_12->setPixmap(pixBal.scaled(w2, h2, Qt::KeepAspectRatio));

    ui->pushButton_5->setIcon(QIcon("gtkabout.png"));
    ui->pushButton_5->setIconSize(QSize(48, 48));
}

void MainWindow::addPerson(Person* person){
    user = person;
    showUser(user);
}

void MainWindow::on_pushButton_5_clicked()
{
    personwindow *pw = new personwindow();
    pw->setFatherWindow(this);
    pw->show();
    pw->showData();
}

void MainWindow::on_pushButton_clicked()
{
    textlessonwindow *pw = new textlessonwindow();
    pw->show();
}
