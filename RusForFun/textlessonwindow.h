#ifndef TEXTLESSONWINDOW_H
#define TEXTLESSONWINDOW_H

#include <QWidget>
#include <QMediaPlayer>
#include <QDir>
#include <QUrl>

namespace Ui {
class textlessonwindow;
}

class textlessonwindow : public QWidget
{
    Q_OBJECT

public:
    explicit textlessonwindow(QWidget *parent = 0);
    ~textlessonwindow();

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
};

#endif // TEXTLESSONWINDOW_H
