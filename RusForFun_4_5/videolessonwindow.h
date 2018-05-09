#ifndef VIDEOLESSONWINDOW_H
#define VIDEOLESSONWINDOW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include "ui_videolessonwindow.h"
#include <QVideoWidget>

namespace Ui {
class videolessonwindow;
}

class videolessonwindow : public QWidget
{
    Q_OBJECT

public:
    explicit videolessonwindow(QWidget *parent = 0);
    ~videolessonwindow();

private slots:
  //  void on_btn_add_clicked();              // Слот для обработки добавления треков через диалоговое окно

private:
    Ui::videolessonwindow *ui;
    QStandardItemModel  *m_playListModel;   // Модель данных плейлиста для отображения
    QMediaPlayer        *m_player;          // Проигрыватель треков
    QMediaPlaylist      *m_playlist;        // Плейлиста проигрывателя
    QVideoWidget *videoWidget;
};

#endif // VIDEOLESSONWINDOW_H
