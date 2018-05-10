#include "medvedwindow.h"

medvedwindow::medvedwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::medvedwindow)
{
    ui->setupUi(this);
}

medvedwindow::~medvedwindow()
{
    delete ui;
}

void medvedwindow::jokeOrVoc(int num)
{
    if(num == 1)
        {
            ui->label->setText("Joke!");
            QFile file("les1joke.txt");
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                ui->label_2->setText(in.readAll());
                file.close(); // Закрываем file.txt
            }
            QMediaPlayer *player = new QMediaPlayer;
            player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("mix_17s (audio-joiner.com).mp3")));
            player->setVolume(100);
            player->play();
        }
        else
        {
            ui->label->setText("Russian vocabulary:");
            QFile file("les1voc.txt");
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                ui->label_2->setText(in.readAll());
                file.close(); // Закрываем file.txt
            }
        }
}

void medvedwindow::on_pushButton_clicked()
{
    medvedwindow::close();
}
