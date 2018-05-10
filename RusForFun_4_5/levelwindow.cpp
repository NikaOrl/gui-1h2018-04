#include "levelwindow.h"
#include "ui_levelwindow.h"

levelwindow::levelwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::levelwindow)
{
    ui->setupUi(this);
    QFile file2("level.txt");
    int lev = 0;
    QFile file("res.txt");
    QString line = "";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd()) {
            line = in.readLine();
            if(line != "")
                lev++;
        }
        file.close(); // Закрываем file.txt
    }

    if (file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file2);
        ui->textEdit->setText(in.readAll());
        file2.close(); // Закрываем file.txt
    }
    QImage eImage;
    if(lev == 0)
        eImage.load("lvl_0.png");
    if(lev == 1)
        eImage.load("lvl_1.png");
    if(lev == 2)
        eImage.load("lvl_2.png");
    if(lev == 3)
        eImage.load("lvl_3.png");
    if(lev == 4)
        eImage.load("lvl_4.png");
    int w2 = ui->label->width();
    int h2 = ui->label->height();
    ui->label->setPixmap(QPixmap::fromImage(eImage).scaled(w2, h2, Qt::KeepAspectRatio));
}

levelwindow::~levelwindow()
{
    delete ui;
}
