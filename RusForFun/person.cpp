#include "person.h"
#include <QFile>
#include <QTextStream>
#include <QPixmap>

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}

QString Person::getSurname() const
{
    return surname;
}

void Person::setSurname(const QString &value)
{
    surname = value;
}

QString Person::getSex() const
{
    return sex;
}

void Person::setSex(const QString &value)
{
    sex = value;
}

int Person::getDayB() const
{
    return dayB;
}

void Person::setDayB(int value)
{
    dayB = value;
}

QString Person::getMonthB() const
{
    return monthB;
}

void Person::setMonthB(const QString &value)
{
    monthB = value;
}

int Person::getYearB() const
{
    return yearB;
}

void Person::setYearB(int value)
{
    yearB = value;
}

QString Person::getPlace() const
{
    return place;
}

void Person::setPlace(const QString &value)
{
    place = value;
}

QString Person::getPhotoURL() const
{
    return photoURL;
}

void Person::setPhotoURL(const QString &value)
{
    photoURL = value;
}

Person::Person(){
    QFile file("user.txt");
    QString line = "";
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    }
    else {
        QTextStream in(&file);
        name = in.readLine();
        surname = in.readLine();
        sex = in.readLine();
        place = in.readLine();
        dayB = in.readLine().toInt();
        monthB = in.readLine();
        yearB = in.readLine().toInt();
        photoURL = in.readLine();
        file.close(); // Закрываем file.txt
    }

}
