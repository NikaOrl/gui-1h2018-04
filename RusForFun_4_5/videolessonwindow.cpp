#include "videolessonwindow.h"
#include <QFileDialog>
#include <QDir>

videolessonwindow::videolessonwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::videolessonwindow)
{
    ui->setupUi(this);
    // Настройка таблицы плейлиста
   // m_playListModel = new QStandardItemModel(this);
   // ui->playlistView->setModel(m_playListModel);    // Устанавливаем модель данных в TableView
    // Устанавливаем заголовки таблицы
    /*
    m_playListModel->setHorizontalHeaderLabels(QStringList()  << tr("Audio Track")
                                                            << tr("File Path"));
    ui->playlistView->hideColumn(1);    // Скрываем колонку, в которой хранится путь к файлу
    ui->playlistView->verticalHeader()->setVisible(false);                  // Скрываем нумерацию строк
    ui->playlistView->setSelectionBehavior(QAbstractItemView::SelectRows);  // Включаем выделение строк
    ui->playlistView->setSelectionMode(QAbstractItemView::SingleSelection); // Разрешаем выделять только одну строку
    ui->playlistView->setEditTriggers(QAbstractItemView::NoEditTriggers);   // Отключаем редактирование
    // Включаем подгонку размера последней видимой колонки к ширине TableView
    ui->playlistView->horizontalHeader()->setStretchLastSection(true);
*/
    m_player = new QMediaPlayer(this);          // Инициализируем плеер
    m_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    m_player->setPlaylist(m_playlist);          // Устанавливаем плейлист в плеер
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    m_playlist->setPlaybackMode(QMediaPlaylist::Loop);  // Устанавливаем циклический режим проигрывания плейлиста
    //m_playlist->addMedia(QUrl("https://www.youtube.com/watch?v=Nzjre98K1lU"));
    //m_playlist->addMedia(QUrl("https://www.youtube.com/watch?v=Nzjre98K1lU")); bearWithMe.mp4
    ////m_playlist->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("bearWithMe.mp4")));
    videoWidget = new QVideoWidget(this);
    m_player->setVideoOutput(videoWidget);
    //
    m_player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("bearWithMe.mp4")));
    videoWidget->setGeometry(100,100,300, 400);
            //
    videoWidget->show();
    m_playlist->setCurrentIndex(1);
    m_player->play();

    // подключаем кнопки управления к слотам управления
    // Здесь отметим, что навигация по плейлисту осуществляется именно через плейлист
    // а запуск/пауза/остановка через сам плеер
    //connect(ui->btn_previous, &QToolButton::clicked, m_playlist, &QMediaPlaylist::previous);
    //connect(ui->btn_next, &QToolButton::clicked, m_playlist, &QMediaPlaylist::next);
    //connect(ui->btn_play, &QToolButton::clicked, m_player, &QMediaPlayer::play);
    //connect(ui->btn_pause, &QToolButton::clicked, m_player, &QMediaPlayer::pause);
    //connect(ui->btn_stop, &QToolButton::clicked, m_player, &QMediaPlayer::stop);

    // При даблклике по треку в таблице устанавливаем трек в плейлисте
    /*connect(ui->playlistView, &QTableView::doubleClicked, [this](const QModelIndex &index){
        m_playlist->setCurrentIndex(index.row());
    });

    // при изменении индекса текущего трека в плейлисте, устанавливаем название файла в специальном лейбле
    connect(m_playlist, &QMediaPlaylist::currentIndexChanged, [this](int index){
        ui->currentTrack->setText(m_playListModel->data(m_playListModel->index(index, 0)).toString());
    });*/
}

videolessonwindow::~videolessonwindow()
{
    delete ui;
    delete m_playListModel;
    delete m_playlist;
    delete m_player;
}

/*void videolessonwindow::on_btn_add_clicked()
{
    // С помощью диалога выбора файлов делаем множественный выбор mp3 файлов
    QStringList files = QFileDialog::getOpenFileNames(this,
                                                      tr("Open files"),
                                                      QString(),
                                                      tr("Audio Files (*.mp3)"));

    // Далее устанавливаем данные по именам и пути к файлам
    // в плейлист и таблицу отображающую плейлист
    foreach (QString filePath, files) {
        QList<QStandardItem *> items;
        items.append(new QStandardItem(QDir(filePath).dirName()));
        items.append(new QStandardItem(filePath));
        m_playListModel->appendRow(items);
        m_playlist->addMedia(QUrl(filePath));
    }
}*/
