#include "personwindow.h"
#include "ui_personwindow.h"
#include "person.h"
#include "mainwindow.h"

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

    parent->addPerson(person);

    personwindow::close();
}
