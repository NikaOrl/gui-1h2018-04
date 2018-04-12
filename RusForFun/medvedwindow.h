#ifndef MEDVEDWINDOW_H
#define MEDVEDWINDOW_H

#include <QWidget>

namespace Ui {
class medvedwindow;
}

class medvedwindow : public QWidget
{
    Q_OBJECT

public:
    explicit medvedwindow(QWidget *parent = 0);
    ~medvedwindow();
    void jokeOrVoc(int num);

private slots:
    void on_pushButton_clicked();

private:
    Ui::medvedwindow *ui;
};

#endif // MEDVEDWINDOW_H
