#include "piclessonwindow.h"
#include "ui_piclessonwindow.h"

piclessonwindow::piclessonwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::piclessonwindow)
{
    ui->setupUi(this);
    QPixmap pixBal2("mems/next.png");
    numb = 1;
    changedNum();
    ui->pushButton_2->setIcon(QIcon("mems/pred.png"));
    ui->pushButton_2->setIconSize(QSize(210, 210));
    ui->pushButton_3->setIcon(QIcon("mems/next.png"));
    ui->pushButton_3->setIconSize(QSize(210, 210));
}

piclessonwindow::~piclessonwindow()
{
    delete ui;
}

void piclessonwindow::setFatherWindow(MainWindow *father)
{
    parent = father;
}

void piclessonwindow::changedNum()
{
    QString numS = "mems/" + QString::number(numb) + ".png";
    QPixmap pixBal2(numS);
    int w3 = ui->label->width();
    int h3 = ui->label->height();
    ui->label->setPixmap(pixBal2.scaled(w3, h3, Qt::KeepAspectRatio));
    ui->label_2->setText(QString::number(numb) + "/10");
}

void piclessonwindow::on_pushButton_2_clicked()
{
    if(numb > 1) {
        numb--;
        if (numb < 10)
            ui->pushButton->setEnabled(false);
        changedNum();
    }
}

void piclessonwindow::on_pushButton_clicked()
{
    QFile file("res.txt");
    QFile levFile("level.txt");
    QString line = "";
    bool flag = true;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd()) {
            line = in.readLine();
            if(line == "pic")
                flag = false;
        }
        file.close(); // Закрываем file.txt
    }
    if(flag) {
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream(&file);
            writeStream << "\npic";
            file.close(); // Закрываем file.txt
        }
        if (levFile.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream1(&levFile);
            QDateTime dt = QDateTime::currentDateTime();
            writeStream1 << dt.toString() << " learned a lesson N4\"piclesson\"\n";
            levFile.close(); // Закрываем file.txt
        }
    }
    parent->changeLevel();
    piclessonwindow::close();
}

void piclessonwindow::on_pushButton_3_clicked()
{
    if(numb < 10) {
        numb++;
        if (numb == 10)
            ui->pushButton->setEnabled(true);
        changedNum();
    }
}
