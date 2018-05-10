#ifndef AUDIOLESSONWINDOW_H
#define AUDIOLESSONWINDOW_H

#include "ui_audiolessonwindow.h"
#include "mainwindow.h"

#include <QWidget>
#include <QMediaPlayer>
#include <QDir>
#include <QUrl>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QDateTime>

namespace Ui {
class audiolessonwindow;
}

class audiolessonwindow : public QWidget
{
    Q_OBJECT

public:
    explicit audiolessonwindow(QWidget *parent = 0);
    ~audiolessonwindow();
    void setFatherWindow(MainWindow *father);

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::audiolessonwindow *ui;
    QMediaPlayer *player1;
    QMediaPlayer *player2;
    QMediaPlayer *player3;
    QGroupBox *groupBox1;
    QVBoxLayout *vLayout1;
    QGroupBox *groupBox2;
    QVBoxLayout *vLayout2;
    MainWindow *parent;
};

#endif // AUDIOLESSONWINDOW_H
