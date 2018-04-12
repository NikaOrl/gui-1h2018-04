/********************************************************************************
** Form generated from reading UI file 'personwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONWINDOW_H
#define UI_PERSONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personwindow
{
public:
    QLabel *label;
    QLabel *label_5;
    QLabel *label_9;
    QComboBox *comboBoxSex;
    QTextEdit *textEditSurname;
    QLabel *label_11;
    QTextEdit *textEditName;
    QComboBox *comboBoxDayB;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *comboBoxMonthB;
    QTextEdit *textEditPlace;
    QLabel *label_10;
    QPushButton *pushButton;
    QComboBox *comboBoxYearB;
    QPushButton *pushButton_2;
    QTextEdit *textEditName_2;
    QLabel *label_2;

    void setupUi(QWidget *personwindow)
    {
        if (personwindow->objectName().isEmpty())
            personwindow->setObjectName(QStringLiteral("personwindow"));
        personwindow->resize(569, 653);
        label = new QLabel(personwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 420, 101, 16));
        label_5 = new QLabel(personwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 510, 111, 16));
        label_9 = new QLabel(personwindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 360, 31, 16));
        comboBoxSex = new QComboBox(personwindow);
        comboBoxSex->setObjectName(QStringLiteral("comboBoxSex"));
        comboBoxSex->setGeometry(QRect(120, 360, 91, 22));
        textEditSurname = new QTextEdit(personwindow);
        textEditSurname->setObjectName(QStringLiteral("textEditSurname"));
        textEditSurname->setGeometry(QRect(50, 310, 211, 31));
        label_11 = new QLabel(personwindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 290, 61, 16));
        textEditName = new QTextEdit(personwindow);
        textEditName->setObjectName(QStringLiteral("textEditName"));
        textEditName->setGeometry(QRect(270, 310, 181, 31));
        comboBoxDayB = new QComboBox(personwindow);
        comboBoxDayB->setObjectName(QStringLiteral("comboBoxDayB"));
        comboBoxDayB->setGeometry(QRect(160, 460, 91, 22));
        label_12 = new QLabel(personwindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 440, 41, 16));
        label_13 = new QLabel(personwindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 440, 51, 16));
        label_14 = new QLabel(personwindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 440, 31, 16));
        comboBoxMonthB = new QComboBox(personwindow);
        comboBoxMonthB->setObjectName(QStringLiteral("comboBoxMonthB"));
        comboBoxMonthB->setGeometry(QRect(50, 460, 91, 22));
        textEditPlace = new QTextEdit(personwindow);
        textEditPlace->setObjectName(QStringLiteral("textEditPlace"));
        textEditPlace->setGeometry(QRect(50, 530, 471, 31));
        label_10 = new QLabel(personwindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 290, 55, 16));
        pushButton = new QPushButton(personwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 580, 281, 51));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        comboBoxYearB = new QComboBox(personwindow);
        comboBoxYearB->setObjectName(QStringLiteral("comboBoxYearB"));
        comboBoxYearB->setGeometry(QRect(270, 460, 91, 22));
        pushButton_2 = new QPushButton(personwindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 170, 171, 51));
        QFont font1;
        font1.setPointSize(12);
        pushButton_2->setFont(font1);
        textEditName_2 = new QTextEdit(personwindow);
        textEditName_2->setObjectName(QStringLiteral("textEditName_2"));
        textEditName_2->setEnabled(false);
        textEditName_2->setGeometry(QRect(290, 100, 171, 51));
        label_2 = new QLabel(personwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 40, 181, 231));

        retranslateUi(personwindow);

        QMetaObject::connectSlotsByName(personwindow);
    } // setupUi

    void retranslateUi(QWidget *personwindow)
    {
        personwindow->setWindowTitle(QApplication::translate("personwindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("personwindow", "Day of dirth:", Q_NULLPTR));
        label_5->setText(QApplication::translate("personwindow", "Address:", Q_NULLPTR));
        label_9->setText(QApplication::translate("personwindow", "Sex", Q_NULLPTR));
        comboBoxSex->clear();
        comboBoxSex->insertItems(0, QStringList()
         << QApplication::translate("personwindow", "Male", Q_NULLPTR)
         << QApplication::translate("personwindow", "Female", Q_NULLPTR)
        );
        comboBoxSex->setCurrentText(QApplication::translate("personwindow", "Male", Q_NULLPTR));
        textEditSurname->setHtml(QApplication::translate("personwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("personwindow", "Surname:", Q_NULLPTR));
        comboBoxDayB->clear();
        comboBoxDayB->insertItems(0, QStringList()
         << QApplication::translate("personwindow", "1", Q_NULLPTR)
         << QApplication::translate("personwindow", "2", Q_NULLPTR)
         << QApplication::translate("personwindow", "3", Q_NULLPTR)
         << QApplication::translate("personwindow", "4", Q_NULLPTR)
         << QApplication::translate("personwindow", "5", Q_NULLPTR)
         << QApplication::translate("personwindow", "6", Q_NULLPTR)
         << QApplication::translate("personwindow", "7", Q_NULLPTR)
         << QApplication::translate("personwindow", "8", Q_NULLPTR)
         << QApplication::translate("personwindow", "9", Q_NULLPTR)
         << QApplication::translate("personwindow", "10", Q_NULLPTR)
         << QApplication::translate("personwindow", "11", Q_NULLPTR)
         << QApplication::translate("personwindow", "12", Q_NULLPTR)
         << QApplication::translate("personwindow", "13", Q_NULLPTR)
         << QApplication::translate("personwindow", "14", Q_NULLPTR)
         << QApplication::translate("personwindow", "15", Q_NULLPTR)
         << QApplication::translate("personwindow", "16", Q_NULLPTR)
         << QApplication::translate("personwindow", "17", Q_NULLPTR)
         << QApplication::translate("personwindow", "18", Q_NULLPTR)
         << QApplication::translate("personwindow", "19", Q_NULLPTR)
         << QApplication::translate("personwindow", "20", Q_NULLPTR)
         << QApplication::translate("personwindow", "21", Q_NULLPTR)
         << QApplication::translate("personwindow", "22", Q_NULLPTR)
         << QApplication::translate("personwindow", "23", Q_NULLPTR)
         << QApplication::translate("personwindow", "24", Q_NULLPTR)
         << QApplication::translate("personwindow", "25", Q_NULLPTR)
         << QApplication::translate("personwindow", "26", Q_NULLPTR)
         << QApplication::translate("personwindow", "27", Q_NULLPTR)
         << QApplication::translate("personwindow", "28", Q_NULLPTR)
         << QApplication::translate("personwindow", "29", Q_NULLPTR)
         << QApplication::translate("personwindow", "30", Q_NULLPTR)
         << QApplication::translate("personwindow", "31", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("personwindow", "Day:", Q_NULLPTR));
        label_13->setText(QApplication::translate("personwindow", "Month:", Q_NULLPTR));
        label_14->setText(QApplication::translate("personwindow", "Year:", Q_NULLPTR));
        comboBoxMonthB->clear();
        comboBoxMonthB->insertItems(0, QStringList()
         << QApplication::translate("personwindow", "January", Q_NULLPTR)
         << QApplication::translate("personwindow", "February", Q_NULLPTR)
         << QApplication::translate("personwindow", "March", Q_NULLPTR)
         << QApplication::translate("personwindow", "April", Q_NULLPTR)
         << QApplication::translate("personwindow", "May", Q_NULLPTR)
         << QApplication::translate("personwindow", "June", Q_NULLPTR)
         << QApplication::translate("personwindow", "July", Q_NULLPTR)
         << QApplication::translate("personwindow", "August", Q_NULLPTR)
         << QApplication::translate("personwindow", "September", Q_NULLPTR)
         << QApplication::translate("personwindow", "October", Q_NULLPTR)
         << QApplication::translate("personwindow", "November", Q_NULLPTR)
         << QApplication::translate("personwindow", "December", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("personwindow", "Name:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("personwindow", "Change", Q_NULLPTR));
        comboBoxYearB->clear();
        comboBoxYearB->insertItems(0, QStringList()
         << QApplication::translate("personwindow", "2014", Q_NULLPTR)
         << QApplication::translate("personwindow", "2013", Q_NULLPTR)
         << QApplication::translate("personwindow", "2012", Q_NULLPTR)
         << QApplication::translate("personwindow", "2011", Q_NULLPTR)
         << QApplication::translate("personwindow", "2010", Q_NULLPTR)
         << QApplication::translate("personwindow", "2009", Q_NULLPTR)
         << QApplication::translate("personwindow", "2008", Q_NULLPTR)
         << QApplication::translate("personwindow", "2007", Q_NULLPTR)
         << QApplication::translate("personwindow", "2006", Q_NULLPTR)
         << QApplication::translate("personwindow", "2005", Q_NULLPTR)
         << QApplication::translate("personwindow", "2004", Q_NULLPTR)
         << QApplication::translate("personwindow", "2003", Q_NULLPTR)
         << QApplication::translate("personwindow", "2002", Q_NULLPTR)
         << QApplication::translate("personwindow", "2001", Q_NULLPTR)
         << QApplication::translate("personwindow", "2000", Q_NULLPTR)
         << QApplication::translate("personwindow", "1999", Q_NULLPTR)
         << QApplication::translate("personwindow", "1998", Q_NULLPTR)
         << QApplication::translate("personwindow", "1997", Q_NULLPTR)
         << QApplication::translate("personwindow", "1996", Q_NULLPTR)
         << QApplication::translate("personwindow", "1995", Q_NULLPTR)
         << QApplication::translate("personwindow", "1994", Q_NULLPTR)
         << QApplication::translate("personwindow", "1993", Q_NULLPTR)
         << QApplication::translate("personwindow", "1992", Q_NULLPTR)
         << QApplication::translate("personwindow", "1991", Q_NULLPTR)
         << QApplication::translate("personwindow", "1990", Q_NULLPTR)
         << QApplication::translate("personwindow", "1989", Q_NULLPTR)
         << QApplication::translate("personwindow", "1988", Q_NULLPTR)
         << QApplication::translate("personwindow", "1987", Q_NULLPTR)
         << QApplication::translate("personwindow", "1986", Q_NULLPTR)
         << QApplication::translate("personwindow", "1985", Q_NULLPTR)
         << QApplication::translate("personwindow", "1984", Q_NULLPTR)
         << QApplication::translate("personwindow", "1983", Q_NULLPTR)
         << QApplication::translate("personwindow", "1982", Q_NULLPTR)
         << QApplication::translate("personwindow", "1981", Q_NULLPTR)
         << QApplication::translate("personwindow", "1980", Q_NULLPTR)
         << QApplication::translate("personwindow", "1979", Q_NULLPTR)
         << QApplication::translate("personwindow", "1978", Q_NULLPTR)
         << QApplication::translate("personwindow", "1977", Q_NULLPTR)
         << QApplication::translate("personwindow", "1976", Q_NULLPTR)
         << QApplication::translate("personwindow", "1975", Q_NULLPTR)
         << QApplication::translate("personwindow", "1974", Q_NULLPTR)
         << QApplication::translate("personwindow", "1973", Q_NULLPTR)
         << QApplication::translate("personwindow", "1972", Q_NULLPTR)
         << QApplication::translate("personwindow", "1971", Q_NULLPTR)
         << QApplication::translate("personwindow", "1970", Q_NULLPTR)
         << QApplication::translate("personwindow", "1969", Q_NULLPTR)
         << QApplication::translate("personwindow", "1968", Q_NULLPTR)
         << QApplication::translate("personwindow", "1967", Q_NULLPTR)
         << QApplication::translate("personwindow", "1966", Q_NULLPTR)
         << QApplication::translate("personwindow", "1965", Q_NULLPTR)
         << QApplication::translate("personwindow", "1964", Q_NULLPTR)
         << QApplication::translate("personwindow", "1963", Q_NULLPTR)
         << QApplication::translate("personwindow", "1962", Q_NULLPTR)
         << QApplication::translate("personwindow", "1961", Q_NULLPTR)
         << QApplication::translate("personwindow", "1960", Q_NULLPTR)
         << QApplication::translate("personwindow", "1959", Q_NULLPTR)
         << QApplication::translate("personwindow", "1958", Q_NULLPTR)
         << QApplication::translate("personwindow", "1957", Q_NULLPTR)
         << QApplication::translate("personwindow", "1956", Q_NULLPTR)
         << QApplication::translate("personwindow", "1955", Q_NULLPTR)
         << QApplication::translate("personwindow", "1954", Q_NULLPTR)
         << QApplication::translate("personwindow", "1953", Q_NULLPTR)
         << QApplication::translate("personwindow", "1952", Q_NULLPTR)
         << QApplication::translate("personwindow", "1951", Q_NULLPTR)
         << QApplication::translate("personwindow", "1950", Q_NULLPTR)
         << QApplication::translate("personwindow", "1949", Q_NULLPTR)
         << QApplication::translate("personwindow", "1948", Q_NULLPTR)
         << QApplication::translate("personwindow", "1947", Q_NULLPTR)
         << QApplication::translate("personwindow", "1946", Q_NULLPTR)
         << QApplication::translate("personwindow", "1945", Q_NULLPTR)
         << QApplication::translate("personwindow", "1944", Q_NULLPTR)
         << QApplication::translate("personwindow", "1943", Q_NULLPTR)
         << QApplication::translate("personwindow", "1942", Q_NULLPTR)
         << QApplication::translate("personwindow", "1941", Q_NULLPTR)
         << QApplication::translate("personwindow", "1940", Q_NULLPTR)
         << QApplication::translate("personwindow", "1939", Q_NULLPTR)
         << QApplication::translate("personwindow", "1938", Q_NULLPTR)
         << QApplication::translate("personwindow", "1937", Q_NULLPTR)
         << QApplication::translate("personwindow", "1936", Q_NULLPTR)
         << QApplication::translate("personwindow", "1935", Q_NULLPTR)
         << QApplication::translate("personwindow", "1934", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("personwindow", "Change image", Q_NULLPTR));
        label_2->setText(QApplication::translate("personwindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personwindow: public Ui_personwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONWINDOW_H
