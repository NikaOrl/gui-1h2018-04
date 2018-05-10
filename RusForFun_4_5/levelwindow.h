#ifndef LEVELWINDOW_H
#define LEVELWINDOW_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QImage>

namespace Ui {
class levelwindow;
}

class levelwindow : public QWidget
{
    Q_OBJECT

public:
    explicit levelwindow(QWidget *parent = 0);
    ~levelwindow();

private:
    Ui::levelwindow *ui;
};

#endif // LEVELWINDOW_H
