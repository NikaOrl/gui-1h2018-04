/********************************************************************************
** Form generated from reading UI file 'textlessonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTLESSONWINDOW_H
#define UI_TEXTLESSONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textlessonwindow
{
public:
    QLabel *eng1;
    QFrame *line;
    QFrame *line_2;
    QLabel *rus2;
    QLabel *eng2;
    QLabel *rus1;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QLabel *medved;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_3;

    void setupUi(QWidget *textlessonwindow)
    {
        if (textlessonwindow->objectName().isEmpty())
            textlessonwindow->setObjectName(QStringLiteral("textlessonwindow"));
        textlessonwindow->resize(1383, 730);
        eng1 = new QLabel(textlessonwindow);
        eng1->setObjectName(QStringLiteral("eng1"));
        eng1->setGeometry(QRect(880, 0, 481, 261));
        QFont font;
        font.setPointSize(12);
        eng1->setFont(font);
        eng1->setAcceptDrops(false);
        eng1->setScaledContents(false);
        eng1->setWordWrap(true);
        line = new QFrame(textlessonwindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(840, 0, 20, 261));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(textlessonwindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(840, 310, 20, 281));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        rus2 = new QLabel(textlessonwindow);
        rus2->setObjectName(QStringLiteral("rus2"));
        rus2->setGeometry(QRect(360, 320, 481, 261));
        rus2->setFont(font);
        rus2->setAcceptDrops(false);
        rus2->setScaledContents(false);
        rus2->setWordWrap(true);
        eng2 = new QLabel(textlessonwindow);
        eng2->setObjectName(QStringLiteral("eng2"));
        eng2->setGeometry(QRect(880, 310, 481, 261));
        eng2->setFont(font);
        eng2->setAcceptDrops(false);
        eng2->setScaledContents(false);
        eng2->setWordWrap(true);
        rus1 = new QLabel(textlessonwindow);
        rus1->setObjectName(QStringLiteral("rus1"));
        rus1->setGeometry(QRect(360, 0, 481, 261));
        rus1->setFont(font);
        rus1->setAcceptDrops(false);
        rus1->setScaledContents(false);
        rus1->setWordWrap(true);
        label = new QLabel(textlessonwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 270, 321, 31));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        pushButton = new QPushButton(textlessonwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1082, 270, 101, 31));
        pushButton->setFont(font1);
        label_2 = new QLabel(textlessonwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1200, 275, 151, 21));
        textEdit = new QTextEdit(textlessonwindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(620, 270, 451, 31));
        pushButton_2 = new QPushButton(textlessonwindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1090, 610, 93, 28));
        pushButton_2->setFont(font1);
        textEdit_2 = new QTextEdit(textlessonwindow);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(620, 610, 451, 31));
        label_4 = new QLabel(textlessonwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1210, 610, 151, 21));
        medved = new QLabel(textlessonwindow);
        medved->setObjectName(QStringLiteral("medved"));
        medved->setGeometry(QRect(30, 80, 311, 601));
        medved->setFont(font);
        medved->setAcceptDrops(false);
        medved->setScaledContents(false);
        medved->setWordWrap(true);
        pushButton_3 = new QPushButton(textlessonwindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(740, 660, 221, 51));
        pushButton_3->setFont(font);
        label_5 = new QLabel(textlessonwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 130, 281, 91));
        label_5->setFont(font);
        label_5->setWordWrap(true);
        pushButton_4 = new QPushButton(textlessonwindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 220, 93, 28));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(textlessonwindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(190, 220, 93, 28));
        pushButton_5->setFont(font);
        label_7 = new QLabel(textlessonwindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 220, 41, 21));
        label_7->setFont(font);
        label_7->setWordWrap(true);
        label_8 = new QLabel(textlessonwindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 220, 41, 21));
        label_8->setFont(font);
        label_8->setWordWrap(true);
        pushButton_6 = new QPushButton(textlessonwindow);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 40, 51, 51));
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_7 = new QPushButton(textlessonwindow);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(90, 40, 51, 51));
        pushButton_7->setIconSize(QSize(50, 50));
        label_3 = new QLabel(textlessonwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 610, 321, 31));
        label_3->setFont(font1);

        retranslateUi(textlessonwindow);

        QMetaObject::connectSlotsByName(textlessonwindow);
    } // setupUi

    void retranslateUi(QWidget *textlessonwindow)
    {
        textlessonwindow->setWindowTitle(QApplication::translate("textlessonwindow", "Form", Q_NULLPTR));
        eng1->setText(QString());
        rus2->setText(QString());
        eng2->setText(QString());
        rus1->setText(QString());
        label->setText(QApplication::translate("textlessonwindow", "Enter the missing words separated ';'", Q_NULLPTR));
        pushButton->setText(QApplication::translate("textlessonwindow", "Check", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("textlessonwindow", "Check", Q_NULLPTR));
        label_4->setText(QString());
        medved->setText(QApplication::translate("textlessonwindow", "Medved", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("textlessonwindow", "Finish the task", Q_NULLPTR));
        label_5->setText(QApplication::translate("textlessonwindow", "\n"
"Listen to audio, read the text and insert the missing words", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("textlessonwindow", "Hint", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("textlessonwindow", "Joke", Q_NULLPTR));
        label_7->setText(QApplication::translate("textlessonwindow", "or", Q_NULLPTR));
        label_8->setText(QApplication::translate("textlessonwindow", "?", Q_NULLPTR));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_3->setText(QApplication::translate("textlessonwindow", "Enter the missing words separated ';'", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class textlessonwindow: public Ui_textlessonwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTLESSONWINDOW_H
