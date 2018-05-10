#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QPixmap>

class Person:public QObject
{
    Q_OBJECT
private:
    QString name;
    QString surname;
    QString sex;
    int dayB;
    QString monthB;
    int yearB;
    QString place;
    QString photoURL;

public:
    Person();
    ~Person(){}

    QString getName() const;
    void setName(const QString &value);

    QString getSurname() const;
    void setSurname(const QString &value);

    QString getSex() const;
    void setSex(const QString &value);

    int getDayB() const;
    void setDayB(int value);

    QString getMonthB() const;
    void setMonthB(const QString &value);

    int getYearB() const;
    void setYearB(int value);

    QString getPlace() const;
    void setPlace(const QString &value);

    QString getPhotoURL() const;
    void setPhotoURL(const QString &value);
private slots:
};


#endif // PERSON_H
