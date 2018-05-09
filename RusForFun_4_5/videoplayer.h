#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMediaPlayer>
#include <QWidget>
#include "ui_videoplayer.h"
#include "mainwindow.h"

class QAbstractButton;
class QSlider;
class QLabel;
class QUrl;

namespace Ui {
class VideoPlayer;
}

class VideoPlayer : public QWidget
{
    Q_OBJECT
public:
    explicit VideoPlayer(QWidget *parent = 0);
    ~VideoPlayer();
    void setFatherWindow(MainWindow *father);
    void setUrl(const QUrl &url);

public slots:
    void play();

private slots:
    void mediaStateChanged(QMediaPlayer::State state);
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void setPosition(int position);

    void on_m_playButton_2_clicked();

    void on_m_playButton_3_clicked();

private:
    Ui::videoplayer *ui;
    QMediaPlayer* m_mediaPlayer;
    MainWindow *parent;
};

#endif // VIDEOPLAYER_H
