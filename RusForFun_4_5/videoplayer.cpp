#include "videoplayer.h"

#include <QtWidgets>
#include <QVideoWidget>

VideoPlayer::VideoPlayer(QWidget *parent):
    QWidget(parent),
    ui(new Ui::videoplayer)
{
    ui->setupUi(this);
    m_mediaPlayer = new QMediaPlayer(this, QMediaPlayer::VideoSurface);
    QVideoWidget *videoWidget = new QVideoWidget;

    ui->m_playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    connect(ui->m_playButton, &QAbstractButton::clicked,
            this, &VideoPlayer::play);

    connect(ui->m_positionSlider, &QAbstractSlider::sliderMoved,
            this, &VideoPlayer::setPosition);

    QBoxLayout *controlLayout = new QHBoxLayout;
    controlLayout->setMargin(0);
    controlLayout->addWidget(ui->m_playButton);
    controlLayout->addWidget(ui->m_positionSlider);

    QBoxLayout *finishLayout = new QHBoxLayout;
    finishLayout->addWidget(ui->m_playButton_2);
    finishLayout->setContentsMargins(350, 0, 350, 0);

    QBoxLayout *Label = new QHBoxLayout;
    Label->addWidget(ui->colAns);
    Label->setContentsMargins(400, 0, 400, 0);
    ui->colAns->setMaximumHeight(50);

    QBoxLayout *resL = new QHBoxLayout;
    resL->addWidget(ui->m_playButton_3);
    resL->setContentsMargins(350, 0, 350, 0);

    QBoxLayout *ansLayout1 = new QVBoxLayout;
    ansLayout1->addWidget(ui->label_2);
    ansLayout1->addWidget(ui->radioButton);
    ansLayout1->addWidget(ui->radioButton_2);
    ansLayout1->addWidget(ui->radioButton_3);
    QGroupBox *ansGroup1 = new QGroupBox;
    ansGroup1->setLayout(ansLayout1);
    ansGroup1->setMaximumHeight(120);

    QBoxLayout *ansLayout2 = new QVBoxLayout;
    ansLayout2->addWidget(ui->label_3);
    ansLayout2->addWidget(ui->radioButton_4);
    ansLayout2->addWidget(ui->radioButton_5);
    ansLayout2->addWidget(ui->radioButton_6);
    QGroupBox *ansGroup2 = new QGroupBox;
    ansGroup2->setLayout(ansLayout2);
    ansGroup2->setMaximumHeight(120);

    QBoxLayout *ansLayout3 = new QVBoxLayout;
    ansLayout3->addWidget(ui->label_4);
    ansLayout3->addWidget(ui->radioButton_7);
    ansLayout3->addWidget(ui->radioButton_8);
    ansLayout3->addWidget(ui->radioButton_9);
    QGroupBox *ansGroup3 = new QGroupBox;
    ansGroup3->setLayout(ansLayout3);
    ansGroup3->setMaximumHeight(120);

    QBoxLayout *ansLayout = new QHBoxLayout;
    ansLayout->addWidget(ansGroup1);
    ansLayout->addWidget(ansGroup2);
    ansLayout->addWidget(ansGroup3);

    QBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(videoWidget);
    layout->addLayout(controlLayout);
    layout->addLayout(ansLayout);
    layout->addLayout(resL);
    layout->addLayout(Label);
    layout->addLayout(finishLayout);

    setLayout(layout);

    m_mediaPlayer->setVideoOutput(videoWidget);
    connect(m_mediaPlayer, &QMediaPlayer::stateChanged,
            this, &VideoPlayer::mediaStateChanged);
    connect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &VideoPlayer::positionChanged);
    connect(m_mediaPlayer, &QMediaPlayer::durationChanged, this, &VideoPlayer::durationChanged);

    setUrl(QUrl::fromLocalFile(QDir::toNativeSeparators("Smeshariki_-_Bolshoy_kush__English_subs_360p.mp4")));

}

VideoPlayer::~VideoPlayer()
{
    delete ui;
}

void VideoPlayer::setFatherWindow(MainWindow *father)
{
    parent = father;
}

void VideoPlayer::setUrl(const QUrl &url)
{
    setWindowFilePath(url.isLocalFile() ? url.toLocalFile() : QString());
    m_mediaPlayer->setMedia(url);
    ui->m_playButton->setEnabled(true);
}

void VideoPlayer::play()
{
    switch (m_mediaPlayer->state()) {
    case QMediaPlayer::PlayingState:
        m_mediaPlayer->pause();
        break;
    default:
        m_mediaPlayer->play();
        break;
    }
}

void VideoPlayer::mediaStateChanged(QMediaPlayer::State state)
{
    switch(state) {
    case QMediaPlayer::PlayingState:
        ui->m_playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
        break;
    default:
        ui->m_playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        break;
    }
}

void VideoPlayer::positionChanged(qint64 position)
{
    ui->m_positionSlider->setValue(position);
}

void VideoPlayer::durationChanged(qint64 duration)
{
    ui->m_positionSlider->setRange(0, duration);
}

void VideoPlayer::setPosition(int position)
{
    m_mediaPlayer->setPosition(position);
}

void VideoPlayer::on_m_playButton_2_clicked()
{
    QFile file("res.txt");
    QFile levFile("level.txt");
    QString line = "";
    bool flag = true;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd()) {
            line = in.readLine();
            if(line == "video")
                flag = false;
        }
        file.close(); // Закрываем file.txt
    }
    if(flag) {
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream(&file);
            writeStream << "\nvideo";
            file.close(); // Закрываем file.txt
        }
        if (levFile.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream writeStream1(&levFile);
            QDateTime dt = QDateTime::currentDateTime();
            writeStream1 << dt.toString() << " learned a lesson N3\"videolesson\"\n";
            levFile.close(); // Закрываем file.txt
        }
    }
    parent->changeLevel();
    VideoPlayer::close();
}

void VideoPlayer::on_m_playButton_3_clicked()
{
    int col = 0;
    QFile file("ansVideo.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        for (int i = 0; i < 3; i++)
        {
            if(findChild<QRadioButton *>("radioButton_" + in.readLine())->isChecked())
                col++;
        }
        file.close(); // Закрываем file.txt
    }
    if(col == 3) {
        ui->colAns->setText(QString::number(col) + "/3\nGreat!");
        ui->m_playButton_2 ->setEnabled(true);
        ui->colAns->setStyleSheet("color: green");
    }
    else {
        ui->colAns->setText(QString::number(col) + "/3\nTry again!");
        ui->colAns->setStyleSheet("color: red");
    }
}
