#include "personwindow.h"

personwindow::personwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::personwindow)
{
    ui->setupUi(this);
}

personwindow::~personwindow()
{
    delete ui;
}

void personwindow::showData()
{
    QPixmap pixmap(person->getPhotoURL());
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));

    ui->textEditSurname->setText(person->getSurname());
    ui->textEditName->setText(person->getName());
    ui->textEditPlace->setText(person->getPlace());
    int index = ui->comboBoxSex->findText(person->getSex());
    if ( index != -1 ) { // -1 for not found
       ui->comboBoxSex->setCurrentIndex(index);
    }

    index = ui->comboBoxDayB->findText(QString::number(person->getDayB()));
    if ( index != -1 ) { // -1 for not found
       ui->comboBoxDayB->setCurrentIndex(index);
    }

    index = ui->comboBoxMonthB->findText(person->getMonthB());
    if ( index != -1 ) { // -1 for not found
       ui->comboBoxMonthB->setCurrentIndex(index);
    }

    index = ui->comboBoxYearB->findText(QString::number(person->getYearB()));
    if ( index != -1 ) { // -1 for not found
       ui->comboBoxYearB->setCurrentIndex(index);
    }

    ui->textEditName_2->setText(person->getPhotoURL());
}

void personwindow::setFatherWindow(MainWindow *father)
{
    parent = father;
    person = parent->user;
}

void personwindow::on_pushButton_clicked()
{
    person->setName(ui->textEditName->toPlainText());
    person->setSurname(ui->textEditSurname->toPlainText());
    person->setSex(ui->comboBoxSex->currentText());
    person->setDayB(ui->comboBoxDayB->currentText().toInt());
    person->setMonthB(ui->comboBoxMonthB->currentText());
    person->setYearB(ui->comboBoxYearB->currentText().toInt());
    person->setPlace(ui->textEditPlace->toPlainText());
    person->setPhotoURL(ui->textEditName_2->toPlainText());
    parent->addPerson(person);

    QFile file("user.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream writeStream(&file);
        writeStream << person->getName() << endl;
        file.close(); // Закрываем file.txt
    }
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream writeStream(&file);
        writeStream << person->getSurname() << endl << person->getSex() << endl
                    << person->getPlace() << endl << person->getDayB() << endl
                    << person->getMonthB() << endl << person->getYearB() << endl
                    << person->getPhotoURL();
        file.close(); // Закрываем file.txt
    }
    personwindow::close();
}

void personwindow::on_pushButton_2_clicked()
{
    QString img = "";
    img = QFileDialog::getOpenFileName(this, tr("Open Image"), "/home/jana", tr("Image Files (*.png *.jpg *.bmp)"));
    if(img != "")
        ui->textEditName_2->setText(img);
    QPixmap pixmap(ui->textEditName_2->toPlainText());
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));

}

void personwindow::on_pushButton_3_clicked()
{
    QFile file("res.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        file.close();
    QFile lfile("level.txt");
    if (lfile.open(QIODevice::WriteOnly | QIODevice::Truncate))
        lfile.close();
}
