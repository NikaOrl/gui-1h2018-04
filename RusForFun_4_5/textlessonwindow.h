#ifndef TEXTLESSONWINDOW_H
#define TEXTLESSONWINDOW_H

#include "ui_textlessonwindow.h"
#include "medvedwindow.h"
#include "mainwindow.h"

#include <QWidget>
#include <QMediaPlayer>
#include <QDir>
#include <QUrl>
#include <QFile>
#include <QTextStream>
#include <QRegExp>
#include <QString>
#include <QObject>
#include <QTextEdit>
#include <QPixmap>
#include <QImage>
#include <QDateTime>

namespace Ui {
class textlessonwindow;
}

class textlessonwindow : public QWidget
{
    Q_OBJECT

public:
    explicit textlessonwindow(QWidget *parent = 0);
    ~textlessonwindow();
    void setFatherWindow(MainWindow *father);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::textlessonwindow *ui;
    QMediaPlayer *player;
    MainWindow *parent;
};

#endif // TEXTLESSONWINDOW_H
