#include "textlessonwindow.h"
#include "ui_textlessonwindow.h"
#include <QFile>
#include <QTextStream>
#include <QRegExp>
#include <QString>
#include <QObject>
#include <QTextEdit>
#include <QPixmap>
#include <QImage>
#include <QMediaPlayer>
#include <QDir>
#include <QUrl>
#include "medvedwindow.h"

textlessonwindow::textlessonwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textlessonwindow)
{
    ui->setupUi(this);

    QFile file1("Les1rus1.txt");
    if (file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file1);
        ui->rus1->setText(in.readAll());
        file1.close(); // Закрываем file.txt
    }

    QFile file2("Les1rus2.txt");
    if (file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file2);
        ui->rus2->setText(in.readAll());
        file2.close(); // Закрываем file.txt
    }

    QFile file3("Les1eng1.txt");
    if (file3.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file3);
        ui->eng1->setText(in.readAll());
        file3.close(); // Закрываем file.txt
    }

    QFile file4("Les1eng2.txt");
    if (file4.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file4);
        ui->eng2->setText(in.readAll());
        file4.close(); // Закрываем file.txt
    }

    QImage eImage;
    eImage.load("balalaika.png");
    eImage = eImage.mirrored(true,false);
    int w2 = ui->medved->width();
    int h2 = ui->medved->height();
    ui->medved->setPixmap(QPixmap::fromImage(eImage).scaled(w2, h2, Qt::KeepAspectRatio));

    ui->pushButton_6->setIcon(QIcon("play.jpg"));
    ui->pushButton_6->setIconSize(QSize(50, 50));

    ui->pushButton_7->setIcon(QIcon("stop.jpg"));
    ui->pushButton_7->setIconSize(QSize(50, 50));
}

textlessonwindow::~textlessonwindow()
{
    delete ui;
}

void textlessonwindow::on_pushButton_clicked()
{
    QFile file4("Les1ans1.txt");
    QString ans = "";
    if (file4.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file4);
        ans = in.readAll();
        file4.close(); // Закрываем file.txt
    }
    QString userAns = ui->textEdit->toPlainText();
    QRegExp reg("[?!.;,:\\s]");
    userAns.replace(reg, "");
    if(ans == userAns)
        ui->label_2->setText("Correct!");
    else
        ui->label_2->setText("Try again");
    if(ui->label_4->text() == "Correct!" && ui->label_2->text() == "Correct!")
        ui->pushButton_3->setEnabled(true);
}

void textlessonwindow::on_pushButton_2_clicked()
{
    QFile file4("Les1ans2.txt");
    QString ans = "";
    if (file4.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file4);
        ans = in.readAll();
        file4.close(); // Закрываем file.txt
    }
    QString userAns = ui->textEdit_2->toPlainText();
    QRegExp reg("[?!.;,:\\s]");
    userAns.replace(reg, "");
    if(ans == userAns)
        ui->label_4->setText("Correct!");
    else
        ui->label_4->setText("Try again");
    if(ui->label_4->text() == "Correct!" && ui->label_2->text() == "Correct!")
        ui->pushButton_3->setEnabled(true);
}

void textlessonwindow::on_pushButton_3_clicked()
{
    textlessonwindow::close();
}

void textlessonwindow::on_pushButton_6_clicked()
{
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("les1.mp3")));
    player->setVolume(100);
    player->play();
}

void textlessonwindow::on_pushButton_7_clicked()
{
    player->pause();
}

void textlessonwindow::on_pushButton_4_clicked()
{
    medvedwindow *pw = new medvedwindow();
    pw->jokeOrVoc(2);
    pw->show();
}

void textlessonwindow::on_pushButton_5_clicked()
{
    medvedwindow *pw = new medvedwindow();
    pw->jokeOrVoc(1);
    pw->show();
}
