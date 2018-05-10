#include "audiolessonwindow.h"

audiolessonwindow::audiolessonwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::audiolessonwindow)
{
    ui->setupUi(this);
    ui->pushButton_6->setIcon(QIcon("play.jpg"));
    ui->pushButton_6->setIconSize(QSize(50, 50));

    ui->pushButton_7->setIcon(QIcon("stop.jpg"));
    ui->pushButton_7->setIconSize(QSize(50, 50));

    ui->pushButton_8->setIcon(QIcon("play.jpg"));
    ui->pushButton_8->setIconSize(QSize(50, 50));

    ui->pushButton_9->setIcon(QIcon("stop.jpg"));
    ui->pushButton_9->setIconSize(QSize(50, 50));

    ui->pushButton_10->setIcon(QIcon("play.jpg"));
    ui->pushButton_10->setIconSize(QSize(50, 50));

    ui->pushButton_11->setIcon(QIcon("stop.jpg"));
    ui->pushButton_11->setIconSize(QSize(50, 50));
}

audiolessonwindow::~audiolessonwindow()
{
    delete ui;
}

void audiolessonwindow::setFatherWindow(MainWindow *father)
{
    parent = father;
}

void audiolessonwindow::on_pushButton_6_clicked()
{
    player1 = new QMediaPlayer;
    player1->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("audi_1.mp3")));
    player1->setVolume(100);
    player1->play();
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_6->setEnabled(false);
}

void audiolessonwindow::on_pushButton_7_clicked()
{
    player1->pause();
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(false);
}

void audiolessonwindow::on_pushButton_8_clicked()
{
    player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("audi_2.mp3")));
    player2->setVolume(100);
    player2->play();
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_8->setEnabled(false);
}

void audiolessonwindow::on_pushButton_9_clicked()
{
    player2->pause();
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(false);
}

void audiolessonwindow::on_pushButton_10_clicked()
{
    player3 = new QMediaPlayer;
    player3->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("audi_3.mp3")));
    player3->setVolume(100);
    player3->play();
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_10->setEnabled(false);
}

void audiolessonwindow::on_pushButton_11_clicked()
{
    player3->pause();
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(false);
}

void audiolessonwindow::on_pushButton_4_clicked()
{
    int col = 0;
    QFile file("ansAudio.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        for (int i = 0; i < 10; i++)
        {
            if(findChild<QRadioButton *>("radioButton_" + in.readLine())->isChecked())
                col++;
        }
        file.close(); // Закрываем file.txt
    }
    if(col == 10) {
        ui->label->setText(QString::number(col) + "/10\nGreat!");
        ui->pushButton_3->setEnabled(true);
        ui->label->setStyleSheet("color: green");
    }
    else {
        ui->label->setText(QString::number(col) + "/10\nTry again!");
        ui->label->setStyleSheet("color: red");
    }
}

void audiolessonwindow::on_pushButton_3_clicked()
{
    QFile file("res.txt");
    QFile levFile("level.txt");
    QString line = "";
    bool flag = true;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd()) {
            line = in.readLine();
            if(line == "audio")
                flag = false;
        }
        file.close(); // Закрываем file.txt
    }
    if(flag) {
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream(&file);
            writeStream << "\naudio";
            file.close(); // Закрываем file.txt
        }
        if (levFile.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream1(&levFile);
            QDateTime dt = QDateTime::currentDateTime();
            writeStream1 << dt.toString() << " learned a lesson N2\"audiolesson\"\n";
            levFile.close(); // Закрываем file.txt
        }
    }
    parent->changeLevel();
    audiolessonwindow::close();
}
