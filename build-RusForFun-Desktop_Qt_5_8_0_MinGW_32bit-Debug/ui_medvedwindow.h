/********************************************************************************
** Form generated from reading UI file 'medvedwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDVEDWINDOW_H
#define UI_MEDVEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_medvedwindow
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *medvedwindow)
    {
        if (medvedwindow->objectName().isEmpty())
            medvedwindow->setObjectName(QStringLiteral("medvedwindow"));
        medvedwindow->resize(496, 386);
        pushButton = new QPushButton(medvedwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 320, 181, 51));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(medvedwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 181, 31));
        label->setFont(font);
        label_2 = new QLabel(medvedwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 40, 391, 281));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        retranslateUi(medvedwindow);

        QMetaObject::connectSlotsByName(medvedwindow);
    } // setupUi

    void retranslateUi(QWidget *medvedwindow)
    {
        medvedwindow->setWindowTitle(QApplication::translate("medvedwindow", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("medvedwindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class medvedwindow: public Ui_medvedwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDVEDWINDOW_H
